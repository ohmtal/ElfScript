# ElfScript

Cutdown TorqueScript to minimum attempt.

**Current Goals**: Get StringTable and StringFunction working 

**Final Goal:** DefineEngineFunction and DefineEngineMethod (console/engineAPI.h)
Commands like exec (file) or mSin (math) should be optional and added as 
"plugin".

## Step by Step

1.) Platform **DONE** 

    platform/types.h 
    platfrom/platformMemory.h /cpp
    plattform/platform.h and stub
    platform/platformAssert.h stub

2.) Core start **DONE**

    frameAllocator
    datachunker
    
3.) String, StringFunctions and StringTable  **DONE**

    stringtable
    stringfunctions

4.) ... will see whats next ;) ...

console/torquescript includes:

```
astAlloc.cpp:#include "console/console.h"
astAlloc.cpp:#include "compiler.h"
astAlloc.cpp:#include "console/consoleInternal.h"
ast.h:#include "evalState.h"
ast.h:#include "platform/types.h"
astNodes.cpp:#include "platform/platform.h"
astNodes.cpp:#include "console/console.h"
astNodes.cpp:#include "ast.h"
astNodes.cpp:#include "compiler.h"
astNodes.cpp:#include "console/simBase.h"
astNodes.cpp:#include "CMDgram.h"
bison.simple:#include <alloca.h>
bison.simple:#include <malloc.h>
bison.simple:#include <malloc.h>
cmdgram.cpp:#include <stdlib.h>
cmdgram.cpp:#include <stdio.h>
cmdgram.cpp:#include "console/console.h"
cmdgram.cpp:#include "console/torquescript/compiler.h"
cmdgram.cpp:#include "console/consoleInternal.h"
cmdgram.cpp:#include "core/strings/stringFunctions.h"
cmdgram.cpp:#include "CMDgram.h"
CMDgram.y:#include <stdlib.h>
CMDgram.y:#include <stdio.h>
CMDgram.y:#include "console/console.h"
CMDgram.y:#include "console/torquescript/compiler.h"
CMDgram.y:#include "console/consoleInternal.h"
CMDgram.y:#include "core/strings/stringFunctions.h"
CMDscan.cpp:#include <stdio.h>
CMDscan.cpp:#include <string.h>
CMDscan.cpp:#include <errno.h>
CMDscan.cpp:#include <stdlib.h>
CMDscan.cpp:#include <inttypes.h>
CMDscan.cpp:#include <stdio.h>
CMDscan.cpp:#include "platform/platform.h"
CMDscan.cpp:#include "core/stringTable.h"
CMDscan.cpp:#include "console/console.h"
CMDscan.cpp:#include "console/torquescript/compiler.h"
CMDscan.cpp:#include "console/dynamicTypes.h"
CMDscan.cpp:#include "core/strings/stringFunctions.h"
CMDscan.cpp:#include "console/torquescript/CMDgram.h"
CMDscan.cpp:#include <unistd.h>
CMDscan.l:#include <stdio.h>
CMDscan.l:#include "platform/platform.h"
CMDscan.l:#include "core/stringTable.h"
CMDscan.l:#include "console/console.h"
CMDscan.l:#include "console/torquescript/compiler.h"
CMDscan.l:#include "console/dynamicTypes.h"
CMDscan.l:#include "core/strings/stringFunctions.h"
CMDscan.l:#include "console/torquescript/CMDgram.h"
codeBlock.cpp:#include "console/console.h"
codeBlock.cpp:#include "compiler.h"
codeBlock.cpp:#include "codeBlock.h"
codeBlock.cpp:#include "ast.h"
codeBlock.cpp:// #include "console/telnetDebugger.h"
codeBlock.cpp:#include "core/strings/unicode.h"
codeBlock.cpp:#include "core/strings/stringFunctions.h"
codeBlock.cpp:#include "core/stringTable.h"
codeBlock.cpp:#include "core/stream/fileStream.h"
codeBlock.h:#include <vector>
codeBlock.h:#include <unordered_map>
codeBlock.h:#include "parser.h"
codeBlock.h:#include "console/runtime.h"
codeBlock.h:#include "compiler.h"
compiledEval.cpp:#include "platform/platform.h"
compiledEval.cpp:#include "ast.h"
compiledEval.cpp:#include "compiler.h"
compiledEval.cpp:#include "core/strings/stringUnit.h"
compiledEval.cpp:#include "console/consoleInternal.h"
compiledEval.cpp:#include "console/simBase.h"
compiledEval.cpp:// #include "sim/netStringTable.h"
compiledEval.cpp:#include "console/stringStack.h"
compiledEval.cpp:#include "util/messaging/message.h"
compiledEval.cpp:#include "core/frameAllocator.h"
compiledEval.cpp:#include "console/returnBuffer.h"
compiledEval.cpp:#include "console/consoleValueStack.h"
compiledEval.cpp:// #include "console/telnetDebugger.h"
compiler.cpp:#include "platform/platform.h"
compiler.cpp:#include "console/console.h"
compiler.cpp:#include "compiler.h"
compiler.cpp:#include "console/simBase.h"
compiler.h:#include <stdio.h>
compiler.h:#include <string>
compiler.h:#include <unordered_map>
compiler.h:#include "platform/platform.h"
compiler.h:#include "ast.h"
compiler.h:#include "codeBlock.h"
compiler.h:#include "core/util/tVector.h"
evalState.cpp:#include "evalState.h"
evalState.h:#include "console/consoleInternal.h"
optimizer.cpp:#include "codeBlock.h"
parser.h:#include <cstdio>
parser.h:#include "platform/types.h"
runtime.cpp:#include "runtime.h"
runtime.cpp:#include "codeBlock.h"
runtime.cpp:#include "console/script.h"
runtime.cpp:#include "console/runtime.h"
runtime.cpp:#include "core/volume.h"
runtime.cpp:#include "core/stream/fileStream.h"
runtime.cpp:#include "core/util/timeClass.h"
runtime.h:#include "ast.h"
runtime.h:#include "console/runtime.h"
```
