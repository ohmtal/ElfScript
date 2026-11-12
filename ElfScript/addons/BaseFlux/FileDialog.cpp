//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// Binding to ImFileDialog
//-----------------------------------------------------------------------------
#include <string>
#include "console/engineAPI.h"
#include "console/consoleExtras.h"
#include <core/strings/stringUnit.h>

#include "spice/gui/ImFileDialog.h"

#include "Helpers.h"
#include "FileDialog.h"
//-----------------------------------------------------------------------------

namespace BaseFluxElf {


    bool FileDialogObject::onAdd() {
        mFileDialog.mCustomQuickPathes["Assets"] = getFullPath("assets:/").c_str();
        mFileDialog.mCustomQuickPathes["Home"]   = getFullPath("home:/").c_str();
        return Parent::onAdd();
    }


    /*
     * set path and filter of FileDialog filer are TAB separated extension
     * ext like: .wav
     */
    void FileDialogObject::init(const char* path, const char* filterTabSep) {
        if (!path) return;
        std::vector<std::string> filters = {};
        if (filterTabSep && dStrlen(filterTabSep) > 0) {
            const char * delimiters = "\t";
            S32 cnt = StringUnit::getUnitCount(filterTabSep, delimiters);
            for (S32 i = 0; i < cnt ; i++) {
                filters.push_back(StringUnit::getUnit(filterTabSep, i, delimiters));
            }
        }
        mFileDialog.init(path, filters);
    }


    void FileDialogObject::setLoadMode(const char* fileName,const char* caption, const char* filterTabSep) {
        if (!fileName ) return;

        mFileDialog.reset();

        std::vector<std::string> filters = {};
        if (filterTabSep && dStrlen(filterTabSep) > 0) {
            const char * delimiters = "\t";
            S32 cnt = StringUnit::getUnitCount(filterTabSep, delimiters);
            for (S32 i = 0; i < cnt ; i++) {
                filters.push_back(StringUnit::getUnit(filterTabSep, i, delimiters));
            }
        }
        mFileDialog.mSaveMode = false;
        mFileDialog.setFileName(fileName);
        if (caption) mFileDialog.mLabel = caption;
        mFileDialog.mFilters = filters;   }

    // fileExt like: .wav
    void FileDialogObject::setSaveMode(const char* fileName, const char* fileExt, const char* caption, const char* filterTabSep) {
        if (!fileName || !fileExt) return;

        mFileDialog.reset();

        std::vector<std::string> filters = {};
        if (filterTabSep && dStrlen(filterTabSep) > 0) {
            const char * delimiters = "\t";
            S32 cnt = StringUnit::getUnitCount(filterTabSep, delimiters);
            for (S32 i = 0; i < cnt ; i++) {
                filters.push_back(StringUnit::getUnit(filterTabSep, i, delimiters));
            }
        }
        mFileDialog.mSaveMode = true;
        mFileDialog.setFileName(fileName);
        mFileDialog.mSaveExt = fileExt;
        if (caption) mFileDialog.mLabel = caption;
        mFileDialog.mFilters = filters;
    }

IMPLEMENT_CONOBJECT(FileDialogObject);


DefineEngineMethod(FileDialogObject, Init, void, (const char* path, const char* filterTabSep),
                   ,"set path and filter of FileDialog filer are TAB separated extension") {
    object->init(path, filterTabSep);
}
DefineEngineMethod(FileDialogObject, setLoadMode, void,
                   (const char* fileName, const char* caption, const char* filterTabSep),
                   ,"set save mode fileName, fileExt, caption  and filter of FileDialog filer are TAB separated extension like .wav TAB .ogg") {
    object->setLoadMode(fileName, caption, filterTabSep);
}

DefineEngineMethod(FileDialogObject, setSaveMode, void,
                   (const char* fileName, const char* fileExt, const char* caption, const char* filterTabSep),
                   ,"set save mode fileName, fileExt, caption  and filter of FileDialog filer are TAB separated extension like .wav TAB .ogg") {
    object->setSaveMode(fileName, fileExt, caption, filterTabSep);
}

DefineEngineMethod(FileDialogObject, Reset, void, (),,"reset current settings - when set to save for example") {
    return object->mFileDialog.reset();
}
DefineEngineMethod(FileDialogObject, Draw, bool, (),,
        "Draw the Filedialog, return true on action\n"
        "You can check saveMode is set and save the selectedFileName\n"
        "if selectedExt is empty you can append it."
) {
    return object->mFileDialog.Draw();
}

DefineEngineMethod(FileDialogObject, getSelectedFile, const char *,(),,"get the selected file"){
    return object->mFileDialog.selectedFile.c_str();
}
DefineEngineMethod(FileDialogObject, getSelectedExt, const char *,(),,"get the selected file extension"){
    return object->mFileDialog.selectedExt.c_str();
}

DefineEngineMethod(FileDialogObject, getCancelPressed, bool,(),,"the user pressed cancel?"){
    return object->mFileDialog.mCancelPressed;
}

DefineEngineMethod(FileDialogObject, IsSaveMode, bool,(),,"save mode or open mode"){
    return object->mFileDialog.mSaveMode;
}

DefineEngineMethod(FileDialogObject, getSaveExt, const char *,(),,"get the save mode file extension"){
    return object->mFileDialog.mSaveExt.c_str();
}

} //namespace

