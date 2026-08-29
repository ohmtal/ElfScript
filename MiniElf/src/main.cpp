//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// baseElf Main source
//-----------------------------------------------------------------------------
#include <cstdio>

// ---- ElfScript
#include "main/engineGlue.h"
#include "console/script.h"

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
int main(int argc, char* argv[]) {
    engineGlue::silent = true;
    engineGlue::ScriptFile = "";
    argParser(argc, argv);

    if (engineGlue::ScriptFile.isEmpty()) {
        printf("\n\nUsage: %s scriptfilename.elf\n\n", argv[0] );
        return 0;
    }
    // Con::infof("Init ElfScript.....");
    engineGlue::init(nullptr ); // nullptr => we use default logger

    // Con::infof("loading script %s", engineGlue::ScriptFile.c_str());
    Con::executeFile(engineGlue::ScriptFile);

    // Con::infof("Shutdown ElfScript ....");
    engineGlue::shutDown();
    return 0;
}
