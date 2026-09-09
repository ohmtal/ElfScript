//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// New Version without the MainInit, MainLoop, MainShutdown callbacks
// but with a WindowShouldClose overwrite call
//
// NOTE Emscripten must use -sASYNCIFY
//-----------------------------------------------------------------------------
#include "raylib.h"
#include "main/engineGlue.h"
#include "console/script.h"
#include "console/engineAPI.h"

#ifdef __EMSCRIPTEN__
#include <emscripten/emscripten.h>
#endif

String gScriptFile = "assets/main.elf";
bool gShutDownRequest = false;
bool gEnableConsole = false;

extern void initEnum();  //elfEnum.cpp
extern void CustomTraceLog(int msgType, const char *text, va_list args); //elfBase.cpp
namespace ElfResource { extern void shutDown(); }


// -----------------------------------------------------------------------------
int argParser(int argc, char* argv[]) {

    // pass to script in TGE/OGE3D  it is called Game::!,
    Con::setIntVariable("Main::argc", argc);
    for (S32 i = 0; i < argc; i++)
        Con::setVariable(avar("Main::argv%d", i), argv[i]);

    String argStr;

    for (S32 i = 1; i < argc; ++i) {
        if (!argv[i]) continue;
        argStr = argv[i];


        if (argStr.equal("--console")) {
            gEnableConsole = true;
            continue;
        }

        // last one should be the script file
        if (i == argc - 1 ) {
            gScriptFile= argv[i];
            dPrintf("Custom Script File: %s\n", gScriptFile.c_str());
        }

        // // if (argStr.equal("--script")) {
        // //     if (i + 1 < argc) {
        // //         gScriptFile= argv[++i];
        // //         dPrintf("Custom Script File: %s\n", gScriptFile.c_str());
        // //     } else {
        // //         dPrintf("--script but no file parameter usage: --script myFile.elf\n");
        // //         return 1;
        // //     }
        // //     continue;
        // // }


    } //for ...
    return 0;
}
// -----------------------------------------------------------------------------
void defaultLoop(void*) {
    // --------- advance time for scheduler this should be called from main loop

    static F32 timeAccumulator = 0.0f;
    F32 currentMs = (GetFrameTime() * 1000.0f) + timeAccumulator;
    U32 dtMs = (U32)currentMs;
    timeAccumulator = currentMs - (F32)dtMs;
    engineGlue::process(dtMs);

    #ifdef __EMSCRIPTEN__
    emscripten_sleep(1);
    #endif

}
// -----------------------------------------------------------------------------
DefineEngineFunction(WindowShouldClose, bool, (),,
                     "Main Loop for Raylib ElfScript\n"
                     "keeping ElfScript scheduler and Garbage Collection running\n"
                     "See also $RAY::ShutDownRequested\n"
                     "@return true if shutDown request is set."
) {

    if (WindowShouldClose()) return true;

    defaultLoop(nullptr);
    if (gShutDownRequest) return true;

    return false;
}
// -----------------------------------------------------------------------------
int defaultMain(int argc, char* argv[])
{
    argParser(argc, argv);
    engineGlue::init(nullptr, GetApplicationDirectory());
    initEnum();
    SetTraceLogCallback(CustomTraceLog);

    Con::addVariable( "$RAY::ShutDownRequested", TypeBool, &gShutDownRequest, "Script request ShutDown");



    if (!Con::executeFile(gScriptFile.c_str())) {
        Con::errorf("main script not found.");
        return 1;
    }



    // -------- finallize
    ElfResource::shutDown();
    engineGlue::shutDown();

    return 0;
}
