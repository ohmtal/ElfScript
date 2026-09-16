//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// Lambda
//-----------------------------------------------------------------------------
#pragma once

#include "console/engineAPI.h"
#include "console/torquescript/codeBlock.h"
#include <console/consoleInternal.h>
#include "Array.h"


namespace ElfScript::Lambda {
// ----------------------------------------------------------------------------
// ----------------------------------------------------------------------------
 inline Namespace::Entry* getFn(const ConsoleValue& lambdaValue) {
    if  (  !lambdaValue.dataPtr ||
           lambdaValue.type != ConsoleValueType::cvPointer ||
           lambdaValue.subType != ConsoleValueSubType::cvsLambda) {
        Con::debugf("LAMBDA Error: function not found!");
        return nullptr;

    }
    Namespace::Entry* nsEntryPtr = reinterpret_cast<Namespace::Entry*>(lambdaValue.dataPtr);

    if (!nsEntryPtr || !nsEntryPtr->mFunctionOffset) {
        Con::debugf("LAMBDA Error: function is invalid!");
        return nullptr;
    }

    return nsEntryPtr;
}

// ----------------------------------------------------------------------------
// InjectCaller Class using TorqueScript CodeBlock
// like the custom effective run loop look at: PointStorageObject runInjectFn
// ----------------------------------------------------------------------------
class InjectCaller {

private:
    // status
    bool mInitialized = false;
    bool mFrameIsOpen = false;

    // register / code  params
    U32* mCode        = nullptr;
    U32  mRegCount    = 0;
    U32  mHeaderArgc  = 0;


    // function params
    CodeBlock* mFuncModule       = nullptr;
    U32 mFuncOffSet              = 0;
    Namespace* mFuncNameSpace    = nullptr;
    StringTableEntry mFuncName   = nullptr;
    StringTableEntry mFuncPackage = nullptr;

public:
    inline bool isInitialized() { return mInitialized;}
    inline bool isOpen() { return mFrameIsOpen;}
    inline U32  getHeaderArgC() { return mHeaderArgc;}
    // ------------------------------------------------------------------
    // ourMinimalParamCount is the count we need to push in
    // if the Lamda have less we bail out.
    inline bool Init(Namespace::Entry* entry, U32 ourMinimalParamCount) {
        if (mFrameIsOpen) {
            Con::errorf("InjectCaller::Init Error: Frame already open!");
            return false;
        }
        if (!entry || !entry->mModule || !entry->mFunctionName
            || entry->mFunctionName[0] == '\0') {
            Con::errorf("InjectCaller::Init Error: no valid function!");
            return false;
        }
        mFuncModule     = reinterpret_cast<CodeBlock*>(entry->mModule);
        mFuncOffSet     = entry->mFunctionOffset;
        mFuncNameSpace  = entry->mNamespace;
        mFuncName       = entry->mFunctionName;
        mFuncPackage    = entry->mPackage;

        mCode           = mFuncModule->code;
        mHeaderArgc     = mCode[mFuncOffSet + 2 + 6];
        mRegCount       = mCode[mFuncOffSet + 2 + 7];

        if (mHeaderArgc < ourMinimalParamCount) {
            Con::errorf(
                "InjectCaller::Init Error: Lambda function have less (%d) parameters than you"
                "requrested as minimum (%d)", mHeaderArgc, ourMinimalParamCount
            );
            return false;
        }
        mInitialized = true;
        return true;
    }
    // ------------------------------------------------------------------
    inline bool Open() {
        if (mFrameIsOpen) {
            Con::errorf("InjectCaller::Open Error: Frame already open!");
            return false;
        }
        if (!mInitialized){
            Con::errorf( "InjectCaller::Open Error: Failed to Open call Init first!");
            return false;
        }
        // pushframe every iteration is slow so I push it once
        // Script::gEvalState.pushFrame(NULL, NULL, mRegCount);
        Script::gEvalState.pushFrame(mFuncName, NULL, mRegCount);
        mFrameIsOpen = true;
        return true;
    }
    // ------------------------------------------------------------------
    inline bool Run(U32 injectArgC, ConsoleValue* injectArgV, ConsoleValue& resultValue) {
        if (!mFrameIsOpen) {
            Con::errorf("InjectCaller::Run Error: Frame is not open!");
            return false;
        }
        // set up injected params:
        for (U32 i = 0; i < injectArgC; i++) {
            U32 argIndexInLambda = i;

            // overflow ?
            if (argIndexInLambda >= mHeaderArgc) break;

            // fetch the register and go
            U32 targetRegister = mCode[mFuncOffSet + 10 + argIndexInLambda];
            Script::gEvalState.currentRegisterArray->values[targetRegister] = injectArgV[i];
        }

        const Con::EvalResult evalRes = mFuncModule->exec(
            mFuncOffSet,
            mFuncName,
            mFuncNameSpace,
            0, nullptr,
            false, mFuncPackage,
            Con::LamdaCallInjectedFrame_ID
        );


        if (evalRes.valid) {
            resultValue = evalRes.value;
            return true;
        }
        // evalRes is not valid!
        Close();
        return false;

    }
    // ------------------------------------------------------------------
    inline bool Close() {
        if (!mFrameIsOpen) {
            Con::errorf("InjectCaller::Close Error: Frame is not open!");
            return false;
        }
        Script::gEvalState.popFrame();
        mFrameIsOpen = false;
        return true;
    }
};

// this is more a test than it should be used!
inline bool callFNInjected(
    const ConsoleValue& funcValue
    , U32 minParams
    , U32 injectArgC, ConsoleValue* injectArgV
    , ConsoleValue& resultValue
) {
    Namespace::Entry* nsEntryPtr = getFn(funcValue);
    if (!nsEntryPtr) return false;
    InjectCaller caller;

    if (!caller.Init(nsEntryPtr, minParams)) return false;
    if (!caller.Open()) return false;
    if (!caller.Run(injectArgC, injectArgV, resultValue)) return false;
    return caller.Close();

}

// ----------------------------------------------------------------------------
// Normal calls
// ----------------------------------------------------------------------------
// if transparentParams is true. functionName is not set !


 inline bool callFnTight(
     CodeBlock* funcModule
    , const U32 funcOffSet
    , Namespace* funcNameSpace
    , StringTableEntry funcName
    , StringTableEntry funcPackage
    , U32 argC
    , ConsoleValue* argV
    , ConsoleValue& result
    )
{
    const Con::EvalResult evalRes = funcModule->exec(
         funcOffSet,
         funcName,
         funcNameSpace,
         argC, argV,
        false, funcPackage
     );
     if (!evalRes.valid) return false;
     result = evalRes.value;
     return true;
 }



 inline  bool callFn(Namespace::Entry* fn, Array* params, ConsoleValue& result, bool transparentParams = false){
    if (!fn || !params) return false;
    if (!transparentParams) {
        ConsoleValue myValue;
        myValue.setString(fn->mFunctionName);
        params->mValues.push_front(myValue);
    }

    const Con::EvalResult evalRes = fn->mModule->exec(
        fn->mFunctionOffset,
        fn->mFunctionName,
        fn->mNamespace,
        params->mValues.size(), params->mValues.address(),
        false, fn->mPackage
    );
    if (!transparentParams) params->mValues.pop_front(); //remove it again !
    if (!evalRes.valid) return false;
    result = evalRes.value;


    return true;
}
// ----------------------------------------------------------------------------
/**
 * Call Lambda with params, param 0 is automaticly added by this function!
 */
 inline bool callValue(ConsoleValue& value, Array* params, ConsoleValue& result){
    if (!params) return false;
    Namespace::Entry* nsEntryPtr = getFn(value);
    if (!nsEntryPtr) return false;

    return callFn(nsEntryPtr, params, result);

}

} // namespace
