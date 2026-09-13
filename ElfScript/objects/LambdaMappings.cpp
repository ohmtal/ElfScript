//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// Lambda
//-----------------------------------------------------------------------------
#include "LambdaMappings.h"
namespace ElfScript::Lambda {




} // namespace

DefineEngineFunction(callLambdaTest, ConsoleValue, (ConsoleValue lambdaValue, Array* params ),,"") {
    ConsoleValue result;

    if (!ElfScript::Lambda::callValue(lambdaValue, params, result)) {
        Con::errorf("callLambdaTest Failed!!");
    }
    return result;
}
