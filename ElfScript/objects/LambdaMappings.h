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
 inline Namespace::Entry* getFn(ConsoleValue& lambdaValue) {
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
