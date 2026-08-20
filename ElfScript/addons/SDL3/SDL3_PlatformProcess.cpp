//-----------------------------------------------------------------------------
// Copyright (c) 2025-2026 korkscript contributors.
// See AUTHORS file and git repository for contributor information.
//
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// Basic Platform process using SDL3
//-----------------------------------------------------------------------------

//NOTE:  you can overwrite this with:
#ifndef ELFSCRIPT_CUSTOM_PLATFORMPROCESS
// NOTE: see also ELFSCRIPT_CUSTOM_SHUTDOWN_FUNC


#include <SDL3/SDL.h>
#include <console/console.h>
#include "SDL3_ElfScriptGlue.h"


namespace Platform
{
  //---------------------------------------------------------------------------
  //---------------------------------------------------------------------------
#ifndef ELFSCRIPT_CUSTOM_SHUTDOWN_FUNC
  // Called from console functions quit..
  void postQuitMessage(const S32 in_quitVal) {
    ElfSDL3::shutDownRequested = true;
  }
  void forceShutdown(S32 returnValue) {
    ElfSDL3::shutDownRequested = true;
  }
#endif

  //---------------------------------------------------------------------------
  // init / process / shutdown - called from engineGlue only
  void init() { }
  void process() { }
  void shutdown() { }
  //---------------------------------------------------------------------------
  U64 getRealMilliseconds( void )
  {
    SDL_Time nanoSeconds;
    if (SDL_GetCurrentTime(&nanoSeconds)) {
      return (U32)(nanoSeconds / SDL_NS_PER_MS);
    }
    Con::warnf("%s failed!", __func__);
    return 0;
  }

  void getLocalTime(LocalTime &)
  {
    Con::warnf("%s not implemented", __func__);
  }
  //---------------------------------------------------------------------------
  void sleep(U32 ms) {
    SDL_Delay(ms);
  }
  //---------------------------------------------------------------------------

  /// Math.
  float getRandom()
  {
    return SDL_randf();
  }
  //---------------------------------------------------------------------------
  bool isFile(const char *pFilePath) {
    if (!pFilePath) {
      return false;
    }
    SDL_PathInfo info;
    // Returns true on success, false on failure (e.g., path doesn't exist)
    if (SDL_GetPathInfo(pFilePath, &info)) {
      return (info.type == SDL_PATHTYPE_FILE);
    }

    return false;
  }

  StringTableEntry getUserHomeDirectory()
  {
    return StringTable->insert( SDL_GetUserFolder(SDL_FOLDER_HOME) );
  }

  StringTableEntry getExecutablePath()
  {
    return StringTable->insert(SDL_GetBasePath());
  }
  //---------------------------------------------------------------------------
  bool setClipboard(const char* text)
  {
    return SDL_SetClipboardText(text);
  }
  const char* getClipboard() {
    return SDL_GetClipboardText();
  }
  //---------------------------------------------------------------------------
  void debugBreak()
  {
    Con::warnf(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
  }
  //---------------------------------------------------------------------------
  void AlertOK(const char *windowTitle, const char *message) {
    Con::warnf(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);

  }
  bool AlertOKCancel(const char *windowTitle, const char *message) {
    Con::warnf(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
    return false;
  }
  bool AlertRetry(const char *windowTitle, const char *message) {
    Con::warnf(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
    return false;
  }
  ALERT_ASSERT_RESULT AlertAssert(const char *windowTitle, const char *message)
  {
    Con::warnf(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
    return ALERT_ASSERT_IGNORE;
  }

} //namespace
#endif // #ifndef ELF_CUSTOM_PLATFORMPROCESS
