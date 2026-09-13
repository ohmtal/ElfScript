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
TORQUE_FORCEINLINE inline Namespace::Entry* getEntry(ConsoleValue& lambdaValue) {
    if  (  lambdaValue.type != ConsoleValueType::cvLambda || !lambdaValue.dataPtr) {
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
/**
 * Call Lambda with params, param 0 is automaticly added by this function!
 */
TORQUE_FORCEINLINE inline bool callValue(ConsoleValue& value, Array* params, ConsoleValue& result){
    if (!params) return false;
    Namespace::Entry* nsEntryPtr = getEntry(value);
    if (!nsEntryPtr) return false;
    muleValue.setString(nsEntryPtr->mFunctionName);
    params->mValues.push_front(muleValue);
    result = nsEntryPtr->mModule->exec(
                    nsEntryPtr->mFunctionOffset,
                    nsEntryPtr->mFunctionName,
                    nsEntryPtr->mNamespace,
                    params->mValues.size(), params->mValues.address(),
                    false, nsEntryPtr->mPackage
                    ).value;
    return true;
}
// ----------------------------------------------------------------------------

} // namespace
