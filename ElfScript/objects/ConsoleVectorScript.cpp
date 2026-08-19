//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// ConsoleVector Bindings
//-----------------------------------------------------------------------------
#include "console/engineAPI.h"
#include "console/console.h"
#include "math/mMathConsoleVector.h"
#include "console/localVar.h"


DefineEngineFunction(VEC_PointInRect, bool , (const char* varPoint, const char* varRect),
                     ,"Check a point is in rect by variable ref ") {

    ConsoleVector v1 =  ElfScript::getLocalVector(varPoint);
    ConsoleVector v2 =  ElfScript::getLocalVector(varRect);
    return ElfMath::pointInRect(v1,v2);
}

DefineEngineFunction(VEC_Intersects, bool , (const char* varRect1, const char* varRect2),
                     ,"Check a 2 rects intersects by variable ref ") {

    ConsoleVector v1 =  ElfScript::getLocalVector(varRect1);
    ConsoleVector v2 =  ElfScript::getLocalVector(varRect2);
    return ElfMath::intersects(v1,v2);
}

DefineEngineFunction(VEC_Contains, bool , (const char* varRect1, const char* varRect2),
                     ,"Check Rect2 contains Rect1 by variable ref ") {

    ConsoleVector v1 =  ElfScript::getLocalVector(varRect1);
    ConsoleVector v2 =  ElfScript::getLocalVector(varRect2);
    return ElfMath::contains(v1,v2);
}
