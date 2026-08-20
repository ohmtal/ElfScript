//-----------------------------------------------------------------------------
// Copyright (c) 2025-2026 korkscript contributors.
// See AUTHORS file and git repository for contributor information.
//
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// NOTE: using ELFSCRIPT_CUSTOM_SHUTDOWN_FUNC to overwrite quit/shutdown
//-----------------------------------------------------------------------------
#include "BaseFlux/Main.h"
#include <platform/types.h>
extern BaseFlux::Main app;

namespace Platform
{
  void postQuitMessage(const S32 in_quitVal)
  {
    app.TerminateApplication();
  }

  void forceShutdown(S32 returnValue)
  {
    app.TerminateApplication();
  }

} //namespace
