
#include "BaseFlux/Main.h"
#include "console/engineAPI.h"

#include "SoundObject.h"
extern BaseFlux::Main app;

namespace BaseFluxElf {
    SoundObject::SoundObject() {
        mFileName = StringTable->EmptyString();
    }
    bool SoundObject::onAdd() {
        mWaveData = app.getSound(mFileName);
        if (!mWaveData) return false;
        return Parent::onAdd();
    }

    void SoundObject::onRemove() {
        stop(); //BaseFlux handle it in a Arena Allocator so only stop.
    }

    BaseFlux::WavData* SoundObject::get() { return mWaveData; };

    void SoundObject::initPersistFields() {
        Parent::initPersistFields();
        addField("fileName", TypeString, Offset(mFileName,SoundObject));
        addField("gain", TypeF32, Offset(mGain,SoundObject));
        addField("loop", TypeBool, Offset(mLoop,SoundObject));
    }

    bool SoundObject::play() {
        if (!mWaveData) return false;
        return app.getAudioManager().play(mWaveData, mGain, mLoop);
    }
    bool SoundObject::stop() {
        if (!mWaveData) return false;
        return app.getAudioManager().stop(mWaveData);
    }

    IMPLEMENT_CONOBJECT(SoundObject);

    DefineEngineMethod(SoundObject, play,bool, (),,"play the sound" ) { return object->play(); }
    DefineEngineMethod(SoundObject, stop,bool, (),,"stop the sound" ) { return object->stop(); }

}
