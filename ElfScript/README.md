# ElfScript

Cutdown TorqueScript to minimum attempt.

**Current Goals**: Get StringTable and StringFunction working 

**Final Goal:** DefineEngineFunction and DefineEngineMethod (console/engineAPI.h)
Commands like exec (file) or mSin (math) should be optional and added as 
"plugin".

## Step by Step

1.) Platform

    platform/types.h 
    platfrom/platformMemory.h /cpp
    plattform/platform.h and stub
    platform/platformAssert.h stub

2.) Core start

    frameAllocator
    datachunker
    
3.) String, StringFunctions and StringTable

    stringtable
    stringfunctions

