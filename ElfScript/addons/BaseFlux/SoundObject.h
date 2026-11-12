//------------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//------------------------------------------------------------------------------
// =============================================================================
// SoundObject
// Using BaseFlux sound - only WAV supported - nativ by SDL3
// =============================================================================
#pragma once

#include "BaseFlux/Main.h"
#include "console/engineAPI.h"

namespace BaseFluxElf {
    class SoundObject : public SimObject
    {
        typedef SimObject Parent;
        StringTableEntry mFileName=nullptr;
        bool mLoop = false;
        F32 mGain = 1.f;
        BaseFlux::WavData* mWaveData;
    public:
        DECLARE_CONOBJECT(SoundObject);
        SoundObject();
        bool onAdd() override;
        void onRemove() override;
        BaseFlux::WavData* get();
        static void initPersistFields();
        bool play();
        bool stop();
    };

}
