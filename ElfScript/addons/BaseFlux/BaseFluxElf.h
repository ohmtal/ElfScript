//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// BaseFluxElf BaseFluxElf main Glue
//----------------------------------------------------------------------------
#pragma once

namespace BaseFluxElf {
    // the only needed:
    int Main(int argc, char* argv[]);

    // only if you init all the stuff manually
    void Init();
    void PostInit();
    void Shutdown();
}
