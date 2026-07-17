//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// SDL3 Scancodes and IsKeyPressed, IsKeyDown, IsKeyReleased, IsKeyUp
//-----------------------------------------------------------------------------
#pragma once

#include <SDL3/SDL.h>

namespace ElfSDL3 {
    // NOTE IMPLEMENTATION: You need to call this once to register the constants
    void InitKeyCodes();

    // NOTE IMPLEMENTATION:  reset the states very frame
    void ClearInputFrameTicks();

    // --------------- Keyboard via Scancodes: -----------------
    void RegisterInputConstants();

    // NOTE IMPLEMENTATION:  on SDL_EVENT_KEY_UP and SDL_EVENT_KEY_DOWN call this
    void onKeyEvent(const SDL_Event& event);

    bool IsKeyPressed(SDL_Scancode key);
    bool IsKeyDown(SDL_Scancode key);
    bool IsKeyReleased(SDL_Scancode key);
    bool IsKeyUp(SDL_Scancode key) ;
    bool IsKeyRepeat(SDL_Scancode key);

    bool IsShortcutPressed(Uint16 modifiers, SDL_Scancode key);

    // --------------- Mouse ----------------
    // NOTE IMPLEMENTATION:  on SDL_EVENT_KEY_UP and SDL_EVENT_KEY_DOWN call this
    void onMouseEvent(const SDL_Event& event);

    // --- mouse buttons  ---
    bool IsMouseButtonPressed(U32 button);
    bool IsMouseButtonDown(U32 button);
    bool IsMouseButtonReleased(U32 button);
    bool IsMouseButtonUp(U32 button);

    // --- mouse movement  ---
    float GetMouseX();
    float GetMouseY();
    float GetMouseDeltaX();
    float GetMouseDeltaY();
    float GetMouseWheelX();
    float GetMouseWheelY();

}
