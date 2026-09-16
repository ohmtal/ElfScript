//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// Lambda
//-----------------------------------------------------------------------------
#include "LambdaMappings.h"
// #include "console/localVar.h"
#include "console/console.h"

namespace ElfScript::Lambda {


    ConsoleValueFunction( runInjectedLambda, 2, 0, "Run injected Lambda function with parameters") {
        // argv[0] ==> function name << runInjectFn
        // argv[1] ==> should be the Lambda variable
        // argv[2] ==> here we go ..... with params

        // Con::printSeparator();
        // for (S32 i = 0; i < argc; i++) {
        //     Con::printf("#%d %s", i, argv[i].getString());
        // }
        // Con::printSeparator();

        ConsoleValue resultValue;
        if (argv[1].type != ConsoleValueType::cvPointer
            || argv[1].subType != ConsoleValueSubType::cvsLambda
            || !argv[1].dataPtr
        ) {
            Con::errorf("runInjectedLambda: Error first parameter must be a valid Lambda funtion!");
            return resultValue;
        }

        callFNInjected(
            /*ConsoleValue&*/                argv[1],
            /*U32 minParams*/                      0,
            /*U32 injectArgC*/              argc - 2,
            /*ConsoleValue* injectArgV*/   (argc > 2) ? argv + 2 : nullptr,
            /*ConsoleValue& resultValue*/   resultValue

        );

        return resultValue;
    }


} // namespace


// DefineEngineFunction(callLambdaTest, ConsoleValue, (ConsoleValue lambdaValue, Array* params ),,"") {
//     ConsoleValue result;
//
//     if (!ElfScript::Lambda::callValue(lambdaValue, params, result)) {
//         Con::errorf("callLambdaTest Failed!!");
//     }
//     return result;
// }
/*

DefineEngineFunction(callLambdaTest2, ConsoleValue, (ConsoleValue lambdaValue),,"") {
    ConsoleValue result;

    if (!ElfScript::Lambda::callValueWithOutArgs(lambdaValue, result)) {
        Con::errorf("callLambdaTest2 Failed!!");
    }
    return result;
}*/
