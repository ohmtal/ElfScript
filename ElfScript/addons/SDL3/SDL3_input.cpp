//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// SDL3 Keyboard (via scancodes) and Mouse event handling
//-----------------------------------------------------------------------------
#include "console/scriptPreprocessor.h"
#include "console/engineAPI.h"

#include <SDL3/SDL.h>
#include <console/script.h>

#ifndef ElfSDL3_DISABLE_POLL
#define ElfSDL3_ENABLE_POLL
#endif


    IMPLEMENT_GLOBAL_CALLBACK(onSDLKeyBoardEvent,void
        , (S32 scancode, S32 modifiers, bool isKeyDown, bool isKeyRepeat)
        , (scancode, modifiers, isKeyDown, isKeyRepeat)
        ,"Event triggered when a key is pressed or released." );

    // to many calles ... disabled
    // IMPLEMENT_GLOBAL_CALLBACK(onSDLMouseMotionEvent,void
    // , (F32 mouseX, F32 mouseY, F32 DeltaX, F32 DeltaY)
    // , ( mouseX, mouseY, DeltaX, DeltaY)
    // ,"Event triggered when mouse is moved" );

    IMPLEMENT_GLOBAL_CALLBACK(onSDLMouseButtonEvent,void
    , (S32 button, bool isDown, F32 mouseX, F32 mouseY)
    , ( button , isDown, mouseX, mouseY)
    ,"Event triggered when mousebutton is pressed" );

    IMPLEMENT_GLOBAL_CALLBACK(onSDLMouseWheelEvent,void
    , (F32 wheelX, F32 wheelY)
    , ( wheelX, wheelY)
    ,"Event triggered when mouse wheel is moved" );

namespace ElfSDL3 {

namespace {

    // --- keyboard ---
    enum KeyFlags : Uint8 {
        KF_None     = 0,
        KF_Down     = 1 << 0,
        KF_Pressed  = 1 << 1,
        KF_Released = 1 << 2,
        KF_Repeat   = 1 << 3
    };

    Uint8 s_KeyState[SDL_SCANCODE_COUNT];

    // --- mouse ---
    #define MAX_MOUSE_BUTTONS 8
    Uint8 s_MouseButtonState[MAX_MOUSE_BUTTONS];

    float s_MouseX = 0.0f;
    float s_MouseY = 0.0f;
    float s_MouseDeltaX = 0.0f;
    float s_MouseDeltaY = 0.0f;
    float s_MouseWheelX = 0.0f;
    float s_MouseWheelY = 0.0f;

    // --- init ----
    bool s_initialized = false; //NOTE not used at the moment
}
// -----------------------------------------------------------------------------
void ClearInputFrameTicks() {
    // --- keyboard ---
    for (int i = 0; i < SDL_SCANCODE_COUNT; ++i) {
        s_KeyState[i] &= ~(KF_Pressed | KF_Released | KF_Repeat);
    }
    // --- mouse ---
    for (int i = 0; i < MAX_MOUSE_BUTTONS; ++i) {
        s_MouseButtonState[i] &= ~(KF_Pressed | KF_Released);
    }
    s_MouseDeltaX = 0.0f;
    s_MouseDeltaY = 0.0f;
    s_MouseWheelX = 0.0f;
    s_MouseWheelY = 0.0f;
}
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// Mouse && Keyboard Events (on call)
// -----------------------------------------------------------------------------
void _onKeyEvent(const SDL_Event& event) {
    SDL_Scancode code = event.key.scancode;
    if (code >= SDL_SCANCODE_COUNT || code == SDL_SCANCODE_UNKNOWN) {
        return;
    }

    if (event.type == SDL_EVENT_KEY_DOWN) {
        if (event.key.repeat) {
            s_KeyState[code] |= KF_Repeat;
        } else {
            s_KeyState[code] |= KF_Down;
            s_KeyState[code] |= KF_Pressed;
        }
    }
    else if (event.type == SDL_EVENT_KEY_UP) {
        s_KeyState[code] &= ~KF_Down;
        s_KeyState[code] |= KF_Released;
    }

    onSDLKeyBoardEvent_callback(code, event.key.mod, event.type == SDL_EVENT_KEY_DOWN, event.key.repeat);

}
// -----------------------------------------------------------------------------
void onEvent(const SDL_Event& event) {
    switch (event.type) {
        case SDL_EVENT_MOUSE_MOTION:
            s_MouseX = event.motion.x;
            s_MouseY = event.motion.y;
            s_MouseDeltaX += event.motion.xrel;
            s_MouseDeltaY += event.motion.yrel;

            // onSDLMouseMotionEvent_callback(event.motion.x, event.motion.y, event.motion.xrel, event.motion.yrel);
            break;

        case SDL_EVENT_MOUSE_BUTTON_DOWN: {
            Uint8 btn = event.button.button;
            if (btn < MAX_MOUSE_BUTTONS) {
                s_MouseButtonState[btn] |= KF_Down;
                s_MouseButtonState[btn] |= KF_Pressed;
                onSDLMouseButtonEvent_callback((S32)btn, true, s_MouseX, s_MouseY);
            }
            break;
        }


        case SDL_EVENT_MOUSE_BUTTON_UP: {
            Uint8 btn = event.button.button;
            if (btn < MAX_MOUSE_BUTTONS) {
                s_MouseButtonState[btn] &= ~KF_Down;
                s_MouseButtonState[btn] |= KF_Released;
                onSDLMouseButtonEvent_callback((S32)btn, false, s_MouseX, s_MouseY);
            }
            break;
        }


        case SDL_EVENT_MOUSE_WHEEL:
            s_MouseWheelX += event.wheel.x;
            s_MouseWheelY += event.wheel.y;
            onSDLMouseWheelEvent_callback(event.wheel.x, event.wheel.y);
            break;

        case SDL_EVENT_KEY_UP:
        case SDL_EVENT_KEY_DOWN:
        {
            _onKeyEvent(event);
        }
        break;
    }

}



// -----------------------------------------------------------------------------

bool IsKeyPressed(SDL_Scancode key) {
    return (s_KeyState[key] & KF_Pressed) != 0;
}

bool IsKeyDown(SDL_Scancode key) {
    return (s_KeyState[key] & KF_Down) != 0;
}

bool IsKeyReleased(SDL_Scancode key) {
    return (s_KeyState[key] & KF_Released) != 0;
}

bool IsKeyUp(SDL_Scancode key) {
    return (s_KeyState[key] & KF_Down) == 0;
}

bool IsKeyRepeat(SDL_Scancode key) {
    return (s_KeyState[key] & KF_Repeat) != 0;
}

bool IsShortcutPressed(Uint16 modifiers, SDL_Scancode key) {
    if (!IsKeyPressed(key)) {
        return false;
    }
    if ((modifiers & SDL_KMOD_CTRL) && !IsKeyDown(SDL_SCANCODE_LCTRL) && !IsKeyDown(SDL_SCANCODE_RCTRL)) {
        return false;
    }
    if ((modifiers & SDL_KMOD_SHIFT) && !IsKeyDown(SDL_SCANCODE_LSHIFT) && !IsKeyDown(SDL_SCANCODE_RSHIFT)) {
        return false;
    }
    if ((modifiers & SDL_KMOD_ALT) && !IsKeyDown(SDL_SCANCODE_LALT) && !IsKeyDown(SDL_SCANCODE_RALT)) {
        return false;
    }
    if ((modifiers & SDL_KMOD_GUI) && !IsKeyDown(SDL_SCANCODE_LGUI) && !IsKeyDown(SDL_SCANCODE_RGUI)) {
        return false;
    }
    return true;
}


// -----------------------------------------------------------------------------
#ifdef ElfSDL3_ENABLE_POLL
DefineEngineFunction(SDL_IsKeyPressed, bool, (S32 scancode),, "return if the key with value scancode is pressed."){
    return IsKeyPressed((SDL_Scancode)scancode);
}
DefineEngineFunction(SDL_IsKeyDown, bool, (S32 scancode),, "return if the key with value scancode is just pressed."){
    return IsKeyDown((SDL_Scancode)scancode);
}
DefineEngineFunction(SDL_IsKeyUp, bool, (S32 scancode),, "return if the key with value scancode is just released."){
    return IsKeyUp((SDL_Scancode)scancode);
}
DefineEngineFunction(SDL_IsKeyRepeat, bool, (S32 scancode),, "return if the key with value scancode is repeated."){
    return IsKeyRepeat((SDL_Scancode)scancode);
}

DefineEngineFunction(SDL_IsShortcutPressed, bool, (S32 modifiers, S32 scancode),, "Returns true if the shortcut (modifier combo + key press) was triggered.") {
    return IsShortcutPressed((Uint16)modifiers, (SDL_Scancode)scancode);
}
#endif //#ifdef ElfSDL3_ENABLE_POLL

bool IsMouseButtonPressed(U32 button)  { return button < MAX_MOUSE_BUTTONS && (s_MouseButtonState[button] & KF_Pressed) != 0; }
bool IsMouseButtonDown(U32 button)     { return button < MAX_MOUSE_BUTTONS && (s_MouseButtonState[button] & KF_Down) != 0; }
bool IsMouseButtonReleased(U32 button) { return button < MAX_MOUSE_BUTTONS && (s_MouseButtonState[button] & KF_Released) != 0; }
bool IsMouseButtonUp(U32 button)       { return button >= MAX_MOUSE_BUTTONS || (s_MouseButtonState[button] & KF_Down) == 0; }

float GetMouseX()      { return s_MouseX; }
float GetMouseY()      { return s_MouseY; }
float GetMouseDeltaX() { return s_MouseDeltaX; }
float GetMouseDeltaY() { return s_MouseDeltaY; }
float GetMouseWheelX() { return s_MouseWheelX; }
float GetMouseWheelY() { return s_MouseWheelY; }

// -----------------------------------------------------------------------------
// Mouse script bindings:
// -----------------------------------------------------------------------------
#ifdef ElfSDL3_ENABLE_POLL
DefineEngineFunction(SDL_IsMouseButtonPressed, bool, (S32 button),, "Return true if the mouse button was pressed this frame.") {
    return ElfSDL3::IsMouseButtonPressed((U32)button);
}

DefineEngineFunction(SDL_IsMouseButtonDown, bool, (S32 button),, "Return true if the mouse button is being held down.") {
    return ElfSDL3::IsMouseButtonDown((U32)button);
}

DefineEngineFunction(SDL_IsMouseButtonReleased, bool, (S32 button),, "Return true if the mouse button was released this frame.") {
    return ElfSDL3::IsMouseButtonReleased((U32)button);
}

DefineEngineFunction(SDL_IsMouseButtonUp, bool, (S32 button),, "Return true if the mouse button is up.") {
    return ElfSDL3::IsMouseButtonUp((U32)button);
}


DefineEngineFunction(SDL_GetMouseDeltaX, F32, (),, "Get mouse movement delta X for this frame.") { return ElfSDL3::GetMouseDeltaX(); }
DefineEngineFunction(SDL_GetMouseDeltaY, F32, (),, "Get mouse movement delta Y for this frame.") { return ElfSDL3::GetMouseDeltaY(); }
DefineEngineFunction(SDL_GetMouseWheelY, F32, (),, "Get vertical mouse wheel scroll amount for this frame.") { return ElfSDL3::GetMouseWheelY(); }
#endif //#ifdef ElfSDL3_ENABLE_POLL
// this can be used also when polling is disabled
DefineEngineFunction(SDL_GetMouseX, F32, (),, "Get absolute mouse X position.") { return ElfSDL3::GetMouseX(); }
DefineEngineFunction(SDL_GetMouseY, F32, (),, "Get absolute mouse Y position.") { return ElfSDL3::GetMouseY(); }
// -----------------------------------------------------------------------------
// Keyboard Constants ...
// -----------------------------------------------------------------------------
void RegisterInputConstants() {
    #define REGISTER_SDL_CONST(constName) Con::setScriptConstant(#constName, (S32)constName)

    REGISTER_SDL_CONST(SDL_SCANCODE_UNKNOWN);

    // Alphabet keys
    REGISTER_SDL_CONST(SDL_SCANCODE_A);
    REGISTER_SDL_CONST(SDL_SCANCODE_B);
    REGISTER_SDL_CONST(SDL_SCANCODE_C);
    REGISTER_SDL_CONST(SDL_SCANCODE_D);
    REGISTER_SDL_CONST(SDL_SCANCODE_E);
    REGISTER_SDL_CONST(SDL_SCANCODE_F);
    REGISTER_SDL_CONST(SDL_SCANCODE_G);
    REGISTER_SDL_CONST(SDL_SCANCODE_H);
    REGISTER_SDL_CONST(SDL_SCANCODE_I);
    REGISTER_SDL_CONST(SDL_SCANCODE_J);
    REGISTER_SDL_CONST(SDL_SCANCODE_K);
    REGISTER_SDL_CONST(SDL_SCANCODE_L);
    REGISTER_SDL_CONST(SDL_SCANCODE_M);
    REGISTER_SDL_CONST(SDL_SCANCODE_N);
    REGISTER_SDL_CONST(SDL_SCANCODE_O);
    REGISTER_SDL_CONST(SDL_SCANCODE_P);
    REGISTER_SDL_CONST(SDL_SCANCODE_Q);
    REGISTER_SDL_CONST(SDL_SCANCODE_R);
    REGISTER_SDL_CONST(SDL_SCANCODE_S);
    REGISTER_SDL_CONST(SDL_SCANCODE_T);
    REGISTER_SDL_CONST(SDL_SCANCODE_U);
    REGISTER_SDL_CONST(SDL_SCANCODE_V);
    REGISTER_SDL_CONST(SDL_SCANCODE_W);
    REGISTER_SDL_CONST(SDL_SCANCODE_X);
    REGISTER_SDL_CONST(SDL_SCANCODE_Y);
    REGISTER_SDL_CONST(SDL_SCANCODE_Z);

    // Number row
    REGISTER_SDL_CONST(SDL_SCANCODE_1);
    REGISTER_SDL_CONST(SDL_SCANCODE_2);
    REGISTER_SDL_CONST(SDL_SCANCODE_3);
    REGISTER_SDL_CONST(SDL_SCANCODE_4);
    REGISTER_SDL_CONST(SDL_SCANCODE_5);
    REGISTER_SDL_CONST(SDL_SCANCODE_6);
    REGISTER_SDL_CONST(SDL_SCANCODE_7);
    REGISTER_SDL_CONST(SDL_SCANCODE_8);
    REGISTER_SDL_CONST(SDL_SCANCODE_9);
    REGISTER_SDL_CONST(SDL_SCANCODE_0);

    // Standard control keys
    REGISTER_SDL_CONST(SDL_SCANCODE_RETURN);
    REGISTER_SDL_CONST(SDL_SCANCODE_ESCAPE);
    REGISTER_SDL_CONST(SDL_SCANCODE_BACKSPACE);
    REGISTER_SDL_CONST(SDL_SCANCODE_TAB);
    REGISTER_SDL_CONST(SDL_SCANCODE_SPACE);

    // Punctuation and symbols
    REGISTER_SDL_CONST(SDL_SCANCODE_MINUS);
    REGISTER_SDL_CONST(SDL_SCANCODE_EQUALS);
    REGISTER_SDL_CONST(SDL_SCANCODE_LEFTBRACKET);
    REGISTER_SDL_CONST(SDL_SCANCODE_RIGHTBRACKET);
    REGISTER_SDL_CONST(SDL_SCANCODE_BACKSLASH);
    REGISTER_SDL_CONST(SDL_SCANCODE_NONUSHASH);
    REGISTER_SDL_CONST(SDL_SCANCODE_SEMICOLON);
    REGISTER_SDL_CONST(SDL_SCANCODE_APOSTROPHE);
    REGISTER_SDL_CONST(SDL_SCANCODE_GRAVE);
    REGISTER_SDL_CONST(SDL_SCANCODE_COMMA);
    REGISTER_SDL_CONST(SDL_SCANCODE_PERIOD);
    REGISTER_SDL_CONST(SDL_SCANCODE_SLASH);
    REGISTER_SDL_CONST(SDL_SCANCODE_CAPSLOCK);

    // Function keys (F1 to F12)
    REGISTER_SDL_CONST(SDL_SCANCODE_F1);
    REGISTER_SDL_CONST(SDL_SCANCODE_F2);
    REGISTER_SDL_CONST(SDL_SCANCODE_F3);
    REGISTER_SDL_CONST(SDL_SCANCODE_F4);
    REGISTER_SDL_CONST(SDL_SCANCODE_F5);
    REGISTER_SDL_CONST(SDL_SCANCODE_F6);
    REGISTER_SDL_CONST(SDL_SCANCODE_F7);
    REGISTER_SDL_CONST(SDL_SCANCODE_F8);
    REGISTER_SDL_CONST(SDL_SCANCODE_F9);
    REGISTER_SDL_CONST(SDL_SCANCODE_F10);
    REGISTER_SDL_CONST(SDL_SCANCODE_F11);
    REGISTER_SDL_CONST(SDL_SCANCODE_F12);

    // Navigation cluster
    REGISTER_SDL_CONST(SDL_SCANCODE_PRINTSCREEN);
    REGISTER_SDL_CONST(SDL_SCANCODE_SCROLLLOCK);
    REGISTER_SDL_CONST(SDL_SCANCODE_PAUSE);
    REGISTER_SDL_CONST(SDL_SCANCODE_INSERT);
    REGISTER_SDL_CONST(SDL_SCANCODE_HOME);
    REGISTER_SDL_CONST(SDL_SCANCODE_PAGEUP);
    REGISTER_SDL_CONST(SDL_SCANCODE_DELETE);
    REGISTER_SDL_CONST(SDL_SCANCODE_END);
    REGISTER_SDL_CONST(SDL_SCANCODE_PAGEDOWN);

    // Arrow keys
    REGISTER_SDL_CONST(SDL_SCANCODE_RIGHT);
    REGISTER_SDL_CONST(SDL_SCANCODE_LEFT);
    REGISTER_SDL_CONST(SDL_SCANCODE_DOWN);
    REGISTER_SDL_CONST(SDL_SCANCODE_UP);

    // Keypad / Numpad
    REGISTER_SDL_CONST(SDL_SCANCODE_NUMLOCKCLEAR);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_DIVIDE);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_MULTIPLY);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_MINUS);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_PLUS);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_ENTER);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_1);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_2);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_3);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_4);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_5);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_6);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_7);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_8);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_9);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_0);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_PERIOD);
    REGISTER_SDL_CONST(SDL_SCANCODE_NONUSBACKSLASH);
    REGISTER_SDL_CONST(SDL_SCANCODE_APPLICATION);
    REGISTER_SDL_CONST(SDL_SCANCODE_POWER);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_EQUALS);

    // Extended Function keys
    REGISTER_SDL_CONST(SDL_SCANCODE_F13);
    REGISTER_SDL_CONST(SDL_SCANCODE_F14);
    REGISTER_SDL_CONST(SDL_SCANCODE_F15);
    REGISTER_SDL_CONST(SDL_SCANCODE_F16);
    REGISTER_SDL_CONST(SDL_SCANCODE_F17);
    REGISTER_SDL_CONST(SDL_SCANCODE_F18);
    REGISTER_SDL_CONST(SDL_SCANCODE_F19);
    REGISTER_SDL_CONST(SDL_SCANCODE_F20);
    REGISTER_SDL_CONST(SDL_SCANCODE_F21);
    REGISTER_SDL_CONST(SDL_SCANCODE_F22);
    REGISTER_SDL_CONST(SDL_SCANCODE_F23);
    REGISTER_SDL_CONST(SDL_SCANCODE_F24);

    // UI / Action keys
    REGISTER_SDL_CONST(SDL_SCANCODE_EXECUTE);
    REGISTER_SDL_CONST(SDL_SCANCODE_HELP);
    REGISTER_SDL_CONST(SDL_SCANCODE_MENU);
    REGISTER_SDL_CONST(SDL_SCANCODE_SELECT);
    REGISTER_SDL_CONST(SDL_SCANCODE_STOP);
    REGISTER_SDL_CONST(SDL_SCANCODE_AGAIN);
    REGISTER_SDL_CONST(SDL_SCANCODE_UNDO);
    REGISTER_SDL_CONST(SDL_SCANCODE_CUT);
    REGISTER_SDL_CONST(SDL_SCANCODE_COPY);
    REGISTER_SDL_CONST(SDL_SCANCODE_PASTE);
    REGISTER_SDL_CONST(SDL_SCANCODE_FIND);
    REGISTER_SDL_CONST(SDL_SCANCODE_MUTE);
    REGISTER_SDL_CONST(SDL_SCANCODE_VOLUMEUP);
    REGISTER_SDL_CONST(SDL_SCANCODE_VOLUMEDOWN);

    // Keypad comma & special separators
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_COMMA);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_EQUALSAS400);

    // International keys
    REGISTER_SDL_CONST(SDL_SCANCODE_INTERNATIONAL1);
    REGISTER_SDL_CONST(SDL_SCANCODE_INTERNATIONAL2);
    REGISTER_SDL_CONST(SDL_SCANCODE_INTERNATIONAL3);
    REGISTER_SDL_CONST(SDL_SCANCODE_INTERNATIONAL4);
    REGISTER_SDL_CONST(SDL_SCANCODE_INTERNATIONAL5);
    REGISTER_SDL_CONST(SDL_SCANCODE_INTERNATIONAL6);
    REGISTER_SDL_CONST(SDL_SCANCODE_INTERNATIONAL7);
    REGISTER_SDL_CONST(SDL_SCANCODE_INTERNATIONAL8);
    REGISTER_SDL_CONST(SDL_SCANCODE_INTERNATIONAL9);
    REGISTER_SDL_CONST(SDL_SCANCODE_LANG1);
    REGISTER_SDL_CONST(SDL_SCANCODE_LANG2);
    REGISTER_SDL_CONST(SDL_SCANCODE_LANG3);
    REGISTER_SDL_CONST(SDL_SCANCODE_LANG4);
    REGISTER_SDL_CONST(SDL_SCANCODE_LANG5);
    REGISTER_SDL_CONST(SDL_SCANCODE_LANG6);
    REGISTER_SDL_CONST(SDL_SCANCODE_LANG7);
    REGISTER_SDL_CONST(SDL_SCANCODE_LANG8);
    REGISTER_SDL_CONST(SDL_SCANCODE_LANG9);

    // Erase & operating system operations
    REGISTER_SDL_CONST(SDL_SCANCODE_ALTERASE);
    REGISTER_SDL_CONST(SDL_SCANCODE_SYSREQ);
    REGISTER_SDL_CONST(SDL_SCANCODE_CANCEL);
    REGISTER_SDL_CONST(SDL_SCANCODE_CLEAR);
    REGISTER_SDL_CONST(SDL_SCANCODE_PRIOR);
    REGISTER_SDL_CONST(SDL_SCANCODE_RETURN2);
    REGISTER_SDL_CONST(SDL_SCANCODE_SEPARATOR);
    REGISTER_SDL_CONST(SDL_SCANCODE_OUT);
    REGISTER_SDL_CONST(SDL_SCANCODE_OPER);
    REGISTER_SDL_CONST(SDL_SCANCODE_CLEARAGAIN);
    REGISTER_SDL_CONST(SDL_SCANCODE_CRSEL);
    REGISTER_SDL_CONST(SDL_SCANCODE_EXSEL);

    // Keypad basic math & syntax variants
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_00);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_000);
    REGISTER_SDL_CONST(SDL_SCANCODE_THOUSANDSSEPARATOR);
    REGISTER_SDL_CONST(SDL_SCANCODE_DECIMALSEPARATOR);
    REGISTER_SDL_CONST(SDL_SCANCODE_CURRENCYUNIT);
    REGISTER_SDL_CONST(SDL_SCANCODE_CURRENCYSUBUNIT);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_LEFTPAREN);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_RIGHTPAREN);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_LEFTBRACE);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_RIGHTBRACE);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_TAB);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_BACKSPACE);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_A);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_B);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_C);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_D);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_E);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_F);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_XOR);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_POWER);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_PERCENT);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_LESS);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_GREATER);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_AMPERSAND);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_DBLAMPERSAND);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_VERTICALBAR);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_DBLVERTICALBAR);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_COLON);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_HASH);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_SPACE);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_AT);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_EXCLAM);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_MEMSTORE);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_MEMRECALL);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_MEMCLEAR);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_MEMADD);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_MEMSUBTRACT);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_MEMMULTIPLY);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_MEMDIVIDE);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_PLUSMINUS);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_CLEAR);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_CLEARENTRY);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_BINARY);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_OCTAL);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_DECIMAL);
    REGISTER_SDL_CONST(SDL_SCANCODE_KP_HEXADECIMAL);

    // Modifiers
    REGISTER_SDL_CONST(SDL_SCANCODE_LCTRL);
    REGISTER_SDL_CONST(SDL_SCANCODE_LSHIFT);
    REGISTER_SDL_CONST(SDL_SCANCODE_LALT);
    REGISTER_SDL_CONST(SDL_SCANCODE_LGUI);
    REGISTER_SDL_CONST(SDL_SCANCODE_RCTRL);
    REGISTER_SDL_CONST(SDL_SCANCODE_RSHIFT);
    REGISTER_SDL_CONST(SDL_SCANCODE_RALT);
    REGISTER_SDL_CONST(SDL_SCANCODE_RGUI);
    REGISTER_SDL_CONST(SDL_SCANCODE_MODE);

    // Media and Browser commands

    REGISTER_SDL_CONST(SDL_SCANCODE_MEDIA_NEXT_TRACK);
    REGISTER_SDL_CONST(SDL_SCANCODE_MEDIA_PREVIOUS_TRACK);
    REGISTER_SDL_CONST(SDL_SCANCODE_MEDIA_STOP);
    REGISTER_SDL_CONST(SDL_SCANCODE_MEDIA_PLAY);
    REGISTER_SDL_CONST(SDL_SCANCODE_MUTE);
    REGISTER_SDL_CONST(SDL_SCANCODE_MEDIA_SELECT);

    REGISTER_SDL_CONST(SDL_SCANCODE_AC_NEW);
    REGISTER_SDL_CONST(SDL_SCANCODE_AC_OPEN);
    REGISTER_SDL_CONST(SDL_SCANCODE_AC_CLOSE);
    REGISTER_SDL_CONST(SDL_SCANCODE_AC_EXIT);
    REGISTER_SDL_CONST(SDL_SCANCODE_AC_SAVE);
    REGISTER_SDL_CONST(SDL_SCANCODE_AC_PRINT);
    REGISTER_SDL_CONST(SDL_SCANCODE_AC_PROPERTIES);

    REGISTER_SDL_CONST(SDL_SCANCODE_AC_SEARCH);
    REGISTER_SDL_CONST(SDL_SCANCODE_AC_HOME);
    REGISTER_SDL_CONST(SDL_SCANCODE_AC_BACK);
    REGISTER_SDL_CONST(SDL_SCANCODE_AC_FORWARD);
    REGISTER_SDL_CONST(SDL_SCANCODE_AC_STOP);
    REGISTER_SDL_CONST(SDL_SCANCODE_AC_REFRESH);
    REGISTER_SDL_CONST(SDL_SCANCODE_AC_BOOKMARKS);

    REGISTER_SDL_CONST(SDL_SCANCODE_MEDIA_REWIND);
    REGISTER_SDL_CONST(SDL_SCANCODE_MEDIA_FAST_FORWARD);
    REGISTER_SDL_CONST(SDL_SCANCODE_MEDIA_EJECT);
    REGISTER_SDL_CONST(SDL_SCANCODE_VOLUMEUP);
    REGISTER_SDL_CONST(SDL_SCANCODE_VOLUMEDOWN);


    // --- SDL3 Keyboard Modifier Constants ---
    REGISTER_SDL_CONST(SDL_KMOD_NONE);
    REGISTER_SDL_CONST(SDL_KMOD_LSHIFT);
    REGISTER_SDL_CONST(SDL_KMOD_RSHIFT);
    REGISTER_SDL_CONST(SDL_KMOD_LCTRL);
    REGISTER_SDL_CONST(SDL_KMOD_RCTRL);
    REGISTER_SDL_CONST(SDL_KMOD_LALT);
    REGISTER_SDL_CONST(SDL_KMOD_RALT);
    REGISTER_SDL_CONST(SDL_KMOD_LGUI);
    REGISTER_SDL_CONST(SDL_KMOD_RGUI);
    REGISTER_SDL_CONST(SDL_KMOD_NUM);
    REGISTER_SDL_CONST(SDL_KMOD_CAPS);
    REGISTER_SDL_CONST(SDL_KMOD_MODE);
    REGISTER_SDL_CONST(SDL_KMOD_SCROLL);

    REGISTER_SDL_CONST(SDL_KMOD_CTRL);  // (SDL_KMOD_LCTRL | SDL_KMOD_RCTRL)
    REGISTER_SDL_CONST(SDL_KMOD_SHIFT); // (SDL_KMOD_LSHIFT | SDL_KMOD_RSHIFT)
    REGISTER_SDL_CONST(SDL_KMOD_ALT);   // (SDL_KMOD_LALT | SDL_KMOD_RALT)
    REGISTER_SDL_CONST(SDL_KMOD_GUI);   // (SDL_KMOD_LGUI | SDL_KMOD_RGUI)


    // --- MouseButton Constants ... ---
    REGISTER_SDL_CONST(SDL_BUTTON_LEFT);
    REGISTER_SDL_CONST(SDL_BUTTON_MIDDLE);
    REGISTER_SDL_CONST(SDL_BUTTON_RIGHT);
    REGISTER_SDL_CONST(SDL_BUTTON_X1);
    REGISTER_SDL_CONST(SDL_BUTTON_X2);

    #undef REGISTER_SDL_SCANCODE_CONST
}
// -----------------------------------------------------------------------------
void InitKeyCodes() {
    RegisterInputConstants();
    dMemset(s_KeyState, KF_None, sizeof(s_KeyState));

    // implement script stubs
    Con::evaluate( R"(
     function onSDLKeyBoardEvent(%scancode, %modifiers, %isDown, %isRepeat){}
     function onSDLMouseButtonEvent(%button, %isDown, %x, %y){}
     function onSDLMouseWheelEvent(%wheelX, %wheelY){}
    )"
    );

    s_initialized = true;

}
// -----------------------------------------------------------------------------



} //namespace
