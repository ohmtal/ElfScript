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
// TODO: this should be enhanced with usefull stuff:
// - isValidRect
//
// - normalize
// - len
// - ....all the vector stuff
//
// - distance of 2 points inside the storage *haha*
//
// - create spline positions (catmul rom)
//
// - check what clone does with this object ....
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
#include <console/consoleTypes.h>


struct InternalVector4{
    F32 x = 0;
    F32 y = 0;
    F32 z = 0;
    F32 w = 0;
};


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

    PointStorageObject() {
        mX = mY = mZ = mW = 0.f;
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
                   "Set point by method ") {
    object->setPos(x,y,z,w);
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
                   "pop the point from the point storage from index to the current values x,y,z,w") {
    if ( index >= object->mPoints.size()) return false;

    object->setPos( object->mPoints[index] );

    return true;
}
