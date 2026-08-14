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


// SDL3
#include "SDL3/SDL.h"

// ElfScript SDL3 addon
#include "addons/SDL3/SDL3_ElfScriptGlue.h"

// #ifdef TORQUE_DEBUG
    #if defined(__unix__)
        #include "addons/shellConsole/POSIXStdConsole.h"
    #endif
// #endif



// ----------------------------------------------------------------------------
int main(int argc, char* argv[]) {
    engineGlue::argParser(argc, argv);
    Con::infof("Init ElfScript.....");
    engineGlue::init(nullptr ); // nullptr => we use default logger
    Con::infof("Init SDL3 ElfScript.....");
    ElfSDL3::Init();

// #ifdef TORQUE_DEBUG
    #if defined(__unix__)
    StdConsole::create();
    stdConsole->enable(true);
    stdConsole->enableInput(true);
    stdConsole->muteConMessage(true); //prevent double output

    ElfSDL3::OnLoop = [](const SDL_Event& event) {
         stdConsole->process();
    };
    #endif
// #endif

    Con::infof("loading script %s", engineGlue::ScriptFile.c_str());
    Con::executeFile(engineGlue::ScriptFile);

    Con::infof("Shutdown SDL3 ElfScript ....");
    ElfSDL3::Shutdown();
    Con::infof("Shutdown ElfScript ....");
    engineGlue::shutDown();
    return 0;
}
