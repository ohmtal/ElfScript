//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// BaseFluxElf Settings
//-----------------------------------------------------------------------------
#pragma once
#include "BaseFlux/Main.h"
#include "console/engineAPI.h"

namespace BaseFluxElf {

    // =============================================================================
    //  SettingsObject (singelton)
    // =============================================================================
    class SettingsObject: public SimObject
    {
        typedef SimObject Parent;
        BaseFlux::Settings mSettings;

        StringTableEntry mCompany;
        StringTableEntry mCaption;
        StringTableEntry mVersion;
        StringTableEntry mIconFileName;
        StringTableEntry mAssetPath;
        StringTableEntry mSoundPathAppend;
        StringTableEntry mTexturePathAppend;
        StringTableEntry mIniFileName;
    public:
        DECLARE_CONOBJECT(SettingsObject);
        SettingsObject();

        void Sync();

        static void initPersistFields();
    };

    // Global
    inline SettingsObject* gSettingsObject;

}
