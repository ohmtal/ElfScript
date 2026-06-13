#include <cstdio>
// glue it together ;)
#include "main/engineGlue.h"

#include "console/console.h"
#include "console/script.h"
#include "console/engineAPI.h"


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

        echo("mSin(3.14) =" SPC mSin(3.14));

        schedule(0, 0, "echo", "hello scheduler");
    )";
    Con::evaluatef(code.c_str());

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

    // --------- advance time for scheduler this should be placed in the main loop
    engineGlue::process(0);

    // -------- finallize
    engineGlue::shutDown();

    return 0;
}
