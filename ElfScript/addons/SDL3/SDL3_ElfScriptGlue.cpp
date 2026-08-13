//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// Glue them together .. you can also use them separatly
//-----------------------------------------------------------------------------

#include <SDL3/SDL.h>
#include "console/engineAPI.h"
#include "main/engineGlue.h"
#include "SDL3_ElfScriptGlue.h"



namespace ElfSDL3 {
    // ----------------------------------------------------------------------------


    // ----------------------------------------------------------------------------
    // ----------------------------------------------------------------------------
    // void InitSDLBindings() {
    void Init() {
        ElfSDL3::RegisterCoreConstants();
        ElfSDL3::InitKeyCodes();
        ElfSDL3::RegisterFileSystemConstants();
        ElfSDL3::InitRenderer();
        // ElfSDL3::Audio::Init(); << must be done in script! via  Audio_Init();
    }

    // DefineEngineFunction(InitSDLBindings, void, (), ,"Init the ElfScript SDL3-Bindings subsystem"){ InitSDLBindings();}

    // void ShutdownSDLBindings(){
    void Shutdown(){
        ElfSDL3::ShutDownRenderer();
        ElfSDL3::Audio::ShutDown();
    }
    // DefineEngineFunction(ShutdownSDLBindings, void, (), ,"ShutDown the ElfScript SDL3-Bindings subsystem"){ InitSDLBindings();}
    // ----------------------------------------------------------------------------
    // ----------------------------------------------------------------------------
    DefineEngineFunction(GetFrameTime, F64, (), , "Get the current frame time") {
        return FrameTime;
    }

    // ----------------------------------------------------------------------------
    DefineEngineFunction(SDL_MainLoop, bool, (S32 RendererID),(0),"Main Loop for events and more...\n"
    "optional RendererID parameter is required when you set SDL_SetRenderLogicalPresentation\n"
    "to match the mouse position to the scaled screen."
    ) {

        static U32 lastTicks = SDL_GetTicks();

        U32 msEllapsed = SDL_GetTicks() - lastTicks;
        FrameTime = msEllapsed / 1000.f;
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

        // Event is called with current event...
        if (OnLoop) OnLoop(event);


        return true;
    }

}


