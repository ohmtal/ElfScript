//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// MiniElf Main source
//-----------------------------------------------------------------------------
#include <cstdio>

// ---- ElfScript
#include "main/engineGlue.h"    // << to init/shutdown
#include "console/script.h"     // << to load a script
#include "console/engineAPI.h"  // << to bind functions


// using my own arg parser for script file only
int argParser(int argc, char* argv[]) {

    // pass to script in TGE/OGE3D  it is called Game::!,
    Con::setIntVariable("Main::argc", argc);
    for (S32 i = 0; i < argc; i++)
        Con::setVariable(avar("Main::argv%d", i), argv[i]);

    String argStr;
    // argv[0] is program name
    for (S32 i = 1; i < argc; ++i) {
        if (!argv[i]) continue;
        argStr = argv[i];

        // only one parameter checked the last one should by a script
        if (i == argc - 1) {
            engineGlue::ScriptFile = argv[i];
        }


    } //for ...
    return 0;
}
// ----------------------------------------------------------------------------
// Example how to bind a C function
DefineEngineFunction(MyScriptFunction, void, (), ,"A comment about this function") {
    printf("Calling c printf but you can call everything here\n");
}

DefineEngineFunction(MyScriptFunctionWithParameter, void, (bool aParameter), (true),
        "We can add\n"
        "multiline comments\n") {

    // S32 is a 32bit signed integer :
    printf("Your parameter is %d\n", (S32)aParameter);
}
// ----------------------------------------------------------------------------
int main(int argc, char* argv[]) {
    engineGlue::silent = true;
    engineGlue::ScriptFile = "";
    argParser(argc, argv);
    if (engineGlue::ScriptFile.isEmpty()) {
        printf("\n\nUsage: %s scriptfilename.elf\n\n", argv[0] );
        return 0;
    }
    engineGlue::init(nullptr ); // nullptr => we use default logger

    // ... some code here
    Con::executeFile(engineGlue::ScriptFile);
    // and some code here .....

    engineGlue::shutDown();
    return 0;
}
