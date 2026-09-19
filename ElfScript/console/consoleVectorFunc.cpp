//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// directly linked console Vector functions
//-----------------------------------------------------------------------------
#include "consoleVectorFunc.h"
#include "math/mMathConsoleVector.h"
#include <math/mMathRand.h>

namespace ElfScript::ConsoleVector {


    bool equal(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue) {
        if (argC < 3 || !argV[2].isConsoleVector()) return false;
        resultValue.setBool( ElfMath::Vec4Equal(argV[1].v,argV[2].v));
        return true;
    }

    bool equal3(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue) {
        if (argC < 3 || !argV[2].isConsoleVector()) return false;
        resultValue.setBool( ElfMath::Vec3Equal(argV[1].v,argV[2].v));
        return true;
    }
    bool equal2(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue) {
        if (argC < 3 || !argV[2].isConsoleVector()) return false;
        resultValue.setBool( ElfMath::Vec2Equal(argV[1].v,argV[2].v));
        return true;
    }
    // ------------------------------------------------------------------------
    // no inline modification !
    bool add(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue) {
        if (argC < 3 || !argV[2].isConsoleVector()) return false;
        resultValue.setVector( ElfMath::Vec4Add(argV[1].v,argV[2].v));
        return true;
    }

    bool sub(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue) {
        if (argC < 3 || !argV[2].isConsoleVector()) return false;
        resultValue.setVector( ElfMath::Vec4Sub(argV[1].v,argV[2].v));
        return true;
    }

    bool mul(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue) {
        if (argC < 3 ) return false;

        if (argV[2].isConsoleVector())
            resultValue.setVector( ElfMath::Vec4Mul(argV[1].v,argV[2].v));
        if (argV[2].isNumberType())
            resultValue.setVector( ElfMath::Vec4Mul(argV[1].v,(F32)argV[2].getFloat()));
        else return false;

        return true;

    }
    bool div(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue) {
        if (argC < 3 ) return false;

        if (argV[2].isConsoleVector())
            resultValue.setVector( ElfMath::Vec4Div(argV[1].v,argV[2].v));
        if (argV[2].isNumberType())
            resultValue.setVector( ElfMath::Vec4Div(argV[1].v,(F32)argV[2].getFloat()));
        else return false;

        return true;
    }
    // ------------------------------------------------------------------------

    bool getRectCentered(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue) {
        if (argC < 2 ) return false;

        resultValue.setVector( ElfMath::getRectCentered(argV[1].v));

        return true;
    }
    bool pointInRect(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue){
        if (argC < 3 ) return false;

        if (argV[2].isConsoleVector())
            resultValue.setBool( ElfMath::pointInRect(argV[1].v, argV[2].v));
        else return false;

        return true;
    }


    bool isValidRect(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue) {
        if (argC < 2 ) return false;

        resultValue.setBool( ElfMath::isValidRect(argV[1].v));

        return true;
    }


    bool contains(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue){
        if (argC < 3 ) return false;

        if (argV[2].isConsoleVector())
            resultValue.setBool( ElfMath::contains(argV[1].v, argV[2].v));
        else return false;

        return true;
    }

    bool intersects(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue){
        if (argC < 3 ) return false;

        if (argV[2].isConsoleVector())
            resultValue.setBool( ElfMath::intersects(argV[1].v, argV[2].v));
        else return false;

        return true;
    }
    // ------------------------------------------------------------------------

    bool dist2(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue){
        if (argC < 3 ) return false;

        if (argV[2].isConsoleVector())
            resultValue.setFloat( ElfMath::Vec2Dist(argV[1].v, argV[2].v));
        else return false;

        return true;
    }

    bool distSq2(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue){
        if (argC < 3 ) return false;

        if (argV[2].isConsoleVector())
            resultValue.setFloat( ElfMath::Vec2DistSq(argV[1].v, argV[2].v));
        else return false;

        return true;
    }


    bool dist3(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue){
        if (argC < 3 ) return false;

        if (argV[2].isConsoleVector())
            resultValue.setFloat( ElfMath::Vec3Dist(argV[1].v, argV[2].v));
        else return false;

        return true;
    }
    bool distSq3(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue){
        if (argC < 3 ) return false;

        if (argV[2].isConsoleVector())
            resultValue.setFloat( ElfMath::Vec3DistSq(argV[1].v, argV[2].v));
        else return false;

        return true;
    }
    // ------------------------------------------------------------------------

    bool len2(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue){
        if (argC < 2 ) return false;
        resultValue.setFloat( ElfMath::Vec2Length(argV[1].v));
        return true;
    }

    bool len2Sq(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue){
        if (argC < 2 ) return false;
        resultValue.setFloat( ElfMath::Vec2LengthSq(argV[1].v));
        return true;
    }

    bool len3(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue){
        if (argC < 2 ) return false;
        resultValue.setFloat( ElfMath::Vec3Length(argV[1].v));
        return true;
    }
    bool len3Sq(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue){
        if (argC < 2 ) return false;
        resultValue.setFloat( ElfMath::Vec3LengthSq(argV[1].v));
        return true;
    }

    // ------------------------------------------------------------------------
    bool normalized2(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue){
        if (argC < 2 ) return false;
        resultValue.setVector( ElfMath::Vec2Normalized(argV[1].v));
        return true;
    }
    bool normalized3(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue){
        if (argC < 2 ) return false;
        resultValue.setVector( ElfMath::Vec3Normalized(argV[1].v));
        return true;
    }
    // ------------------------------------------------------------------------

    bool dot2(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue){
        if (argC < 3 ) return false;

        if (argV[2].isConsoleVector())
            resultValue.setFloat( ElfMath::Vec2Dot(argV[1].v, argV[2].v));
        else return false;

        return true;
    }
    bool dot3(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue){
        if (argC < 3 ) return false;

        if (argV[2].isConsoleVector())
            resultValue.setFloat( ElfMath::Vec3Dot(argV[1].v, argV[2].v));
        else return false;

        return true;
    }

    // ------------------------------------------------------------------------
    bool cross2(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue){
        if (argC < 3 ) return false;

        if (argV[2].isConsoleVector())
            resultValue.setFloat( ElfMath::Vec2Cross(argV[1].v, argV[2].v));
        else return false;

        return true;
    }
    bool cross3(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue){
        if (argC < 3 ) return false;

        if (argV[2].isConsoleVector())
            resultValue.setFloat( ElfMath::Vec3Cross(argV[1].v, argV[2].v));
        else return false;

        return true;
    }
    // ------------------------------------------------------------------------
    // randomize modify the inline function and return the value!
    // does not work on objects . so i dont do it here !!
    // // bool randomize(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue){
    // //     if (argC < 2 ) return false;
    // //
    // //     resultValue.type = cvVector;
    // //     if (argC == 3) {
    // //         resultValue.v.points[0] = ElfMath::mRandF(0.0,argV[2].getFloat());
    // //         resultValue.v.points[1] = ElfMath::mRandF(0.0,argV[2].getFloat());
    // //         resultValue.v.points[2] = ElfMath::mRandF(0.0,argV[2].getFloat());
    // //         resultValue.v.points[3] = ElfMath::mRandF(0.0,argV[2].getFloat());
    // //
    // //     } else if (argC == 4) {
    // //         resultValue.v.points[0] = ElfMath::mRandF(argV[2].getFloat(),argV[3].getFloat());
    // //         resultValue.v.points[1] = ElfMath::mRandF(argV[2].getFloat(),argV[3].getFloat());
    // //         resultValue.v.points[2] = ElfMath::mRandF(argV[2].getFloat(),argV[3].getFloat());
    // //         resultValue.v.points[3] = ElfMath::mRandF(argV[2].getFloat(),argV[3].getFloat());
    // //     } else {
    // //         resultValue.v.points[0] = ElfMath::mRandF();
    // //         resultValue.v.points[1] = ElfMath::mRandF();
    // //         resultValue.v.points[2] = ElfMath::mRandF();
    // //         resultValue.v.points[3] = ElfMath::mRandF();
    // //     }
    // //
    // //     argV[1] = resultValue;
    // //
    // //     return true;
    // // }






} // namespace
