//------------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//------------------------------------------------------------------------------
// BaseFluxElf Helpers
//------------------------------------------------------------------------------
#pragma once

#include "core/util/str.h"

struct SDL_Point;
class String;

namespace BaseFluxElf {
    // ---------------------------- Helper -------------------------------------
    String getFullPath(String pathIdent = "base:/");
    SDL_Point GetScreenSize() ;
}
