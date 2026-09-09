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
    engineGlue::argParser(argc, argv);

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
