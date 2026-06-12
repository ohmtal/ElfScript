#pragma once
#include "console/console.h"

namespace engineGlue
{

    void DefaultLogger(U32 level, const char *consoleLine);
    void init( ConsumerCallback LogFunc = nullptr, String initialDirectory = "assets:/");

    // SimTime U32 ms since last Loop
    void process(SimTime delta);

    void shutDown();
} //engineGlue
