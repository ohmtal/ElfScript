//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// FIXME unfinished!!!
// Binding to ImFileDialog
//-----------------------------------------------------------------------------
#include "spice/gui/ImFileDialog.h"
#include "console/engineAPI.h"
#include "console/consoleExtras.h"
#include <core/strings/stringUnit.h>
#include <string>
//-----------------------------------------------------------------------------
extern String getFullPath(String pathIdent = "base:/");
//-----------------------------------------------------------------------------
class FileDialogObject: public SimObject {
     typedef SimObject Parent;
public:
    DECLARE_CONOBJECT(FileDialogObject);

    ImFileDialog mFileDialog;

    bool onAdd() override{
        mFileDialog.mCustomQuickPathes["Assets"] = getFullPath("assets:/").c_str();
        mFileDialog.mCustomQuickPathes["Home"]   = getFullPath("home:/").c_str();
        return Parent::onAdd();
    }
    static void initPersistFields() {
        Parent::initPersistFields();
        addField("selectedFile", TypeString, Offset(mFileDialog.selectedFile, FileDialogObject), "Current selected file,");
        addField("selectedExt", TypeString, Offset(mFileDialog.selectedExt, FileDialogObject), "Current selected file extension");

        addField("SaveMode", TypeBool, Offset(mFileDialog.mSaveExt, FileDialogObject), "Default file extension in save mode");
        addField("SaveExt", TypeString, Offset(mFileDialog.mSaveExt, FileDialogObject), "Default file extension in save mode");


        // void callSaveSong() {
        //     g_FileDialog.setFileName(mSongName);
        //     g_FileDialog.mSaveMode = true;
        //     g_FileDialog.mSaveExt = ".fms";
    //TODO     g_FileDialog.mLabel = "Save Song (.fms)";
    //TODO     g_FileDialog.mFilters = {".fms"};
        //
        // }
    }

    /*
     * set path and filter of FileDialog filer are TAB separated extension
     */
    void init(const char* path, const char* filterTabSep) {
        std::vector<std::string> filters = {};
        const char * delimiters = "\t";
        S32 cnt = StringUnit::getUnitCount(filterTabSep, delimiters);
        for (S32 i = 0; i < cnt ; i++) {
            filters.push_back(StringUnit::getUnit(filterTabSep, i, delimiters));
        }
        mFileDialog.init(path, filters);
    }
};
IMPLEMENT_CONOBJECT(FileDialogObject);


DefineEngineMethod(FileDialogObject, Init, void, (const char* path, const char* filterTabSep),
                   ,"set path and filter of FileDialog filer are TAB separated extension") {
    object->init(path, filterTabSep);
}

DefineEngineMethod(FileDialogObject, Reset, void, (),,"reset current settings - when set to save for example") {
    return object->mFileDialog.reset();
}
DefineEngineMethod(FileDialogObject, Draw, bool, (),,"Draw the Filedialog, return true on action") {
    return object->mFileDialog.Draw();
}
