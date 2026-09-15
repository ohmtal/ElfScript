//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// Lambda
//-----------------------------------------------------------------------------
#pragma once

#include "console/engineAPI.h"
#include <console/consoleInternal.h>
#include "Array.h"

namespace ElfScript::Lambda {
// ----------------------------------------------------------------------------
namespace {
    ConsoleValue muleValue;
    Array muleArray();
}
// ----------------------------------------------------------------------------
TORQUE_FORCEINLINE inline Namespace::Entry* getFn(ConsoleValue& lambdaValue) {
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
TORQUE_FORCEINLINE inline bool callFn(Namespace::Entry* fn, Array* params, ConsoleValue& result, bool transparentParams = false){
    if (!fn || !params) return false;
    if (!transparentParams) {
        muleValue.setString(fn->mFunctionName);
        params->mValues.push_front(muleValue);
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
TORQUE_FORCEINLINE inline bool callValue(ConsoleValue& value, Array* params, ConsoleValue& result){
    if (!params) return false;
    Namespace::Entry* nsEntryPtr = getFn(value);
    if (!nsEntryPtr) return false;

    return callFn(nsEntryPtr, params, result);

}
// ----------------------------------------------------------------------------
// NOTE THIS SHOULD BE THE LOCAL VARS FROM GLOBAL:
// Script::gEvalState.currentRegisterArray = &Script::gEvalState.localStack[0];
// i guess garbage collection kill this somewhere variables are there but scrambled.
// ----------------------------------------------------------------------------
TORQUE_FORCEINLINE inline bool callValueWithOutArgs(ConsoleValue& value,  ConsoleValue& result){
    Namespace::Entry* nsEntryPtr = getFn(value);
    if (!nsEntryPtr) return false;
    muleValue.setString(nsEntryPtr->mFunctionName);
    result = nsEntryPtr->mModule->exec(
        nsEntryPtr->mFunctionOffset,
        nsEntryPtr->mFunctionName,
        nsEntryPtr->mNamespace,
        1, &muleValue,
        false, nsEntryPtr->mPackage
        // ,-569 //frame
    ).value;
    return true;
}
} // namespace
