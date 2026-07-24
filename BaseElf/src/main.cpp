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
#include "addons/SDL3/SDL3_input.h"

// ----  BaseFlux
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include "imgui.h"

#include "BaseFlux/Main.h"
#include "spice/gui/ImConsole.h"



BaseFlux::Main app;
ImConsole gConsole;
SDL_Point gMousePos = {0,0};

bool gShowConsole = false;

String gDirectory = "";
String gScriptFile = "main.elf";

extern void InitBindings_SDL();
extern void ShutdownBindings_SDL();
extern void InitBindings_ImGui();

//-----------------------------------------------------------------------------
// console redirect ....
void SDLCALL ConsoleLogFunction(void *userdata, int category, SDL_LogPriority priority, const char *message)
{
    U32 count = StringUnit::getUnitCount(message, "\n");

    if (count < 2) {
        gConsole.AddLog("%s", message);
    } else {
        for (U32 i = 0; i < count; i++) {
            gConsole.AddLog("%s", StringUnit::getUnit(message, i, "\n"));
        }
    }


}
//------------------------------------------------------------------------------
void MyLogger(U32 level, const char *consoleLine)
{
    switch (level) {
        case 1: SDL_Log("[warn] %s",  consoleLine); break;
        case 2: SDL_Log("[error] %s",  consoleLine); break;
        default: SDL_Log("%s",  consoleLine); break;
    }

}
// ----------------------------------------------------------------------------
void initConsole() {
    SDL_SetLogOutputFunction(ConsoleLogFunction, nullptr);

    gConsole.OnTabCompletion = [&](ImConsole* console, ImGuiInputTextCallbackData* data, bool forward) {
        char buffer[256] = {0};
        snprintf(buffer, sizeof(buffer), "%s", data->Buf);
        U32 newCursorPos = Con::tabComplete(buffer, data->CursorPos, sizeof(buffer) - 1, forward);
        // Log("TESTTAB: %s (%d)", buffer, newCursorPos);

        data->DeleteChars(0, data->BufTextLen);
        data->InsertChars(0, buffer);
        data->CursorPos = newCursorPos;
        data->SelectionStart = newCursorPos;
        data->SelectionEnd = newCursorPos;
        data->BufDirty = true;
    };

    gConsole.OnCommand = [&](ImConsole* console, const char* command_line) {
        Con::evalAutoComplete(command_line);
    };

}
// ----------------------------------------------------------------------------
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
int main(int argc, char* argv[]) {
    initConsole();
    argParser(argc, argv);
    // engineGlue::init(MyLogger, (BaseFlux::Tools::getBasePath()+"/assets").c_str());
    if (gDirectory.isEmpty()) gDirectory = BaseFlux::Tools::getBasePath().c_str();
    if (!gDirectory.endsWith("/")) gDirectory += "/";
    app.mBasePath = gDirectory;
    engineGlue::init(MyLogger, (gDirectory + "assets"));
    InitBindings_SDL();
    InitBindings_ImGui();
    ElfSDL3::InitKeyCodes();

    Con::executeFile(gScriptFile);

    bool doUpdateCall = Con::isFunction("OnUpdate");
    bool doRenderCall = Con::isFunction("OnRender");

    app.getSettings() = {
        .ScreenSize = { 800, 450},
        .Company = "Ohmtal",
        .Caption = "baseElf",
        .Version = "Version 0.1",

        // .sdlWindowFlagsOverwrite = SDL_WINDOW_BORDERLESS
    };
    // -------------------------------------------------------------------------
    if (Con::isFunction("OnLoad")) Con::executef("OnLoad");
    // -------------------------------------------------------------------------

    if ( !app.InitSDL() ) return 1;
    app.initImGui();


    // -------------------------------------------------------------------------
    if (Con::isFunction("OnInit")) Con::executef("OnInit");
    // -------------------------------------------------------------------------
    app.OnLoopBegin = []() {
        ElfSDL3::ClearInputFrameTicks();
    };
    app.OnRender = [&](SDL_Renderer* renderer) {

       if (doRenderCall) Con::executef("OnRender");


        if (ImGui::IsKeyPressed(ImGuiKey_GraveAccent)) gShowConsole = !gShowConsole;
        gConsole.Draw("Console",&gShowConsole);
    };

    // -------------------------------------------------------------------------
    app.OnUpdate = [&](const float dt) {
        if (doUpdateCall)Con::executef("OnUpdate", dt);
        engineGlue::process((SimTime)(dt * 1000.f));
    };
    // -------------------------------------------------------------------------
    app.OnEvent = [&](const SDL_Event& event) {
        if (app.getImGuiIO() && app.getImGuiIO()->WantTextInput) {
            if (event.type == SDL_EVENT_KEY_DOWN ||
                event.type == SDL_EVENT_KEY_UP ||
                event.type == SDL_EVENT_TEXT_INPUT) {
                return;
                }
        }

        ElfSDL3::onEvent(event);
        switch (event.type) {
            case SDL_EVENT_MOUSE_MOTION:

                gMousePos.x = event.motion.x;
                gMousePos.y = event.motion.y;
                break;

            case SDL_EVENT_KEY_UP:
            case SDL_EVENT_KEY_DOWN:
            {
                // if ( Con::isFunction( "onInputEvent" ) ) {
                //     const char* keyName = SDL_GetKeyName(event.key.key);
                //
                //     // onInputEvent_callback(
                //     Con::executef("onInputEvent"
                //     , "keyboard"
                //     , keyName
                //     , gMousePos.x
                //     , gMousePos.y
                //     , (event.type == SDL_EVENT_KEY_DOWN ) ? "1" : "0"
                //     );
                // }
            }
            break;
            case SDL_EVENT_MOUSE_BUTTON_DOWN:
            case SDL_EVENT_MOUSE_BUTTON_UP:
            {

                // if ( Con::isFunction( "onInputEvent" ) ) {
                //     char buttonNameBuf[32];
                //     dSprintf( buttonNameBuf, sizeof(buttonNameBuf), "button%d", event.button.button );
                //     // onInputEvent_callback(
                //     Con::executef("onInputEvent"
                //     , "mouse"
                //     , buttonNameBuf
                //     , gMousePos.x
                //     , gMousePos.y
                //     , (event.type == SDL_EVENT_MOUSE_BUTTON_DOWN ) ? "1" : "0"
                //     );
                //
                // }
            }
            break;

        } //switch

    };

    app.OnShutDown = [&]() {
        ShutdownBindings_SDL();
        engineGlue::shutDown();
        if (Con::isFunction("OnShutDown")) Con::executef("OnShutDown");
    };

    app.Execute();



    return 0;
}

