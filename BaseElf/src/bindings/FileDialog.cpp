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
//     static void initPersistFields() {
//         Parent::initPersistFields();
//         // addField("caption", TypeString, Offset(mFileDialog.mLabel, FileDialogObject), "Current selected file,");
//
//
// //FIXME setting a string cause crash std::string vs TypeString!!!!!!!
//
//         addField("selectedFile", TypeString, Offset(mFileDialog.selectedFile, FileDialogObject), "Current selected file,");
//         addField("selectedExt", TypeString, Offset(mFileDialog.selectedExt, FileDialogObject), "Current selected file extension");
//
//         addField("cancelPressed", TypeBool, Offset(mFileDialog.mCancelPressed, FileDialogObject), "the user pressed cancel");
//
//         addField("SaveMode", TypeBool, Offset(mFileDialog.mSaveExt, FileDialogObject), "Default file extension in save mode");
//         addField("SaveExt", TypeString, Offset(mFileDialog.mSaveExt, FileDialogObject), "Default file extension in save mode");
//     }

    /*
     * set path and filter of FileDialog filer are TAB separated extension
     * ext like: .wav
     */
    void init(const char* path, const char* filterTabSep) {
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


    void setLoadMode(const char* fileName,const char* caption, const char* filterTabSep) {
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
    void setSaveMode(const char* fileName, const char* fileExt, const char* caption, const char* filterTabSep) {
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

}; //class
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


