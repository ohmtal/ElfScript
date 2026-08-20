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

//-----------------------------------------------------------------------------

DefineEngineFunction(Vec4Add, void , (const char* varVec1, const char* varVec2),
                     ,"v1 = v1 + v2") {

    ConsoleVector v1 =  ElfScript::getLocalVector(varVec1);
    ConsoleVector v2 =  ElfScript::getLocalVector(varVec2);
    ElfMath::Vec4Add(v1,v2);
    ElfScript::setLocalVector(varVec1, v1);
}

DefineEngineFunction(Vec4Sub, void , (const char* varVec1, const char* varVec2),
                     ,"v1 = v1 - v2") {

    ConsoleVector v1 =  ElfScript::getLocalVector(varVec1);
    ConsoleVector v2 =  ElfScript::getLocalVector(varVec2);
    ElfMath::Vec4Sub(v1,v2);
    ElfScript::setLocalVector(varVec1, v1);
}

DefineEngineFunction(Vec4Mul, void , (const char* varVec1, const char* varVec2),
                     ,"v1 = v1 * v2") {

    ConsoleVector v1 =  ElfScript::getLocalVector(varVec1);
    ConsoleVector v2 =  ElfScript::getLocalVector(varVec2);
    ElfMath::Vec4Mul(v1,v2);
    ElfScript::setLocalVector(varVec1, v1);
}
DefineEngineFunction(Vec4Scale, void , (const char* varVec1, F32 scale),
                     ,"v1 = v1 * v2") {

    ConsoleVector v1 =  ElfScript::getLocalVector(varVec1);
    ElfMath::Vec4Mul(v1,scale);
    ElfScript::setLocalVector(varVec1, v1);
}

DefineEngineFunction(Vec4Div, void , (const char* varVec1, const char* varVec2),
                     ,"v1 = v1 / v2") {

    ConsoleVector v1 =  ElfScript::getLocalVector(varVec1);
    ConsoleVector v2 =  ElfScript::getLocalVector(varVec2);
    ElfMath::Vec4Div(v1,v2);
    ElfScript::setLocalVector(varVec1, v1);
}
//-----------------------------------------------------------------------------
DefineEngineFunction(Vec2Distance, F32 , (const char* varPoint1, const char* varPoint2),
                     ,"distance of two 2D points by variable ref ") {

    ConsoleVector v1 =  ElfScript::getLocalVector(varPoint1);
    ConsoleVector v2 =  ElfScript::getLocalVector(varPoint2);
    return ElfMath::Vec2Dist(v1,v2);
}
DefineEngineFunction(Vec3Distance, F32 , (const char* varPoint1, const char* varPoint2),
                     ,"distance of two 3D points by variable ref ") {

    ConsoleVector v1 =  ElfScript::getLocalVector(varPoint1);
    ConsoleVector v2 =  ElfScript::getLocalVector(varPoint2);
    return ElfMath::Vec3Dist(v1,v2);
}
//-----------------------------------------------------------------------------
DefineEngineFunction(Vec2Dot, F32 , (const char* varPoint1, const char* varPoint2),
                     ,"dot product two 2D points by variable ref ") {

    ConsoleVector v1 =  ElfScript::getLocalVector(varPoint1);
    ConsoleVector v2 =  ElfScript::getLocalVector(varPoint2);
    return ElfMath::Vec2Dot(v1,v2);
}
DefineEngineFunction(Vec3Dot, F32 , (const char* varPoint1, const char* varPoint2),
                     ,"dot product two 3D points by variable ref ") {

    ConsoleVector v1 =  ElfScript::getLocalVector(varPoint1);
    ConsoleVector v2 =  ElfScript::getLocalVector(varPoint2);
    return ElfMath::Vec3Dot(v1,v2);
}
//-----------------------------------------------------------------------------
DefineEngineFunction(Vec2Cross, F32 , (const char* varPoint1, const char* varPoint2),
                     ,"cross product two 2D points by variable ref ") {

    ConsoleVector v1 =  ElfScript::getLocalVector(varPoint1);
    ConsoleVector v2 =  ElfScript::getLocalVector(varPoint2);
    return ElfMath::Vec2Cross(v1,v2);
}

DefineEngineFunction(Vec3Cross, F32 , (const char* varPoint1, const char* varPoint2),
                     ,"cross product two 2D points by variable ref ") {

    ConsoleVector v1 =  ElfScript::getLocalVector(varPoint1);
    ConsoleVector v2 =  ElfScript::getLocalVector(varPoint2);
    return ElfMath::Vec3Cross(v1,v2);
}
//-----------------------------------------------------------------------------
DefineEngineFunction(Vec2Length, F32 , (const char* varPoint1),
                     ,"length of a  3D point by variable ref ") {

    ConsoleVector v1 =  ElfScript::getLocalVector(varPoint1);
    return ElfMath::Vec2Length(v1);
}

DefineEngineFunction(Vec3Length, F32 , (const char* varPoint1),
                     ,"length of a  3D point by variable ref ") {

    ConsoleVector v1 =  ElfScript::getLocalVector(varPoint1);
    return ElfMath::Vec3Length(v1);
}
//-----------------------------------------------------------------------------

DefineEngineFunction(Vec2Normalize, void , (const char* varPoint),
                     ,"Check Rect2 contains Rect1 by variable ref ") {

    ConsoleVector v1 =  ElfScript::getLocalVector(varPoint);
    v1 = ElfMath::Vec2Normalized(v1);
    ElfScript::setLocalVector(varPoint, v1);
}
DefineEngineFunction(Vec3Normalize, void , (const char* varPoint),
                     ,"Check Rect2 contains Rect1 by variable ref ") {

    ConsoleVector v1 =  ElfScript::getLocalVector(varPoint);
    v1 = ElfMath::Vec3Normalized(v1);
    ElfScript::setLocalVector(varPoint, v1);
}
//-----------------------------------------------------------------------------
//               ---------------- RECT -------------------
//-----------------------------------------------------------------------------

DefineEngineFunction(Vec4PointInRect, bool , (const char* varPoint, const char* varRect),
                     ,"Check a point is in rect by variable ref ") {

    ConsoleVector v1 =  ElfScript::getLocalVector(varPoint);
    ConsoleVector v2 =  ElfScript::getLocalVector(varRect);
    return ElfMath::pointInRect(v1,v2);
}

DefineEngineFunction(Vec4Intersects, bool , (const char* varRect1, const char* varRect2),
                     ,"Check a 2 rects intersects by variable ref ") {

    ConsoleVector v1 =  ElfScript::getLocalVector(varRect1);
    ConsoleVector v2 =  ElfScript::getLocalVector(varRect2);
    return ElfMath::intersects(v1,v2);
}

DefineEngineFunction(Vec4Contains, bool , (const char* varRect1, const char* varRect2),
                     ,"Check Rect2 contains Rect1 by variable ref ") {

    ConsoleVector v1 =  ElfScript::getLocalVector(varRect1);
    ConsoleVector v2 =  ElfScript::getLocalVector(varRect2);
    return ElfMath::contains(v1,v2);
}
