//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// Binding to ImFileDialog
//-----------------------------------------------------------------------------
#include "spice/gui/ImFileDialog.h"
#include "console/engineAPI.h"
#include "console/consoleExtras.h"
#include <core/strings/stringUnit.h>
#include <string>
#include "Helpers.h"
//-----------------------------------------------------------------------------
#pragma once

namespace BaseFluxElf {

class FileDialogObject: public SimObject {
     typedef SimObject Parent;
public:
    DECLARE_CONOBJECT(FileDialogObject);
    ImFileDialog mFileDialog;

    bool onAdd() override;
    /*
     * set path and filter of FileDialog filer are TAB separated extension
     * ext like: .wav
     */
    void init(const char* path, const char* filterTabSep);
    void setLoadMode(const char* fileName,const char* caption, const char* filterTabSep);
    // fileExt like: .wav
    void setSaveMode(const char* fileName, const char* fileExt, const char* caption, const char* filterTabSep);

}; //class

} //namespace
