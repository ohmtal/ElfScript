//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
#include <SDL3/SDL.h>

#include "SDL3_Filesystem.h"
#include "console/scriptPreprocessor.h"
#include "console/engineAPI.h"


namespace ElfSDL3 {


// -----------------------------------------------------------------------------
void RegisterFileSystemConstants() {
    #define REGISTER_SDL_CONST(constName) Con::setScriptConstant(#constName, (S32)constName)


    REGISTER_SDL_CONST(SDL_PATHTYPE_NONE);      /**< path does not exist */
    REGISTER_SDL_CONST(SDL_PATHTYPE_FILE);      /**< a normal file */
    REGISTER_SDL_CONST(SDL_PATHTYPE_DIRECTORY); /**< a directory */
    REGISTER_SDL_CONST(SDL_PATHTYPE_OTHER);      /**< something completely different like a device node (not a symlink, those are always followed) */
}
// -----------------------------------------------------------------------------
DefineEngineFunction(SDL_FileExists, bool, (const char* path),, "return true if the file exits"){
    return SDL_GetPathInfo(path, nullptr);
}

DefineEngineFunction(SDL_GetPathInfo, bool, (const char* path, S32 resultObjectId),,
                     "resultObjectId is the object which gets it dynamic fields filled with information"
                     "return true if the file exits"){
    SimObject* obj = Sim::findObject(resultObjectId);
    if (!obj) {
        Con::errorf("SDL_GetPathInfo :: resultObjectId is invalid!");
        return false;
    }
    SDL_PathInfo info;
    if (!SDL_GetPathInfo(path, &info)) return false;


    obj->setDataField(StringTable->insert( "file_type" ), nullptr,  avar("%d" ,(S32)info.type) );
    obj->setDataField(StringTable->insert( "file_size" ), nullptr,  avar("%llu" ,info.size) );
    obj->setDataField(StringTable->insert( "file_create_time" ), nullptr,  avar("%lld" ,info.create_time) );
    obj->setDataField(StringTable->insert( "file_modify_time" ), nullptr,  avar("%lld" ,info.modify_time) );
    obj->setDataField(StringTable->insert( "file_access_time" ), nullptr,  avar("%lld" ,info.access_time) );

    return true;
}


} //namespace
