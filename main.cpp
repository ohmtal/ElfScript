#include <cstdio>
#include "console/console.h"
#include "console/script.h"
#include "sim/netStringTable.h"
#include "console/engineAPI.h"
#include "platform/platformVolume.h"

#include "main/engineGlue.h"

// namespace engineAPI
// {
//    // This is the magic switch for deciding which interop the engine
//    // should use.  It will go away when we drop the console system
//    // entirely but for now it is necessary for several behaviors that
//    // differ between the interops to decide what to do.
//    bool gUseConsoleInterop = true;
//
//    bool gIsInitialized = false;
// }
// void init()
// {
//     #ifdef TORQUE_DEBUG
//     gStartupTimer = PlatformTimer::create();
//     #endif
//
//     // Platform::setMathControlStateKnown();
//
//     // Asserts should be created FIRST
//     PlatformAssert::create();
//
//     // ManagedSingleton< ThreadManager >::createSingleton();
//     FrameAllocator::init(TORQUE_FRAME_SIZE);      // See comments in torqueConfig.h
//
//     // Yell if we can't initialize the network.
//     // if(!Net::init())
//     // {
//     //     AssertISV(false, "StandardMainLoop::initCore - could not initialize networking!");
//     // }
//
//     _StringTable::create();
//
//     // Set up the resource manager and get some basic file types in it.
//     Con::init();
//     // Platform::initConsole();
//     NetStringTable::create();
//
//
//
//     // init Filesystem first, so we can actually log errors for all components that follow
//     Platform::FS::InstallFileSystems(); // install all drives for now until we have everything using the volume stuff
//     Platform::FS::MountDefaults();
//
//     // Set our working directory.
//     Torque::FS::SetCwd( "assets:/" );
//
//     // Set our working directory.
//     Platform::setCurrentDirectory( Platform::getMainDotCsDir() );
//
//     // Processor::init();
//     // Math::init();
//     Platform::init();    // platform specific initialization
//     // RedBook::init();
//     // Platform::initConsole();
//
//     // ThreadPool::GlobalThreadPool::createSingleton();
//
//     // Set engineAPI initialized to true
//     engineAPI::gIsInitialized = true;
//
//
//     #ifdef TORQUE_ENABLE_VFS
//     // [tom, 10/28/2006] Load the VFS here so that it stays loaded
//     Zip::ZipArchive *vfs = openEmbeddedVFSArchive();
//     gResourceManager->addVFSRoot(vfs);
//     #endif
//
//     // Con::addVariable("timeScale", TypeF32, &ATTS(gTimeScale), "Animation time scale.\n"
//     // "@ingroup platform");
//     // Con::addVariable("timeAdvance", TypeS32, &ATTS(gTimeAdvance), "The speed at which system processing time advances.\n"
//     // "@ingroup platform");
//     // Con::addVariable("frameSkip", TypeS32, &ATTS(gFrameSkip), "Sets the number of frames to skip while rendering the scene.\n"
//     // "@ingroup platform");
//     //
//     // Con::setVariable( "defaultGame", StringTable->insert("scripts") );
//     //
//     // Con::setVariable("TorqueScriptFileExtension", TORQUE_SCRIPT_EXTENSION);
//     //
//     // Con::addVariable( "_forceAllMainThread", TypeBool, &ThreadPool::getForceAllMainThread(), "Force all work items to execute on main thread. turns this into a single-threaded system. Primarily useful to find whether malfunctions are caused by parallel execution or not.\n"
//     // "@ingroup platform" );
//     //
//     // #if defined( TORQUE_MINIDUMP ) && defined( TORQUE_RELEASE )
//     // Con::addVariable("MiniDump::Dir",	TypeString, &gMiniDumpDir);
//     // Con::addVariable("MiniDump::Exec",	TypeString, &gMiniDumpExec);
//     // Con::addVariable("MiniDump::Params", TypeString, &gMiniDumpParams);
//     // Con::addVariable("MiniDump::ExecDir", TypeString, &gMiniDumpExecDir);
//     // #endif
//
//     // Register the module manager.
//     // ModuleDatabase.registerObject("ModuleDatabase");
//
//     // Register the asset database.
//     // AssetDatabase.registerObject("AssetDatabase");
//
//     // Register the asset database as a module listener.
//     // ModuleDatabase.addListener(&AssetDatabase);
//
//     // ActionMap* globalMap = new ActionMap;
//     // globalMap->registerObject("GlobalActionMap");
//     // Sim::getActiveActionMapSet()->pushObject(globalMap);
//
//     // Do this before we init the process so that process notifiees can get the time manager
//     // tm = new TimeManager;
//     // tm->timeEvent.notify(&::processTimeEvent);
//
//     // Start up the Input Event Manager
//     // INPUTMGR->start();
//
//     // Sampler::init();
//
//     // Hook in for UDP notification
//     // Net::getPacketReceiveEvent().notify(GNet, &NetInterface::processPacketReceiveEvent);
//
//
//      Sim::init();
// }
//
// void shutDown() {
//     Platform::shutdown();
//     NetStringTable::destroy();
//     Con::shutdown();
//
//     _StringTable::destroy();
//     FrameAllocator::destroy();
// //     Net::shutdown();
// //     Sampler::destroy();
// //
// //     ManagedSingleton< ThreadManager >::deleteSingleton();
//
//     // asserts should be destroyed LAST
//     PlatformAssert::destroy();
//
//     Sim::shutdown();
//
//     engineAPI::gIsInitialized = false;
// }

DefineEngineFunction(helloWorld, void, (String name), , "hello world")
{
    Con::printf("Hello World: %s", name.c_str());
}


int main() {
    printf("Startup ....\n");
    engineGlue::init();
    // filesystem not implemented   Con::setLogMode(0);
    std::string code= R"(
        helloWorld("tom");
        error("This is NOT a error!");
        warn("This is NOT a warning!");
        echo( 5 + 5 );

        function FOO::bar(%this) {
            %this.dump();
        }
        $foo = new ScriptObject() { class = "FOO"; };
        $foo.userValue = 4711;
        $foo.bar();
        echo(mSin(3.14)); //math not impemented so far
    )";
    Con::evaluatef(code.c_str());

    // ------ output log entries:
    ConsoleLogEntry *log;
    U32 size;

    Con::getLockLog(log, size);
    for (U32 i = 0; i < size; ++i)
    {
        ConsoleLogEntry &entry = log[i];
        printf("%d:[%d]:[%d] %s\n", i,entry.mLevel, entry.mType, entry.mString);
    }

    Con::unlockLog();

    // --------- fake loop
    engineGlue::process(0);

    // -------- finallize
    engineGlue::shutDown();

    return 0;
}
