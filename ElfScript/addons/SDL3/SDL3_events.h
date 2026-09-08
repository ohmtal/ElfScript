//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
#pragma once

#include <SDL3/SDL.h>

namespace ElfSDL3 {



    void FireSDLEvent(const SDL_Event& event);

    void RegisterEventConst();




    void InitEvents(); // calling=> void RegisterEventConst();
    void ShutDownEvents();


}
