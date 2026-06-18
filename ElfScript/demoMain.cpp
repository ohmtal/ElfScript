#include <cstdio>
// glue it together ;)
#include "main/engineGlue.h"

#include "console/console.h"
#include "console/script.h"
#include "console/engineAPI.h"


// register enum >>>>
#include "console/consoleExtras.h"
// <<<<

// #if defined(__unix__)
// #include <platform/posix/POSIXStdConsole.h>
// #endif

enum MyEnum {
    None = 0,
    One,
    Two,
    Three
};

DefineEngineFunction(helloWorld, void, (String name), , "hello world")
{
    Con::printf("Hello World: %s", name.c_str());
}


bool gShutDownRequest = false;

int argParser(int argc, char* argv[]) {

    gShutDownRequest = true; //default no loop!
    String argStr;
    // argv[0] is program name
    for (int i = 1; i < argc; ++i) {
        if (!argv[i]) continue;
        argStr = argv[i];

        if (argStr.equal("--loop")) {
            gShutDownRequest = false;
            continue;
        }

        // filename test
        if (argStr.equal("--script")) {
            if (i + 1 < argc) {
                String tmpFile = argv[++i];
                Con::infof("Script File test: %s", tmpFile.c_str());
            } else {
                Con::errorf("--script but no file parameter usage: --script myFile.cs");
                return 1;
            }
            continue;
        }

    } //for ...
    return 0;
}


int main(int argc, char* argv[]) {
    printf("Startup ....\n");


    engineGlue::init();
    int ret = argParser(argc, argv);
    if (ret != 0) return ret;

    Con::addVariable("ShutDownRequest", TypeBool, &gShutDownRequest, "");

// moved to addons/shellConsole
// #if defined(__unix__)
//     // console test:
//     StdConsole::create();
//     stdConsole->enable(!gShutDownRequest);
//     stdConsole->enableInput(!gShutDownRequest);
// #endif


    // register enum Test >>
    Con::registerEnumS32<MyEnum>("$MyEnum::");
    // <<<<<


    // filesystem not implemented   Con::setLogMode(0);
    std::string code= R"(
        echo("EnumTest ..................");
        echo($MyEnum::None SPC $MyEnum::One SPC $MyEnum::Two);
        echo("......................");
        helloWorld("tom");
        error("This is NOT a error!");
        warn("This is NOT a warning!");
        echo( 5 + 5 );

        function FOO::bar(%this) {
            echo(%this.getClassName());
        }
        $foo = new ScriptObject() { class = "FOO"; };
        $foo.userValue = 4711;
        $foo.bar();

        echo("mSin(3.14) =" SPC mSin(3.14));

        schedule(0, 0, "echo", "hello scheduler");

        // -------------------------
        // ... overwrite quit ...
        function quit() {
            $ShutDownRequest = true;
        }
        // -------------------------

    )";
    Con::evaluate(code.c_str(), false, "");

    // // ------ output log entries:
    // ConsoleLogEntry *log;
    // U32 size;
    //
    // Con::getLockLog(log, size);
    // for (U32 i = 0; i < size; ++i)
    // {
    //     ConsoleLogEntry &entry = log[i];
    //     printf("%d:[%d]:[%d] %s\n", i,entry.mLevel, entry.mType, entry.mString);
    // }
    //
    // Con::unlockLog();


    Con::executeFile("ElfScript/test.cs");

    // --------- advance time for scheduler this should be placed in the main loop
    while (!gShutDownRequest) {
          engineGlue::process(0);

          // #if defined(__unix__)
          // stdConsole->process();
          // #endif

          Platform::sleep(16);

    }


    // -------- finallize
    engineGlue::shutDown();

    return 0;
}
