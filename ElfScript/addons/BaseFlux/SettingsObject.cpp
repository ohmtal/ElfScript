#include "ConsoleTypes.h"
#include "SettingsObject.h"

extern BaseFlux::Main app;

namespace BaseFluxElf {

    IMPLEMENT_CONOBJECT(SettingsObject);

    // -----------------------------------------------------------------------------
    SettingsObject::SettingsObject(){
        mSettings = app.getSettings(); //create a copy
        mCompany = StringTable->insert(mSettings.Company.c_str());
        mCaption = StringTable->insert(mSettings.Caption.c_str());
        mVersion  = StringTable->insert(mSettings.Version.c_str());
        mIconFileName  = StringTable->insert(mSettings.IconFilename.c_str());
        mAssetPath  = StringTable->insert(mSettings.AssetPath.c_str());
        mSoundPathAppend  = StringTable->insert(mSettings.SoundPathAppend.c_str());
        mTexturePathAppend  = StringTable->insert(mSettings.TexturePathAppend.c_str());
        mIniFileName  = StringTable->insert(mSettings.IniFileName.c_str());
    }
    // -----------------------------------------------------------------------------
    void SettingsObject::Sync(){
        mSettings.Company = mCompany;
        mSettings.Caption = mCaption;
        mSettings.Version = mVersion;
        mSettings.IconFilename = mIconFileName;
        mSettings.AssetPath = mAssetPath;
        mSettings.SoundPathAppend = mSoundPathAppend;
        mSettings.TexturePathAppend = mTexturePathAppend;
        mSettings.IniFileName = mIniFileName;
        app.getSettings() = mSettings;
    }
    // -----------------------------------------------------------------------------
    void SettingsObject::initPersistFields() {
        Parent::initPersistFields();
        addField("ScreenSize", TypePoint2I, Offset(mSettings.ScreenSize,SettingsObject));
        addField("FpsLimit", TypeS32, Offset(mSettings.FpsLimit,SettingsObject));
        addField("WindowMaximized", TypeBool, Offset(mSettings.WindowMaximized,SettingsObject));
        addField("FullScreen", TypeBool, Offset(mSettings.FullScreen,SettingsObject));
        addField("EnableVSync", TypeBool, Offset(mSettings.EnableVSync,SettingsObject));
        //FIXME ?!
        addField("Company", TypeString, Offset(mCompany,SettingsObject));
        addField("Caption", TypeString, Offset(mCaption,SettingsObject));
        addField("Version", TypeString, Offset(mVersion,SettingsObject));

        addField("IconFilename", TypeString, Offset( mIconFileName ,SettingsObject));

        addField("AssetPath", TypeString, Offset(mAssetPath,SettingsObject));
        addField("SoundPathAppend", TypeString, Offset(mSoundPathAppend,SettingsObject));
        addField("TexturePathAppend", TypeString, Offset(mTexturePathAppend,SettingsObject));

        addField("EnableDockSpace", TypeBool, Offset(mSettings.EnableDockSpace,SettingsObject));
        addField("IniFileName", TypeString, Offset(mIniFileName,SettingsObject));

        addField("sdlWindowFlagsOverwrite", TypeS32, Offset(mSettings.sdlWindowFlagsOverwrite,SettingsObject));

        addField("clearColor", TypeColor, Offset(mSettings.clearColor,SettingsObject));
    }
    // -----------------------------------------------------------------------------
    DefineEngineMethod(SettingsObject, sync, void, (),,"Settings must be synced to get active!") {
        object->Sync();
    }


} // namespace BaseFluxElf
