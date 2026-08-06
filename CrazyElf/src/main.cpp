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
#include "addons/SDL3/SDL3_core.h"
#include "addons/SDL3/SDL3_render.h"
#include "addons/SDL3/SDL3_audio.h"
#include "addons/SDL3/SDL3_input.h"
#include "addons/SDL3/SDL3_Filesystem.h"

#if defined(__unix__)
#include "addons/shellConsole/POSIXStdConsole.h"
// #include <platform/platformVolume.h>
#endif


String gDirectory = "";
String gScriptFile = "assets/main.elf";


//-----------------------------------------------------------------------------
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

        if (argStr.equal("--chdir")) {
            if (i + 1 < argc) {
                gDirectory= argv[++i];
                dPrintf("Custom Directory: %s\n", gDirectory.c_str());
            } else {
                dPrintf("--chdir but no file parameter usage: --chdir /where/my/assets/live\n");
                return 1;
            }
            continue;
        }
        // filename test
        if (argStr.equal("--script")) {
            if (i + 1 < argc) {
                gScriptFile= argv[++i];
                dPrintf("Custom Script File: %s\n", gScriptFile.c_str());
            } else {
                dPrintf("--script but no file parameter usage: --script myFile.cs\n");
                return 1;
            }
            continue;
        }


    } //for ...
    return 0;
}
// ----------------------------------------------------------------------------
void InitSDLBindings() {
    ElfSDL3::RegisterCoreConstants();
    ElfSDL3::InitKeyCodes();
    ElfSDL3::RegisterFileSystemConstants();
    ElfSDL3::InitRenderer();
    // ElfSDL3::Audio::Init(); << must be done in script!
}

// DefineEngineFunction(InitSDLBindings, void, (), ,"Init the ElfScript SDL3-Bindings subsystem"){ InitSDLBindings();}

void ShutdownSDLBindings(){
    ElfSDL3::ShutDownRenderer();
    ElfSDL3::Audio::ShutDown();
}
// DefineEngineFunction(ShutdownSDLBindings, void, (), ,"ShutDown the ElfScript SDL3-Bindings subsystem"){ InitSDLBindings();}
// ----------------------------------------------------------------------------
F64 gFrameTime = 0.f;
DefineEngineFunction(GetFrameTime, F64, (), , "Get the current frame time") {
    return gFrameTime;
}
// ----------------------------------------------------------------------------
DefineEngineFunction(SDL_MainLoop, bool, (S32 RendererID),(0),"Main Loop for events and more...\n"
    "optional RendererID parameter is requiered when you set SDL_SetRenderLogicalPresentation " ) {

    static U32 lastTicks = SDL_GetTicks();

    U32 msEllapsed = SDL_GetTicks() - lastTicks;
    gFrameTime = msEllapsed / 1000.f;
    engineGlue::process(msEllapsed );
    lastTicks = SDL_GetTicks();

    ElfSDL3::ClearInputFrameTicks();

    SDL_Renderer* renderer = nullptr;
    if ( RendererID > 0 ) {
        renderer = ElfSDL3::RendererMap.getValue(RendererID);
    }

    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        // when using SDL_SetRenderLogicalPresentation (scaling)
        if (renderer) {
            SDL_ConvertEventToRenderCoordinates(renderer, &event);
        }

        switch (event.type) {
            case SDL_EVENT_QUIT:
                Con::printf("******* Quit Event ********");
                return false;
                break;
            case SDL_EVENT_WINDOW_CLOSE_REQUESTED:
                Con::printf("******* Window Close Event ********");
                //FIXME check main window ......

                break;
        };
        ElfSDL3::onEvent(event);

    }

    #if defined(__unix__)
    stdConsole->process();
    #endif

    return true;
}
// ----------------------------------------------------------------------------
int main(int argc, char* argv[]) {
    argParser(argc, argv);
    Con::printf("engineGlue::init.....");
    engineGlue::init(nullptr, gDirectory );
    Con::printf("InitSDLBindings.....");
    InitSDLBindings();

    #if defined(__unix__)
    // console test:

    StdConsole::create();
    stdConsole->enable(true);
    stdConsole->enableInput(true);
    stdConsole->muteConMessage(true); //prevent double output
    #endif




    Con::printf("loading script %s", gScriptFile.c_str());
    Con::executeFile(gScriptFile);

    Con::printf("ShutdownSDLBindings ....");
    ShutdownSDLBindings();
    Con::printf("engineGlue::shutDown ....");
    engineGlue::shutDown();
    return 0;
}

