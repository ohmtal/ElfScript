//------------------------------------------------------------------------------
#include "console/console.h"
#include "console/script.h"
#include "sim/netStringTable.h"
#include "console/engineAPI.h"
#include <platform/platformVolume.h>
//--------------------------------------------------------------------------------------
namespace engineAPI
{
    bool gUseConsoleInterop = true;
    bool gIsInitialized = false;
}
namespace engineGlue
{
    // -----------------------------------------------------------------------------
    void DefaultLogger(U32 level, const char *consoleLine)
    {
        switch (level) {
            case 1: dPrintf("[warn] %s\n",  consoleLine); break;
            case 2: dPrintf("[error] %s\n",  consoleLine); break;
            default: dPrintf("%s\n",  consoleLine); break;
        }

    }
    // -----------------------------------------------------------------------------
    void init( ConsumerCallback LogFunc = nullptr, String initialDirectory = "assets:/")
    {
        // Asserts should be created FIRST
        PlatformAssert::create();
        // ManagedSingleton< ThreadManager >::createSingleton();
        FrameAllocator::init(TORQUE_FRAME_SIZE);      // See comments in torqueConfig.h
        _StringTable::create();
        Con::init();
        // Platform::initConsole();
        NetStringTable::create();

        Platform::FS::InstallFileSystems(); // install all drives for now until we have everything using the volume stuff
        Platform::FS::MountDefaults();
        Torque::FS::SetCwd( initialDirectory );
        Platform::setCurrentDirectory( Platform::getMainDotCsDir() );

        Platform::init();    // platform specific initialization
        // Set engineAPI initialized to true
        engineAPI::gIsInitialized = true;
        Sim::init();

        if (!LogFunc) {
            Con::addConsumer(DefaultLogger);
        } else {
            Con::addConsumer(*LogFunc);
        }
    }
    // -----------------------------------------------------------------------------
    // SimTime U32 ms since last Loop
    void process(SimTime delta) {
        Sim::advanceTime(delta);
        ConsoleValue::resetConversionBuffer();
    }
    // -----------------------------------------------------------------------------
    void shutDown() {
        Sim::shutdown();

        Platform::shutdown();

        NetStringTable::destroy();
        Con::shutdown();

        _StringTable::destroy();
        FrameAllocator::destroy();
        // asserts should be destroyed LAST
        PlatformAssert::destroy();

        engineAPI::gIsInitialized = false;
    }
} //engineGlue
