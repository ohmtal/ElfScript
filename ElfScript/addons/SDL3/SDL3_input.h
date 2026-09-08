//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// - Implement polling SDL_IsKeyPressed, SDL_IsMouseButtonPressed ....
// - Implement addional or alternativ events:
//      function onSDLKeyBoardEvent(%scancode, %modifiers, %isDown, %isRepeat)
//      DISABLED: function onSDLMouseMotionEvent(%x, %y, %deltaX, %deltaY)
//      function onSDLMouseButtonEvent(%button, %isDown, %x, %y)
//      function onSDLMouseWheelEvent(%wheelX, %wheelY)
//  NOTE: is you use Events only you do not need to call ClearInputFrameTicks
//  NOTE: you can disable the ElfScript polling bindings with ElfSDL3_DISABLE_POLL
//        this will hide the bindings only if you do not call ClearInputFrameTicks
//        you also can ignore this.
//-----------------------------------------------------------------------------
#pragma once
#include "resourceManager/ElfResource.h"
#include <SDL3/SDL.h>

namespace ElfSDL3 {
    // NOTE IMPLEMENTATION: You need to call this once to register the constants
    void InitKeyCodes();

    // NOTE IMPLEMENTATION:  reset the states very frame
    void ClearInputFrameTicks();

    // --------------- Keyboard via Scancodes: -----------------

    // NOTE IMPLEMENTATION:  onEvent
    void onEvent(const SDL_Event& event);

    bool IsKeyPressed(SDL_Scancode key);
    bool IsKeyDown(SDL_Scancode key);
    bool IsKeyReleased(SDL_Scancode key);
    bool IsKeyUp(SDL_Scancode key) ;
    bool IsKeyRepeat(SDL_Scancode key);

    bool IsShortcutPressed(Uint16 modifiers, SDL_Scancode key);

    // --------------- Mouse ----------------

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


    // --------------- Game Controller ------------------
    struct ElfController {
        enum Type { Type_Joystick, Type_Gamepad };

        void* handle = nullptr;
        Type type    = Type_Joystick;

        // for ElfStorage::getId()
        bool operator==(const ElfController& other) const {
            return handle == other.handle;
        }

        // also for getId..
        explicit operator bool() const {
            return handle != nullptr;
        }
    };



    inline void CloseElfController(ElfController controller) {
        if (!controller.handle) return;

        if (controller.type == ElfController::Type_Gamepad) {
            SDL_CloseGamepad(static_cast<SDL_Gamepad*>(controller.handle));
        } else {
            SDL_CloseJoystick(static_cast<SDL_Joystick*>(controller.handle));
        }
    }

    // .............
    inline ElfResource::ElfStorage<ElfController, CloseElfController> ControllerMap;
    // .............

    inline S32 FindControllerIdByWhich(S32 which) {
        SDL_JoystickID targetId = static_cast<SDL_JoystickID>(which);

        // Check if SDL3 recognizes it as an open gamepad first
        SDL_Gamepad* pad = SDL_GetGamepadFromID(targetId);
        if (pad) {
            ElfController queryCtrl{ pad, ElfController::Type_Gamepad };
            return ElfSDL3::ControllerMap.getId(queryCtrl);
        }

        // Fallback: Check if it's open as a raw joystick
        SDL_Joystick* stick = SDL_GetJoystickFromID(targetId);
        if (stick) {
            ElfController queryCtrl{ stick, ElfController::Type_Joystick };
            return ElfSDL3::ControllerMap.getId(queryCtrl);
        }

        return 0; // Device is not open or not tracked
    }
    // -------------------------------------------------------------------------
    inline void CloseElfControllerByWhich(S32 which) {
        S32 storageId = FindControllerIdByWhich(which);
        if (storageId > 0) {
            // Your map automatically triggers CloseElfController(struct) and erases the node
            ElfSDL3::ControllerMap.remove(storageId);
        } else {
            Con::errorf("CloseElfControllerByWhich: No tracked controller found for which-ID %d", which);
        }
    }

    // -------------------------------------------------------------------------
    inline const char* GetElfControllerNameByWhich(S32 which) {
        S32 storageId = FindControllerIdByWhich(which);
        if (storageId > 0) {
            // Fetch from open tracked handle inside our storage map
            ElfController ctrl = ElfSDL3::ControllerMap.getValue(storageId);
            if (ctrl.type == ElfController::Type_Gamepad) {
                return SDL_GetGamepadName(static_cast<SDL_Gamepad*>(ctrl.handle));
            } else {
                return SDL_GetJoystickName(static_cast<SDL_Joystick*>(ctrl.handle));
            }
        }

        // Fallback: If device isn't opened yet, query the connected OS hardware info directly
        SDL_JoystickID instanceId = static_cast<SDL_JoystickID>(which);
        if (SDL_IsGamepad(instanceId)) {
            return SDL_GetGamepadNameForID(instanceId);
        } else {
            return SDL_GetJoystickNameForID(instanceId);
        }
    }
    // -------------------------------------------------------------------------
    inline S32 OpenElfContoller(S32 which) {
        SDL_JoystickID instanceId = static_cast<SDL_JoystickID>(which);
        ElfController controller;

        if (SDL_IsGamepad(instanceId)) {
            SDL_Gamepad* pad = SDL_OpenGamepad(instanceId);
            if (pad) {
                controller.handle = pad;
                controller.type   = ElfController::Type_Gamepad;
            }
        } else {
            SDL_Joystick* stick = SDL_OpenJoystick(instanceId);
            if (stick) {
                controller.handle = stick;
                controller.type   = ElfController::Type_Joystick;
            }
        }

        if (!controller.handle) {
            Con::errorf("Failed to open controller device which:%d", which);
            return 0;
        }

        return ElfSDL3::ControllerMap.add(controller);
    }




    // ---------------------------------------------------
    // is done by InitKeyCodes but can be called separatyl
    void RegisterInputConstants();

    inline void ShutDownInput() {
          ControllerMap.clear();
    }
}
