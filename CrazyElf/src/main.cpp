//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// baseElf Main source
//-----------------------------------------------------------------------------
#include <cstdio>

// ---- ElfScript
#include "main/engineGlue.h"
#include "console/console.h"
#include "console/engineAPI.h"
#include "console/script.h"
#include "core/strings/stringUnit.h"

// SDL3
#include "SDL3/SDL.h"

// ElfScript SDL3 addon
#include "addons/SDL3/SDL3_ElfScriptGlue.h"


#if defined(__unix__)
#include "addons/shellConsole/POSIXStdConsole.h"
#endif


// moved to engineGlue ==>
// String gDirectory = "";
// String gScriptFile = "assets/main.elf";
// //-----------------------------------------------------------------------------
// int argParser(int argc, char* argv[]) {
//
//     // pass to script in TGE/OGE3D  it is called Game::!,
//     Con::setIntVariable("Main::argc", argc);
//     for (S32 i = 0; i < argc; i++)
//         Con::setVariable(avar("Main::argv%d", i), argv[i]);
//
//     String argStr;
//     // argv[0] is program name
//     for (S32 i = 1; i < argc; ++i) {
//         if (!argv[i]) continue;
//         argStr = argv[i];
//
//         if (argStr.equal("--chdir")) {
//             if (i + 1 < argc) {
//                 gDirectory= argv[++i];
//                 dPrintf("Custom Directory: %s\n", gDirectory.c_str());
//             } else {
//                 dPrintf("--chdir but no file parameter usage: --chdir /where/my/assets/live\n");
//                 return 1;
//             }
//             continue;
//         }
//         // filename test
//         if (argStr.equal("--script")) {
//             if (i + 1 < argc) {
//                 gScriptFile= argv[++i];
//                 dPrintf("Custom Script File: %s\n", gScriptFile.c_str());
//             } else {
//                 dPrintf("--script but no file parameter usage: --script myFile.cs\n");
//                 return 1;
//             }
//             continue;
//         }
//
//
//     } //for ...
//     return 0;
// }

// NOTE moved to SDL3_ElfScriptGlue =>
// // ----------------------------------------------------------------------------
// F64 gFrameTime = 0.f;
// DefineEngineFunction(GetFrameTime, F64, (), , "Get the current frame time") {
//     return gFrameTime;
// }
// // ----------------------------------------------------------------------------
// DefineEngineFunction(SDL_MainLoop, bool, (S32 RendererID),(0),"Main Loop for events and more...\n"
//     "optional RendererID parameter is required when you set SDL_SetRenderLogicalPresentation\n"
//     "to match the mouse position to the scaled screen."
// ) {
//
//     static U32 lastTicks = SDL_GetTicks();
//
//     U32 msEllapsed = SDL_GetTicks() - lastTicks;
//     gFrameTime = msEllapsed / 1000.f;
//     engineGlue::process(msEllapsed );
//     lastTicks = SDL_GetTicks();
//
//     ElfSDL3::ClearInputFrameTicks();
//
//     SDL_Renderer* renderer = nullptr;
//     if ( RendererID > 0 ) {
//         renderer = ElfSDL3::RendererMap.getValue(RendererID);
//     }
//
//     SDL_Event event;
//     while (SDL_PollEvent(&event)) {
//         // when using SDL_SetRenderLogicalPresentation (scaling)
//         if (renderer) {
//             SDL_ConvertEventToRenderCoordinates(renderer, &event);
//         }
//
//         switch (event.type) {
//             case SDL_EVENT_QUIT:
//                 Con::printf("******* Quit Event ********");
//                 return false;
//                 break;
//             case SDL_EVENT_WINDOW_CLOSE_REQUESTED:
//                 Con::printf("******* Window Close Event ********");
//                 //FIXME check main window ......
//
//                 break;
//         };
//         ElfSDL3::onEvent(event);
//
//     }
//
//     #if defined(__unix__)
//     stdConsole->process();
//     #endif
//
//     return true;
// }
// ----------------------------------------------------------------------------
int main(int argc, char* argv[]) {
    engineGlue::argParser(argc, argv);
    Con::printf("ElfScript::init.....");
    engineGlue::init(nullptr );
    Con::printf("InitSDLBindings.....");
    ElfSDL3::InitSDLBindings();

    #if defined(__unix__)
    // console, i also have a console source for mswin but untested:
    StdConsole::create();
    stdConsole->enable(true);
    stdConsole->enableInput(true);
    stdConsole->muteConMessage(true); //prevent double output

    ElfSDL3::OnLoop = [](const SDL_Event& event) {
         stdConsole->process();
    };

    #endif

    Con::printf("loading script %s", engineGlue::ScriptFile.c_str());
    Con::executeFile(engineGlue::ScriptFile);

    Con::printf("ShutdownSDLBindings ....");
    ElfSDL3::ShutdownSDLBindings();
    Con::printf("ElfScript::shutDown ....");
    engineGlue::shutDown();
    return 0;
}
