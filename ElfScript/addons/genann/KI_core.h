//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// Genann ElfScript Bindings
//-----------------------------------------------------------------------------
#pragma once

#include "resourceManager/ElfResource.h"
#include "genann.h"

namespace ElfKI {
    // void RegisterCoreConstants();
    inline ElfResource::ElfStorage<genann*  , genann_free>   GenannMap;

    inline bool IsInitialized = false;
    void Init();
    void ShutDown();

}
