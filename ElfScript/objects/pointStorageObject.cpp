//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// ElfScript PointStorageObject
// The idea is we have a virutally unlimited (not really - 1000000 is the
// limit) Point Storage.
// Store a VectorType with 4 Points inside a Vector
// this can be used for a Vector2/3/4, Rectangle or UV
//-----------------------------------------------------------------------------
// applyMathOnPoints give special power to modify points in one call using tinyexpr.
//-----------------------------------------------------------------------------
// Examples:
//  - store points for custom particles
//  - results of a pathfind.
//  and much more ;)
//-----------------------------------------------------------------------------
// Example usage:
// Create a new Storage with space for 1k points:
//     new PointStorageObject(sto) { storageSize = 1000; };
//     print(sto.storageSize);
// set the point at index 0 to {10,20,30,40}
//     sto.setPointVec(0,{10,20,30,40});
//     print(sto.getPointVec(0));
// set the current x,y,z,w values from the storage at index 0
//     sto.popPoint(0);
//     sto.dumpFields();
// modify y
//     sto.y = 66.67;
// push it to storage at index 0
//     sto.pushPoint(0);
//     print(sto.getPointVec(0));
// set new values at x,y,z,w
//     sto.setPos(11,12,13,14);
// push them to storage at index 1
//     sto.pushPoint(1);
//     print(sto.getPointVec(1));
// for (%i = 0; %i < 1000; %i++) { sto.setPoint(%i, getRandomF(1.0),getRandomF(1.0),getRandomF(1.0),getRandomF(1.0)); } echo("DONE!");
// for (%i = 0; %i < 1000; %i++) { print("#",%i SPC sto.getPointVec(%i)); }
// for (%i = 0; %i < 1000; %i++) { sto.popPoint(%i); echo("#",%i SPC sto.x SPC sto.y SPC sto.width SPC sto.height); }
// for (%i = 0; %i < 1000; %i++) { echo(sto.getPointx(%i) SPC sto.getPointy(%i) SPC sto.getPointz(%i) SPC sto.getPointw(%i)); }
//-----------------------------------------------------------------------------
#include "console/engineAPI.h"
#include "console/consoleTypes.h"
#include "math/mMathRand.h"
#include "math/mMathFn.h"
#include "ext/tinyexpr.h"


struct InternalVector4{
    F32 x = 0;
    F32 y = 0;
    F32 z = 0;
    F32 w = 0;
};

// ------------ Vector2 helper ----------------
inline float lengthSquaredXY(const F32 x, const F32 y) {
    return x * x + y * y;
}

inline float lengthXY(const F32 x, const F32 y) {
    return ElfMath::mSqrt(lengthSquaredXY(x,y));
}

void normalizeXY(F32& x, F32& y) {
    float len = lengthXY(x,y);
    if (len > 0.0f) {
        x /= len;
        y /= len;
    }
}


// ------------ tinyexpr wrapped random: -------------------
static double tinyexpr_randf_0() {
    return (double)ElfMath::mRandF();
}
static double tinyexpr_randf_1(double min) {
    return (double)ElfMath::mRandF((F32) min, 0.f);
}
static double tinyexpr_randf_2(double min, double max) {
    return (double)ElfMath::mRandF((F32)min, (F32)max);
}

// For accessing current object from tinyexpr function
class PointStorageObject;
static PointStorageObject* sCurrentInstance = nullptr;

class PointStorageObject: public SimObject
{
    typedef SimObject Parent;
public:
    DECLARE_CONOBJECT(PointStorageObject);
    F32 mX, mY, mZ, mW;
    /*
     * Storing Point in a vector Vector implementation
     *
     * property pointSize set/get the size of this vector to speed up access
     *          i fo not use push at mPoints this should be pretty fast
     * setPoint store x,y at a index in this vector
     * pushPoint
     * popPoint
     */
    Vector<InternalVector4> mPoints;

    // math (tinyexpr) operation direct access:
    F64 mtX, mtY, mtZ, mtW;

    PointStorageObject() {
        mX = mY = mZ = mW = 0.f;
        mtX =  mtY = mtZ =  mtW = 0.f;
    }


    void setStorageSize(U32 size) {
        if ( size <= 1000000) {
            U32 oldSize = this->mPoints.size();
            this->mPoints.setSize(size);
            if (size > oldSize) {
                U32 newElements = size - oldSize;
                InternalVector4* startOfNewData = this->mPoints.address() + oldSize;
                dMemset(startOfNewData, 0, newElements * sizeof(InternalVector4));
            }
        } else {
            Con::errorf("setStorageSize value too high! max: 1000000, send:%u", size);
        }
    }


    static bool _setStorageSize(void* obj,const char* , const char* data) {
        PointStorageObject* object = static_cast<PointStorageObject*>(obj);
        if (!object || !data) {
            Con::errorf("Failed to set pointSize!");
            return false;
        }
        object->setStorageSize(dAtoui(data));
        return false;
    }
    static const char *_getStorageSize(void* obj, const char* data) {
        PointStorageObject* object = static_cast<PointStorageObject*>(obj);
        if (!object) return "";
        return Con::getIntArg(object->mPoints.size());
    }


    static void initPersistFields()
    {
        // Parent::initPersistFields();
        addField("x",     TypeF32,     Offset(mX, PointStorageObject));
        addField("y",     TypeF32,     Offset(mY, PointStorageObject));
        addField("z",     TypeF32,     Offset(mZ, PointStorageObject));
        addField("w",     TypeF32,     Offset(mW, PointStorageObject));
        addField("width",     TypeF32,     Offset(mZ, PointStorageObject),  "alias for z");
        addField("height",     TypeF32,     Offset(mW, PointStorageObject), "alias for w - yes w.");
        //----
        addProtectedField("storageSize", TypeU32, 0, &_setStorageSize,&_getStorageSize, "Set the storage size (how many points we can work with) Max:1000000.");


    }

    void setPos(F32 x, F32 y, F32 z, F32 w) {
        mX = x;
        mY = y;
        mZ = z;
        mW = w;
    }

    void setPos(const InternalVector4& vec4) {
        this->mX = vec4.x;
        this->mY = vec4.y;
        this->mZ = vec4.z;
        this->mW = vec4.w;
    }


    /*
     * applyMathOnPoints
     * - Using tinyexpr
     * - Format each statement separated by ";" => "x+5; y*2; z; w"
     */
    bool applyMathOnPoints(String Expr, U32 startIndex = 0, U32 endIndex = 0) {
        if (endIndex == 0) endIndex = mPoints.size() -1;
        if ( endIndex >= mPoints.size()
            || startIndex >= mPoints.size()
            || startIndex > endIndex
        ) {
            Con::errorf("Invalid Range parameter applyMathOnPoints ( %u .. %u )", startIndex, endIndex);
            return false;
        }



        Vector<String> expressions;
        Expr.split(";", expressions);

        // special pathes !!
        if (expressions.size() == 1) {
            String trimmedExpr = Expr.trim();
            if (trimmedExpr.equal("normalizeXY()", String::NoCase)) {
                for (U32 i = startIndex; i <= endIndex; i++) {
                    normalizeXY( mPoints[i].x, mPoints[i].y );
                }
                return true;
            }
        }

        if (expressions.size() != 4) {

            Con::errorf("applyMathOnPoints: Expected 4 expressions separated by ';' (e.g., 'x+1; y; z; w')");
            return false;
        }


        sCurrentInstance = this;
        const int paramCount = 7;
        te_variable vars[paramCount] = {
            {"x", &mtX, TE_VARIABLE},
            {"y", &mtY, TE_VARIABLE},
            {"z", &mtZ, TE_VARIABLE},
            {"w", &mtW, TE_VARIABLE},
            {"randf", (const void*)&tinyexpr_randf_0, TE_FUNCTION0},
            {"randf1", (const void*)&tinyexpr_randf_1, TE_FUNCTION1},
            {"randf2", (const void*)&tinyexpr_randf_2, TE_FUNCTION2}
        };

        int err;
        te_expr* exprX = te_compile(expressions[0].c_str(), vars, paramCount, &err);
        te_expr* exprY = te_compile(expressions[1].c_str(), vars, paramCount, &err);
        te_expr* exprZ = te_compile(expressions[2].c_str(), vars, paramCount, &err);
        te_expr* exprW = te_compile(expressions[3].c_str(), vars, paramCount, &err);

        if (!exprX || !exprY || !exprZ || !exprW) {
            Con::errorf("applyMathOnPoints: Formula compilation failed!");
            if (exprX) te_free(exprX);
            if (exprY) te_free(exprY);
            if (exprZ) te_free(exprZ);
            if (exprW) te_free(exprW);
            return false;
        }

        for (U32 i = startIndex; i <= endIndex; i++) {
            InternalVector4& p = mPoints[i];

            mtX = (F64)p.x;
            mtY = (F64)p.y;
            mtZ = (F64)p.z;
            mtW = (F64)p.w;

            mtX = te_eval(exprX);
            mtY = te_eval(exprY);
            mtZ = te_eval(exprZ);
            mtW = te_eval(exprW);

            p.x = (F32)mtX;
            p.y = (F32)mtY;
            p.z = (F32)mtZ;
            p.w = (F32)mtW;
        }

        sCurrentInstance = nullptr;

        te_free(exprX);
        te_free(exprY);
        te_free(exprZ);
        te_free(exprW);

        return true;
    }
};

IMPLEMENT_CONOBJECT(PointStorageObject);

// ---------- get/set Vector String ----------
DefineEngineMethod(PointStorageObject, getPosVec, String, (), , "get the position as Vector (String)") {
    StringBuilder str;
    str.format("%g %g %g %g", object->mX, object->mY, object->mZ, object->mW);
    return Con::getStringArg(str.end());
}
DefineEngineMethod(PointStorageObject, setPosVec, void, (String strVector), , "set the position by Vector (String)") {
      dSscanf(strVector.c_str(), "%g %g %g %g",&object->mX, &object->mY, &object->mZ, &object->mW);
}

// ---------- set Pos by float's ----------
DefineEngineMethod(PointStorageObject, setPos, void, (F32 x, F32 y, F32 z, F32 w),(0.f,0.f) ,
                   "Set position by method ") {
    object->setPos(x,y,z,w);
}
DefineEngineMethod(PointStorageObject, normalizeXZ, void, (), ,
                   "normalize the current position") {
    normalizeXY(object->mX, object->mY);
}
DefineEngineMethod(PointStorageObject, getLen, F32, (), ,
                   "len of current position") {
    return lengthXY(object->mX, object->mY);
}
// -------------------------------------
// ---------- mPoints storage ----------
DefineEngineMethod(PointStorageObject, setPoint, bool, (U32 index, F32 x, F32 y, F32 z, F32 w),(0.f, 0.f) ,
            "Set a  point at index in the point storage.") {
    if ( index >= object->mPoints.size()) return false;
    object->mPoints[index] = { x, y, z, w};
    return true;
}

DefineEngineMethod(PointStorageObject, getPointX, F32, (U32 index),
                   , "get the point.x from the point storage at index as Vector (String)") {
    if ( index >= object->mPoints.size()) return 0.f;
    return (object->mPoints[index].x);
}
DefineEngineMethod(PointStorageObject, getPointY, F32, (U32 index),
                   , "get the point.x from the point storage at index as Vector (String)") {
    if ( index >= object->mPoints.size()) return 0.f;
    return (object->mPoints[index].y);
}
DefineEngineMethod(PointStorageObject, getPointZ, F32, (U32 index),
                   , "get the point.z from the point storage at index as Vector (String)") {
    if ( index >= object->mPoints.size()) return 0.f;
    return (object->mPoints[index].z);
}
DefineEngineMethod(PointStorageObject, getPointW, F32, (U32 index),
                   , "get the point.w from the point storage at index as Vector (String)") {
    if ( index >= object->mPoints.size()) return 0.f;
    return (object->mPoints[index].w);
}
DefineEngineMethod(PointStorageObject, setPointX, bool, (U32 index, F32 value),
                   , "set the point.x from the point storage at index as Vector (String)") {
    if ( index >= object->mPoints.size()) return false;
    object->mPoints[index].x = value;
    return true;
}
DefineEngineMethod(PointStorageObject, setPointY, bool, (U32 index, F32 value),
                   , "set the point.y from the point storage at index as Vector (String)") {
    if ( index >= object->mPoints.size()) return false;
    object->mPoints[index].y = value;
    return true;
}
DefineEngineMethod(PointStorageObject, setPointZ, bool, (U32 index, F32 value),
                   , "set the point.z from the point storage at index as Vector (String)") {
    if ( index >= object->mPoints.size()) return false;
    object->mPoints[index].z = value;
    return true;
}
DefineEngineMethod(PointStorageObject, setPointW, bool, (U32 index, F32 value),
                   , "set the point.z from the point storage at index as Vector (String)") {
    if ( index >= object->mPoints.size()) return false;
    object->mPoints[index].w = value;
    return true;
}

DefineEngineMethod(PointStorageObject, getPointVec, String, (U32 index),
                   , "get the point from the point storage at index as Vector (String)") {
    if ( index >= object->mPoints.size()) return "";
    InternalVector4 vec4 = object->mPoints[index];
    StringBuilder str;
    str.format("%g %g %g %g", vec4.x, vec4.y, vec4.z, vec4.w);
    return Con::getStringArg(str.end());
}
DefineEngineMethod(PointStorageObject, setPointVec, bool, ( U32 index, String strVector), ,
                   "set the point in the Point Storage at index by Vector (String)") {
    if ( index >= object->mPoints.size()) return false;
    InternalVector4 vec4;
    dSscanf(strVector.c_str(), "%g %g %g %g",&vec4.x, &vec4.y, &vec4.z, &vec4.w);
    object->mPoints[index] = vec4;
    return true;
}
DefineEngineMethod(PointStorageObject, getPoint2Vec, String, (U32 index),
                   , "get the point xy from the point storage at index as Vector (String)") {
    if ( index >= object->mPoints.size()) return "";
    InternalVector4 vec4 = object->mPoints[index];
    StringBuilder str;
    str.format("%g %g", vec4.x, vec4.y);
    return Con::getStringArg(str.end());
}
DefineEngineMethod(PointStorageObject, setPoint2Vec, bool, ( U32 index, String strVector), ,
                   "set the point xy in the Point Storage at index by Vector (String)") {
    if ( index >= object->mPoints.size()) return false;
    F32 x,y;
    dSscanf(strVector.c_str(), "%g %g",&x, &y);
    object->mPoints[index].x = x;
    object->mPoints[index].y = y;
    return true;
}
// ---------- mPoints storage from/to objects position ----------
DefineEngineMethod(PointStorageObject, pushPoint, bool, (U32 index), ,
                   "push the current values x,y,z,w, to the point storage") {
    if ( index >= object->mPoints.size()) return false;

    object->mPoints[index] = { object->mX, object->mY, object->mZ, object->mW};

    return true;
}

DefineEngineMethod(PointStorageObject, popPoint, bool, (U32 index), ,
                   "pop the point from the point storage at index to the current values x,y,z,w") {
    if ( index >= object->mPoints.size()) return false;

    object->setPos( object->mPoints[index] );

    return true;
}

// ---------- mPoints storage tinyexpr ----------
// Test:
//
/*
function PointMathTest() {
if (!isObject(sto)) new PointStorageObject(sto) { storageSize = 1000; };
sto.applyMathOnPoints("x+3.14; sin(x);randf1(1.0);w");
for (%i = 0; %i < 1000; %i++) { echo(sto.getPointVec(%i));}
}
*/
DefineEngineMethod(PointStorageObject, applyMathOnPoints, bool, (String Expr, U32 startIndex, U32 endIndex),(0,0)
        ,"Apply a Math expression on point Storage.\n"
        "expected format: \"x+5; y*2; z; w\" separated by ';'\n"
        "this execute 4 statements. one for each field. "
        "abs (calls to fabs), acos, asin, atan, atan2, ceil, cos, cosh, exp, floor, ln (calls to log), log (calls to log10 by default, see below), log10, pow, sin, sinh, sqrt, tan, tanh\n"
        "Random: randf(), randf1(5.0), randf2(1.0,2.0)\n"
        "Example ranomize all: sto.applyMathOnPoints(\"mrandf(),mrandf(),mrandf(),mrandf()\");"
        "Special one parameter expression: \n"
        "  normalizeXY => applyMathOnPoints(\"normalizeXY()\");"
        ) {
    return object->applyMathOnPoints( Expr, startIndex, endIndex);
}
