//------------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//------------------------------------------------------------------------------
// BaseFluxElf Helpers
//------------------------------------------------------------------------------
#include "SDL3/SDL.h"
#include <string>

#include "console/console.h"
#include "core/volume.h"
#include "core/util/str.h"


#include "BaseFlux/Main.h"
extern BaseFlux::Main app;

namespace BaseFluxElf {
    // ---------------------------- Helper -------------------------------------
    String getFullPath(String pathIdent = "base:/") {
        if (pathIdent.isEmpty()) pathIdent = "base:/";
        if (pathIdent.equal("script:/")) return Torque::FS::GetCwd().getFullPath();
        std::string tmp = pathIdent.c_str();
        app.setFullPath(tmp);
        return tmp.c_str();
    }

    SDL_Point GetScreenSize() {
        SDL_Point screenSize = {0,0};
        SDL_RendererLogicalPresentation mode = SDL_LOGICAL_PRESENTATION_DISABLED;

        if (SDL_GetRenderLogicalPresentation(app.getRenderer(), &screenSize.x, &screenSize.y, &mode)) {
        } else {
            Con::errorf("SDL_GetRenderLogicalPresentation failed: %s\n", SDL_GetError());
        }
        // fallback
        if (mode == 0) SDL_GetWindowSize(app.getWindow(), &screenSize.x, &screenSize.y);

        return screenSize;
    }

}
