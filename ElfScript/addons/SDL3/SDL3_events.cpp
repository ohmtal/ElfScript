//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// NOTE: Not decided how to implementation will look like. This will be also
//       become redundant to SDL3_input
//-----------------------------------------------------------------------------
// SDL Events (2026-09-07)... very tricky to interface with the script
//
//  For keyboard and mouse i made SDL3_input to handle the events but i would
//  like to make it more flexible.
//
//  Another question is:
//      Do i add SDL_PollEvent or do I add an Engine Event: OnSDL3Event(&eventObject)
//
// SDL_Event - Design decision
// ===========================
//
// * First idea is to add all members of SDL_Event as an field to an object
// and create an object tree with fields .. this would perfectly reflect
// this: event.motion.x for example:
//   %event.motion = ID of motion object
//      %motion has the motion properties..
//
//
// * Secound idea is to add all to flat fields: event.motion.x becomes.
//      event.motion_x ... this is only one object to handle but breaks the
//   idea of "close to SDL3" implementation
//
//
//
//
//-----------------------------------------------------------------------------
#include "console/scriptPreprocessor.h"
#include "console/engineAPI.h"
#include "console/simSet.h"

#include "SDL3_events.h"

#include <SDL3/SDL.h>

namespace ElfSDL3 {

// -----------------------------------------------------------------------------
class SDLEventData: public SimObject {
    typedef SimObject Parent;
    ConsoleValue mWorkerValue; //using this to push data
    U32 mLastEventType = 0;
public:
    DECLARE_CONOBJECT(SDLEventData);


    inline void AddCommonFields() {

        // if you want to set a value :
        //  inline bool pushDynamicField(StringTableEntry slotName, const char *array, ConsoleValue* stackP)
        addDynamicField(StringTable->insert("type"), cvInteger);
        addDynamicField(StringTable->insert("timestamp"), cvInteger);

    }

    inline void setFloat(const char* fieldName, F32 value) {
        mWorkerValue.setFloat(value);
        pushDynamicField(StringTable->insert(fieldName), nullptr, &mWorkerValue);
    }
    inline void setInt(const char* fieldName, S32 value) {
        mWorkerValue.setInt(value);
        pushDynamicField(StringTable->insert(fieldName), nullptr, &mWorkerValue);
    }
    inline void setString(const char* fieldName, const char* str) {
        mWorkerValue.setString(str);
        pushDynamicField(StringTable->insert(fieldName), nullptr, &mWorkerValue);
    }

    inline void setEventType( U32 newType) {
        if (mLastEventType != newType) {
            mLastEventType = newType;
            setInt("type", newType);
            resetFields();
        }
    }
private:
    inline void resetFields() {
        SimFieldDictionary* dict = getFieldDictionary();
        if (!dict) return;
        for (U32 curEntry = 0; curEntry < SimFieldDictionary::HashTableSize; curEntry++)
        {
            for (SimFieldDictionary::Entry *entry = dict->mHashTable[curEntry]; entry; entry = entry->next)
            {
                entry->mValue.reset();
            }
        }
    }

};
IMPLEMENT_CONOBJECT(SDLEventData);


namespace EventObjects{
    SimGroup* Event = nullptr;
    SDLEventData* EventDataObj = nullptr;

// -----------------------------------------------------------------------------
    bool initEventData(const char* slotName) {
        if (!Event || !slotName || !EventDataObj) return false;
        ConsoleValue v; v.setInt(EventDataObj->getId());
        Event->pushDynamicField(StringTable->insert(slotName), nullptr, &v);
        return true;
    }
// -----------------------------------------------------------------------------
void CreateEventDataObjects() {
    Event = new SimGroup();
    Event->registerObject();
    Event->addDynamicField(StringTable->insert("type"), cvInteger);

    EventDataObj = new SDLEventData();
    EventDataObj->registerObject();
    EventDataObj->AddCommonFields();
    Event->addObject(EventDataObj);

    Con::addVariable( "SDL::Event", TypeSimObjectPtr, &EventObjects::Event, "");

    Con::debugf("SDL EVENTS: Event Worker Object created: %d", Event->getId());

    initEventData("common");
    initEventData("display");
    initEventData("window");

    initEventData("kdevice");
    initEventData("key");
    initEventData("edit");

    initEventData("edit_candidates");
    initEventData("text");
    initEventData("mdevice");

    initEventData("motion");
    initEventData("button");
    initEventData("wheel");

    initEventData("jdevice");
    initEventData("jaxis");
    initEventData("jball");

    initEventData("jhat");
    initEventData("jbutton");
    initEventData("jbattery");

    initEventData("gdevice");
    initEventData("gaxis");
    initEventData("gbutton");

    initEventData("gtouchpad");
    initEventData("gsensor");
    initEventData("adevice");

    initEventData("cdevice");
    initEventData("sensor");
    initEventData("quit");

    initEventData("user");
    initEventData("tfinger");
    initEventData("pinch");

    initEventData("pproximity");
    initEventData("ptouch");
    initEventData("pmotion");

    initEventData("pbutton");
    initEventData("paxis");
    initEventData("render");

    initEventData("drop");
    initEventData("clipboard");



    // // Vector<SDLEventData*> EventData;
    // SDLEventData* DisplayEvent = nullptr;
    // SDLEventData* WindowEvent = nullptr;
    // SDLEventData* KeyboardDeviceEvent = nullptr;
    // SDLEventData* KeyboardEvent = nullptr;
    // SDLEventData* TextEditingEvent = nullptr;
    // SDLEventData* TextEditingCandidatesEvent = nullptr;
    // SDLEventData* TextInputEvent = nullptr;
    // SDLEventData* MouseDeviceEvent = nullptr;
    // SDLEventData* MouseMotionEvent = nullptr;
    // SDLEventData* MouseButtonEvent = nullptr;
    // SDLEventData* MouseWheelEvent = nullptr;
    // SDLEventData* JoyAxisEvent = nullptr;
    // SDLEventData* JoyBallEvent = nullptr;
    // SDLEventData* JoyHatEvent = nullptr;
    // SDLEventData* JoyButtonEvent = nullptr;
    // SDLEventData* JoyDeviceEvent = nullptr;
    // SDLEventData* JoyBatteryEvent = nullptr;
    // SDLEventData* GamepadAxisEvent = nullptr;
    // SDLEventData* GamepadButtonEvent = nullptr;
    // SDLEventData* GamepadDeviceEvent = nullptr;
    // SDLEventData* GamepadTouchpadEvent = nullptr;
    // SDLEventData* GamepadSensorEvent= nullptr;
    // SDLEventData* AudioDeviceEvent= nullptr;
    // SDLEventData* CameraDeviceEvent= nullptr;
    // SDLEventData* RenderEvent= nullptr;
    // SDLEventData* TouchFingerEvent= nullptr;
    // SDLEventData* PinchFingerEvent= nullptr;
    // SDLEventData* PenProximityEvent= nullptr;
    // SDLEventData* PenMotionEvent= nullptr;
    // SDLEventData* PenTouchEvent= nullptr;
    // SDLEventData* PenButtonEvent= nullptr;
    // SDLEventData* PenAxisEvent= nullptr;
    // SDLEventData* DropEvent= nullptr;
    // SDLEventData* ClipboardEvent= nullptr;
    // SDLEventData* SensorEvent= nullptr;
    // SDLEventData* QuitEvent= nullptr;
    // SDLEventData* UserEvent= nullptr;
}

} //namespace EventObjects
// -----------------------------------------------------------------------------
#define SET_INT(structName, field) \
EventObjects::EventDataObj->setInt(#field, event.structName.field)

#define SET_BOOL(structName, field) \
EventObjects::EventDataObj->setInt(#field, (S32)event.structName.field)

#define SET_FLOAT(structName, field) \
EventObjects::EventDataObj->setFloat(#field, event.structName.field)

#define SET_STRING(structName, field) \
EventObjects::EventDataObj->setInt(#field, event.structName.field)

// -----------------------------------------------------------------------------
void FireSDLEvent(const SDL_Event& event) {
    using namespace EventObjects;
    if (!EventObjects::Event || !EventObjects::EventDataObj) return ; //assert..
    if (!Con::isFunction("onSDLEvent")) return; //TODO cache ...
    ConsoleValue v;
    v.setInt(event.type);
    EventObjects::Event->pushDynamicField(StringTable->insert("type"), nullptr, &v);
    EventObjects::EventDataObj->setEventType(event.type);

    switch (event.type) {

        // -------------- KEYS --------------------
        case SDL_EVENT_KEY_DOWN:
        case SDL_EVENT_KEY_UP: {
            SET_INT(key, timestamp);
            SET_INT(key, windowID);
            SET_INT(key, which);
            SET_INT(key, scancode);
            SET_INT(key, key);
            SET_INT(key, mod);
            SET_BOOL(key, down);
            SET_BOOL(key, repeat);
            break;
        }

        // -------------- MOUSE --------------------
        case SDL_EVENT_MOUSE_BUTTON_DOWN:
        case SDL_EVENT_MOUSE_BUTTON_UP: {
            SET_INT(button, timestamp);
            SET_INT(button, windowID);
            SET_INT(button, which);
            SET_INT(button, button);
            SET_BOOL(button, down);
            SET_INT(button, clicks);
            SET_FLOAT(button, x);
            SET_FLOAT(button, y);
            break;
        }
        case SDL_EVENT_MOUSE_WHEEL: {
            SET_INT(wheel, timestamp);
            SET_INT(wheel, windowID);
            SET_INT(wheel, which);
            SET_FLOAT(wheel, x);
            SET_FLOAT(wheel, y);
            SET_INT(wheel, direction);
            break;
        }

        case SDL_EVENT_MOUSE_MOTION: {
            // type is set by setEventType
            SET_INT(motion, timestamp);
            SET_INT(motion, windowID);
            SET_INT(motion, which);
            SET_INT(motion, state);
            SET_FLOAT(motion, x);
            SET_FLOAT(motion, y);
            SET_FLOAT(motion, xrel);
            SET_FLOAT(motion, yrel);
            break;
        }

        // -------------- JOYSTICK --------------------
        case SDL_EVENT_JOYSTICK_ADDED:
        case SDL_EVENT_JOYSTICK_REMOVED:
        case SDL_EVENT_JOYSTICK_UPDATE_COMPLETE: {
            SET_INT(jdevice, timestamp);
            SET_INT(jdevice, which); // Instance ID for newly discovered devices
            break;
        }

        case SDL_EVENT_JOYSTICK_AXIS_MOTION: {
            SET_INT(jaxis, timestamp);
            SET_INT(jaxis, which);
            SET_INT(jaxis, axis);    // Raw index of the hardware axis
            SET_INT(jaxis, value);   // Raw Sint16 position
            break;
        }

        case SDL_EVENT_JOYSTICK_BALL_MOTION: {
            SET_INT(jball, timestamp);
            SET_INT(jball, which);
            SET_INT(jball, ball);    // Raw index of the trackball component
            SET_INT(jball, xrel);   // Relative horizontal change
            SET_INT(jball, yrel);   // Relative vertical change
            break;
        }

        case SDL_EVENT_JOYSTICK_HAT_MOTION: {
            SET_INT(jhat, timestamp);
            SET_INT(jhat, which);
            SET_INT(jhat, hat);      // Raw index of the hardware D-pad / hat
            SET_INT(jhat, value);    // Direction mask flag (SDL_HAT_UP, etc.)
            break;
        }

        case SDL_EVENT_JOYSTICK_BUTTON_DOWN:
        case SDL_EVENT_JOYSTICK_BUTTON_UP: {
            SET_INT(jbutton, timestamp);
            SET_INT(jbutton, which);
            SET_INT(jbutton, button); // Raw index of the pressed physical button
            SET_BOOL(jbutton, down);
            break;
        }

        case SDL_EVENT_JOYSTICK_BATTERY_UPDATED: {
            SET_INT(jbattery, timestamp);
            SET_INT(jbattery, which);
            SET_INT(jbattery, state); // Represents an SDL_PowerState value
            SET_INT(jbattery, percent); // Remaining charge ratio
            break;
        }


        case SDL_EVENT_GAMEPAD_ADDED:
        case SDL_EVENT_GAMEPAD_REMOVED:
        case SDL_EVENT_GAMEPAD_REMAPPED:
        case SDL_EVENT_GAMEPAD_UPDATE_COMPLETE:
        case SDL_EVENT_GAMEPAD_STEAM_HANDLE_UPDATED:
        {
            SET_INT(gdevice, timestamp);
            SET_INT(gdevice, which); // Maps to SDL_JoystickID instance ID
            break;
        }

        case SDL_EVENT_GAMEPAD_AXIS_MOTION: {
            SET_INT(gaxis, timestamp);
            SET_INT(gaxis, which);
            SET_INT(gaxis, axis);    // Represents an SDL_GamepadAxis enum value
            SET_INT(gaxis, value);   // Sint16 ranging from -32768 to 32767
            break;
        }

        case SDL_EVENT_GAMEPAD_BUTTON_DOWN:
        case SDL_EVENT_GAMEPAD_BUTTON_UP: {
            SET_INT(gbutton, timestamp);
            SET_INT(gbutton, which);
            SET_INT(gbutton, button); // Represents an SDL_GamepadButton enum value
            SET_BOOL(gbutton, down);  // Engine-specific boolean assignment
            break;
        }
        // -------------- WINDOW  --------------------
        case SDL_EVENT_WINDOW_MOVED:
        case SDL_EVENT_WINDOW_RESIZED:
        case SDL_EVENT_WINDOW_PIXEL_SIZE_CHANGED: {
            SET_INT(window, timestamp);
            SET_INT(window, windowID);
            SET_INT(window, data1);
            SET_INT(window, data2);
            break;
        }
        case SDL_EVENT_WINDOW_FOCUS_GAINED:
        case SDL_EVENT_WINDOW_FOCUS_LOST:
        case SDL_EVENT_WINDOW_CLOSE_REQUESTED: {
            SET_INT(window, timestamp);
            SET_INT(window, windowID);
            break;
        }

        // -------------- OTHERS --------------------
        case SDL_EVENT_QUIT:
        default: {
            SET_INT(quit, timestamp);
            // Con::debugf("TODO EVENT TYPE: %d", event.type);
        }

    };

    Con::executef("onSDLEvent", EventObjects::Event);

}
// -----------------------------------------------------------------------------
DefineEngineFunction(SDL_OpenJoystick, bool, (S32 which),
                     , "Open a joystick and return the internal JoyStickId") {

    return OpenElfContoller(which) != 0;
}
// ----
DefineEngineFunction(SDL_GetJoystickName, const char* , (S32 which),
                     , "Get the name of joystick ") {
    return GetElfControllerNameByWhich(which);
}
// ----
DefineEngineFunction(SDL_CloseJoystick, void , (S32 which),
                     , "Close the joystick") {
    CloseElfControllerByWhich(which);
}
DefineEngineFunction(SDL_OpenGamepad, bool, (S32 which),
                     , "Open a joystick and return the internal JoyStickId") {

    return OpenElfContoller(which) != 0;
}
// ----
DefineEngineFunction(SDL_GetGamepadName, const char* , (S32 which),
                     , "Get the name of joystick ") {
    return GetElfControllerNameByWhich(which);
}
// ----
DefineEngineFunction(SDL_CloseGamepad, void , (S32 which),
                     , "Close the joystick") {
    CloseElfControllerByWhich(which);
}
// -----------------------------------------------------------------------------
void RegisterEventConst() {
    /* Application events */
    Con::REGISTER_CONST_S32(SDL_EVENT_QUIT);  /**< User-requested quit */

    /* These application events have special meaning on iOS and Android); see README-ios.md and README-android.md for details */
    Con::REGISTER_CONST_S32(SDL_EVENT_TERMINATING);      /**< The application is being terminated by the OS. This event must be handled in a callback set with SDL_AddEventWatch().
    Called on iOS in applicationWillTerminate()
    Called on Android in onDestroy()
    */
    Con::REGISTER_CONST_S32(SDL_EVENT_LOW_MEMORY);       /**< The application is low on memory); free memory if possible. This event must be handled in a callback set with SDL_AddEventWatch().
    Called on iOS in applicationDidReceiveMemoryWarning()
    Called on Android in onTrimMemory()
    */
    Con::REGISTER_CONST_S32(SDL_EVENT_WILL_ENTER_BACKGROUND); /**< The application is about to enter the background. This event must be handled in a callback set with SDL_AddEventWatch().
    Called on iOS in applicationWillResignActive()
    Called on Android in onPause()
    */
    Con::REGISTER_CONST_S32(SDL_EVENT_DID_ENTER_BACKGROUND); /**< The application did enter the background and may not get CPU for some time. This event must be handled in a callback set with SDL_AddEventWatch().
    Called on iOS in applicationDidEnterBackground()
    Called on Android in onPause()
    */
    Con::REGISTER_CONST_S32(SDL_EVENT_WILL_ENTER_FOREGROUND); /**< The application is about to enter the foreground. This event must be handled in a callback set with SDL_AddEventWatch().
    Called on iOS in applicationWillEnterForeground()
    Called on Android in onResume()
    */
    Con::REGISTER_CONST_S32(SDL_EVENT_DID_ENTER_FOREGROUND); /**< The application is now interactive. This event must be handled in a callback set with SDL_AddEventWatch().
    Called on iOS in applicationDidBecomeActive()
    Called on Android in onResume()
    */

    Con::REGISTER_CONST_S32(SDL_EVENT_LOCALE_CHANGED);  /**< The user's locale preferences have changed. */

    Con::REGISTER_CONST_S32(SDL_EVENT_SYSTEM_THEME_CHANGED); /**< The system theme changed */

    /* Display events */
    /* 0x150 was SDL_DISPLAYEVENT); reserve the number for sdl2-compat */
    Con::REGISTER_CONST_S32(SDL_EVENT_DISPLAY_ORIENTATION);   /**< Display orientation has changed to data1 */
    Con::REGISTER_CONST_S32(SDL_EVENT_DISPLAY_ADDED);                 /**< Display has been added to the system */
    Con::REGISTER_CONST_S32(SDL_EVENT_DISPLAY_REMOVED);               /**< Display has been removed from the system */
    Con::REGISTER_CONST_S32(SDL_EVENT_DISPLAY_MOVED);                 /**< Display has changed position */
    Con::REGISTER_CONST_S32(SDL_EVENT_DISPLAY_DESKTOP_MODE_CHANGED);  /**< Display has changed desktop mode */
    Con::REGISTER_CONST_S32(SDL_EVENT_DISPLAY_CURRENT_MODE_CHANGED);  /**< Display has changed current mode */
    Con::REGISTER_CONST_S32(SDL_EVENT_DISPLAY_CONTENT_SCALE_CHANGED); /**< Display has changed content scale */
    Con::REGISTER_CONST_S32(SDL_EVENT_DISPLAY_USABLE_BOUNDS_CHANGED); /**< Display has changed usable bounds */
    Con::REGISTER_CONST_S32(SDL_EVENT_DISPLAY_FIRST);
    Con::REGISTER_CONST_S32(SDL_EVENT_DISPLAY_LAST);

    /* Window events */
    /* 0x200 was SDL_WINDOWEVENT); reserve the number for sdl2-compat */
    /* 0x201 was SDL_SYSWMEVENT); reserve the number for sdl2-compat */
    Con::REGISTER_CONST_S32(SDL_EVENT_WINDOW_SHOWN );     /**< Window has been shown */
    Con::REGISTER_CONST_S32(SDL_EVENT_WINDOW_HIDDEN);            /**< Window has been hidden */
    Con::REGISTER_CONST_S32(SDL_EVENT_WINDOW_EXPOSED);           /**< Window has been exposed and should be redrawn); and can be redrawn directly from event watchers for this event.
    data1 is 1 for live-resize expose events); 0 otherwise. */
    Con::REGISTER_CONST_S32(SDL_EVENT_WINDOW_MOVED);             /**< Window has been moved to data1); data2 */
    Con::REGISTER_CONST_S32(SDL_EVENT_WINDOW_RESIZED);           /**< Window has been resized to data1xdata2 */
    Con::REGISTER_CONST_S32(SDL_EVENT_WINDOW_PIXEL_SIZE_CHANGED);/**< The pixel size of the window has changed to data1xdata2 */
    Con::REGISTER_CONST_S32(SDL_EVENT_WINDOW_METAL_VIEW_RESIZED);/**< The pixel size of a Metal view associated with the window has changed */
    Con::REGISTER_CONST_S32(SDL_EVENT_WINDOW_MINIMIZED);         /**< Window has been minimized */
    Con::REGISTER_CONST_S32(SDL_EVENT_WINDOW_MAXIMIZED);         /**< Window has been maximized */
    Con::REGISTER_CONST_S32(SDL_EVENT_WINDOW_RESTORED);          /**< Window has been restored to normal size and position */
    Con::REGISTER_CONST_S32(SDL_EVENT_WINDOW_MOUSE_ENTER);       /**< Window has gained mouse focus */
    Con::REGISTER_CONST_S32(SDL_EVENT_WINDOW_MOUSE_LEAVE);       /**< Window has lost mouse focus */
    Con::REGISTER_CONST_S32(SDL_EVENT_WINDOW_FOCUS_GAINED);      /**< Window has gained keyboard focus */
    Con::REGISTER_CONST_S32(SDL_EVENT_WINDOW_FOCUS_LOST);        /**< Window has lost keyboard focus */
    Con::REGISTER_CONST_S32(SDL_EVENT_WINDOW_CLOSE_REQUESTED);   /**< The window manager requests that the window be closed */
    Con::REGISTER_CONST_S32(SDL_EVENT_WINDOW_HIT_TEST);          /**< Window had a hit test that wasn't SDL_HITTEST_NORMAL */
    Con::REGISTER_CONST_S32(SDL_EVENT_WINDOW_ICCPROF_CHANGED);   /**< The ICC profile of the window's display has changed */
    Con::REGISTER_CONST_S32(SDL_EVENT_WINDOW_DISPLAY_CHANGED);   /**< Window has been moved to display data1 */
    Con::REGISTER_CONST_S32(SDL_EVENT_WINDOW_DISPLAY_SCALE_CHANGED); /**< Window display scale has been changed */
    Con::REGISTER_CONST_S32(SDL_EVENT_WINDOW_SAFE_AREA_CHANGED); /**< The window safe area has been changed */
    Con::REGISTER_CONST_S32(SDL_EVENT_WINDOW_OCCLUDED);          /**< The window has been occluded */
    Con::REGISTER_CONST_S32(SDL_EVENT_WINDOW_ENTER_FULLSCREEN);  /**< The window has entered fullscreen mode */
    Con::REGISTER_CONST_S32(SDL_EVENT_WINDOW_LEAVE_FULLSCREEN);  /**< The window has left fullscreen mode */
    Con::REGISTER_CONST_S32(SDL_EVENT_WINDOW_DESTROYED);         /**< The window with the associated ID is being or has been destroyed. If this message is being handled
    in an event watcher); the window handle is still valid and can still be used to retrieve any properties
    associated with the window. Otherwise); the handle has already been destroyed and all resources
    associated with it are invalid */
    Con::REGISTER_CONST_S32(SDL_EVENT_WINDOW_HDR_STATE_CHANGED); /**< Window HDR properties have changed */
    Con::REGISTER_CONST_S32(SDL_EVENT_WINDOW_FIRST);
    Con::REGISTER_CONST_S32(SDL_EVENT_WINDOW_LAST);

    /* Keyboard events */
    Con::REGISTER_CONST_S32(SDL_EVENT_KEY_DOWN ); /**< Key pressed */
    Con::REGISTER_CONST_S32(SDL_EVENT_KEY_UP);                  /**< Key released */
    Con::REGISTER_CONST_S32(SDL_EVENT_TEXT_EDITING);            /**< Keyboard text editing (composition) */
    Con::REGISTER_CONST_S32(SDL_EVENT_TEXT_INPUT);              /**< Keyboard text input */
    Con::REGISTER_CONST_S32(SDL_EVENT_KEYMAP_CHANGED);          /**< Keymap changed due to a system event such as an
    input language or keyboard layout change. */
    Con::REGISTER_CONST_S32(SDL_EVENT_KEYBOARD_ADDED);          /**< A new keyboard has been inserted into the system */
    Con::REGISTER_CONST_S32(SDL_EVENT_KEYBOARD_REMOVED);        /**< A keyboard has been removed */
    Con::REGISTER_CONST_S32(SDL_EVENT_TEXT_EDITING_CANDIDATES); /**< Keyboard text editing candidates */
    Con::REGISTER_CONST_S32(SDL_EVENT_SCREEN_KEYBOARD_SHOWN);   /**< The on-screen keyboard has been shown */
    Con::REGISTER_CONST_S32(SDL_EVENT_SCREEN_KEYBOARD_HIDDEN);  /**< The on-screen keyboard has been hidden */

    /* Mouse events */
    Con::REGISTER_CONST_S32(SDL_EVENT_MOUSE_MOTION  ); /**< Mouse moved */
    Con::REGISTER_CONST_S32(SDL_EVENT_MOUSE_BUTTON_DOWN);       /**< Mouse button pressed */
    Con::REGISTER_CONST_S32(SDL_EVENT_MOUSE_BUTTON_UP);         /**< Mouse button released */
    Con::REGISTER_CONST_S32(SDL_EVENT_MOUSE_WHEEL);             /**< Mouse wheel motion */
    Con::REGISTER_CONST_S32(SDL_EVENT_MOUSE_ADDED);             /**< A new mouse has been inserted into the system */
    Con::REGISTER_CONST_S32(SDL_EVENT_MOUSE_REMOVED);           /**< A mouse has been removed */

    /* Joystick events */
    Con::REGISTER_CONST_S32(SDL_EVENT_JOYSTICK_AXIS_MOTION  ); /**< Joystick axis motion */
    Con::REGISTER_CONST_S32(SDL_EVENT_JOYSTICK_BALL_MOTION);          /**< Joystick trackball motion */
    Con::REGISTER_CONST_S32(SDL_EVENT_JOYSTICK_HAT_MOTION);           /**< Joystick hat position change */
    Con::REGISTER_CONST_S32(SDL_EVENT_JOYSTICK_BUTTON_DOWN);          /**< Joystick button pressed */
    Con::REGISTER_CONST_S32(SDL_EVENT_JOYSTICK_BUTTON_UP);            /**< Joystick button released */
    Con::REGISTER_CONST_S32(SDL_EVENT_JOYSTICK_ADDED);                /**< A new joystick has been inserted into the system */
    Con::REGISTER_CONST_S32(SDL_EVENT_JOYSTICK_REMOVED);              /**< An opened joystick has been removed */
    Con::REGISTER_CONST_S32(SDL_EVENT_JOYSTICK_BATTERY_UPDATED);      /**< Joystick battery level change */
    Con::REGISTER_CONST_S32(SDL_EVENT_JOYSTICK_UPDATE_COMPLETE);      /**< Joystick update is complete */

    /* Gamepad events */
    Con::REGISTER_CONST_S32(SDL_EVENT_GAMEPAD_AXIS_MOTION  ); /**< Gamepad axis motion */
    Con::REGISTER_CONST_S32(SDL_EVENT_GAMEPAD_BUTTON_DOWN);          /**< Gamepad button pressed */
    Con::REGISTER_CONST_S32(SDL_EVENT_GAMEPAD_BUTTON_UP);            /**< Gamepad button released */
    Con::REGISTER_CONST_S32(SDL_EVENT_GAMEPAD_ADDED);                /**< A new gamepad has been inserted into the system */
    Con::REGISTER_CONST_S32(SDL_EVENT_GAMEPAD_REMOVED);              /**< A gamepad has been removed */
    Con::REGISTER_CONST_S32(SDL_EVENT_GAMEPAD_REMAPPED);             /**< The gamepad mapping was updated */
    Con::REGISTER_CONST_S32(SDL_EVENT_GAMEPAD_TOUCHPAD_DOWN);        /**< Gamepad touchpad was touched */
    Con::REGISTER_CONST_S32(SDL_EVENT_GAMEPAD_TOUCHPAD_MOTION);      /**< Gamepad touchpad finger was moved */
    Con::REGISTER_CONST_S32(SDL_EVENT_GAMEPAD_TOUCHPAD_UP);          /**< Gamepad touchpad finger was lifted */
    Con::REGISTER_CONST_S32(SDL_EVENT_GAMEPAD_SENSOR_UPDATE);        /**< Gamepad sensor was updated */
    Con::REGISTER_CONST_S32(SDL_EVENT_GAMEPAD_UPDATE_COMPLETE);      /**< Gamepad update is complete */
    Con::REGISTER_CONST_S32(SDL_EVENT_GAMEPAD_STEAM_HANDLE_UPDATED);  /**< Gamepad Steam handle has changed */

    /* Touch events */
    Con::REGISTER_CONST_S32(SDL_EVENT_FINGER_DOWN );
    Con::REGISTER_CONST_S32(SDL_EVENT_FINGER_UP);
    Con::REGISTER_CONST_S32(SDL_EVENT_FINGER_MOTION);
    Con::REGISTER_CONST_S32(SDL_EVENT_FINGER_CANCELED);

    /* Pinch events */
    Con::REGISTER_CONST_S32(SDL_EVENT_PINCH_BEGIN);     /**< Pinch gesture started */
    Con::REGISTER_CONST_S32(SDL_EVENT_PINCH_UPDATE);                 /**< Pinch gesture updated */
    Con::REGISTER_CONST_S32(SDL_EVENT_PINCH_END);                    /**< Pinch gesture ended */

    /* 0x800); 0x801); and 0x802 were the Gesture events from SDL2. Do not reuse these values! sdl2-compat needs them! */

    /* Clipboard events */
    Con::REGISTER_CONST_S32(SDL_EVENT_CLIPBOARD_UPDATE); /**< The clipboard changed */

    /* Drag and drop events */
    Con::REGISTER_CONST_S32(SDL_EVENT_DROP_FILE ); /**< The system requests a file open */
    Con::REGISTER_CONST_S32(SDL_EVENT_DROP_TEXT);                 /**< text/plain drag-and-drop event */
    Con::REGISTER_CONST_S32(SDL_EVENT_DROP_BEGIN);                /**< A new set of drops is beginning (NULL filename) */
    Con::REGISTER_CONST_S32(SDL_EVENT_DROP_COMPLETE);             /**< Current set of drops is now complete (NULL filename) */
    Con::REGISTER_CONST_S32(SDL_EVENT_DROP_POSITION);             /**< Position while moving over the window */

    /* Audio hotplug events */
    Con::REGISTER_CONST_S32(SDL_EVENT_AUDIO_DEVICE_ADDED);  /**< A new audio device is available */
    Con::REGISTER_CONST_S32(SDL_EVENT_AUDIO_DEVICE_REMOVED);         /**< An audio device has been removed. */
    Con::REGISTER_CONST_S32(SDL_EVENT_AUDIO_DEVICE_FORMAT_CHANGED);  /**< An audio device's format has been changed by the system. */

    /* Sensor events */
    Con::REGISTER_CONST_S32(SDL_EVENT_SENSOR_UPDATE);     /**< A sensor was updated */

    /* Pressure-sensitive pen events */
    Con::REGISTER_CONST_S32(SDL_EVENT_PEN_PROXIMITY_IN);  /**< Pressure-sensitive pen has become available */
    Con::REGISTER_CONST_S32(SDL_EVENT_PEN_PROXIMITY_OUT);          /**< Pressure-sensitive pen has become unavailable */
    Con::REGISTER_CONST_S32(SDL_EVENT_PEN_DOWN);                   /**< Pressure-sensitive pen touched drawing surface */
    Con::REGISTER_CONST_S32(SDL_EVENT_PEN_UP);                     /**< Pressure-sensitive pen stopped touching drawing surface */
    Con::REGISTER_CONST_S32(SDL_EVENT_PEN_BUTTON_DOWN);            /**< Pressure-sensitive pen button pressed */
    Con::REGISTER_CONST_S32(SDL_EVENT_PEN_BUTTON_UP);              /**< Pressure-sensitive pen button released */
    Con::REGISTER_CONST_S32(SDL_EVENT_PEN_MOTION);                 /**< Pressure-sensitive pen is moving on the tablet */
    Con::REGISTER_CONST_S32(SDL_EVENT_PEN_AXIS);                   /**< Pressure-sensitive pen angle/pressure/etc changed */

    /* Camera hotplug events */
    Con::REGISTER_CONST_S32(SDL_EVENT_CAMERA_DEVICE_ADDED);  /**< A new camera device is available */
    Con::REGISTER_CONST_S32(SDL_EVENT_CAMERA_DEVICE_REMOVED);         /**< A camera device has been removed. */
    Con::REGISTER_CONST_S32(SDL_EVENT_CAMERA_DEVICE_APPROVED);        /**< A camera device has been approved for use by the user. */
    Con::REGISTER_CONST_S32(SDL_EVENT_CAMERA_DEVICE_DENIED);          /**< A camera device has been denied for use by the user. */

    /* Render events */
    Con::REGISTER_CONST_S32(SDL_EVENT_RENDER_TARGETS_RESET); /**< The render targets have been reset and their contents need to be updated */
    Con::REGISTER_CONST_S32(SDL_EVENT_RENDER_DEVICE_RESET); /**< The device has been reset and all textures need to be recreated */
    Con::REGISTER_CONST_S32(SDL_EVENT_RENDER_DEVICE_LOST); /**< The device has been lost and can't be recovered. */

    /* Reserved events for private platforms */
    Con::REGISTER_CONST_S32(SDL_EVENT_PRIVATE0);
    Con::REGISTER_CONST_S32(SDL_EVENT_PRIVATE1);
    Con::REGISTER_CONST_S32(SDL_EVENT_PRIVATE2);
    Con::REGISTER_CONST_S32(SDL_EVENT_PRIVATE3);

    /* Internal events */
    Con::REGISTER_CONST_S32(SDL_EVENT_POLL_SENTINEL); /**< Signals the end of an event poll cycle */

    /** Events Con::REGISTER_CONST_S32(SDL_EVENT_USER through Con::REGISTER_CONST_S32(SDL_EVENT_LAST are for your use);
     *  and should be allocated with SDL_RegisterEvents()
     */
    Con::REGISTER_CONST_S32(SDL_EVENT_USER);

    /**
     *  This last event is only for bounding internal arrays
     */
    Con::REGISTER_CONST_S32(SDL_EVENT_LAST);



}
// -----------------------------------------------------------------------------
void InitEvents() {
    RegisterEventConst();
    EventObjects::CreateEventDataObjects();
}
// -----------------------------------------------------------------------------
void ShutDownEvents() {
    if (EventObjects::Event) EventObjects::Event->deleteObject();
    ControllerMap.clear();
}

// -----------------------------------------------------------------------------
} // namespace
