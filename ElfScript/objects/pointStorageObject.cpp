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
// REMOVED! applyMathOnPoints give special power to modify points in one call using tinyexpr.
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
//     sto.fetchPoint(0);
//     sto.dumpFields();
// modify y
//     sto.points[1] = 66.67;
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
// for (%i = 0; %i < 1000; %i++) { sto.fetchPoint(%i); echo("#",%i SPC sto.points[0] SPC sto.points[1] SPC sto.points[3]idth SPC sto.height); }
// for (%i = 0; %i < 1000; %i++) { echo(sto.getPointx(%i) SPC sto.getPointy(%i) SPC sto.getPointz(%i) SPC sto.getPointw(%i)); }
//-----------------------------------------------------------------------------
#include "console/engineAPI.h"
#include "console/consoleTypes.h"
#include "console/simFieldDictionary.h"
#include "math/mMathRand.h"
#include "math/mMathFn.h"
#include "console/consoleInternal.h" // for Lambda / mapFN
#include "Array.h"
#include "LambdaMappings.h"

#include "console/localVar.h"

// ------------ Vector2 helper ----------------
inline float lengthSquaredXY(const F32 x, const F32 y) {
    return x * x + y * y;
}

inline float lengthXY(const F64 x, const F64 y) {
    return ElfMath::mSqrt(lengthSquaredXY(static_cast<F32>(x) ,static_cast<F32>(y) ));
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

// =============================================================================

class PointStorageObject: public SimObject
{
    typedef SimObject Parent;

    Namespace::Entry* mFn = nullptr; //mapped function
    ConsoleValue mConsoleTempValue;

public:
    DECLARE_CONOBJECT(PointStorageObject);
    ConsoleVector mVector;

    Array* mFnParams = nullptr;
    U32 mFnStep = 0;

    /*
     * Storing Point in a vector Vector implementation
     *
     * property pointSize set/get the size of this vector to speed up access
     *          i fo not use push at mPoints this should be pretty fast
     * setPoint store x,y at a index in this vector
     * storePoint
     * fetchPoint
     */
    Vector<ConsoleVector> mPoints;



    // -------------------------------------------------------------------------
    PointStorageObject() {
        mVector = {0};
    }


    // -------------------------------------------------------------------------
    bool onAdd() override {
        populate();
        return Parent::onAdd();
    }
    // -------------------------------------------------------------------------
    void onRemove() override {
        if (mFnParams) mFnParams->deleteObject();
        Parent::onRemove();
    }
    // -------------------------------------------------------------------------

    void setStorageSize(U32 size) {
        if ( size <= 1000000) {
            U32 oldSize = this->mPoints.size();
            this->mPoints.setSize(size);
            if (size > oldSize) {
                U32 newElements = size - oldSize;
                ConsoleVector* startOfNewData = this->mPoints.address() + oldSize;
                dMemset(startOfNewData, 0, newElements * sizeof(ConsoleVector));
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

    // -------------------------------------------------------------------------

    static void initPersistFields()
    {
        Parent::initPersistFields();

        addField("point", TypeVector,  Offset(mVector, PointStorageObject));
        addField("x",     TypeF32,     Offset(mVector.points[0], PointStorageObject));
        addField("y",     TypeF32,     Offset(mVector.points[1], PointStorageObject));
        addField("z",     TypeF32,     Offset(mVector.points[2], PointStorageObject));
        addField("w",     TypeF32,     Offset(mVector.points[3], PointStorageObject));

        // Rectangle aliases
        addField("width",     TypeF32,     Offset(mVector.points[2], PointStorageObject),  "alias for z");
        addField("height",    TypeF32,     Offset(mVector.points[3], PointStorageObject), "alias for w - yes w.");

        // Color aliases
        addField("r",     TypeF32,     Offset(mVector.points[0], PointStorageObject), "alias for x");
        addField("g",     TypeF32,     Offset(mVector.points[1], PointStorageObject), "alias for y");
        addField("b",     TypeF32,     Offset(mVector.points[2], PointStorageObject), "alias for z");
        addField("a",     TypeF32,     Offset(mVector.points[3], PointStorageObject), "alias for w");

        // ----

        addProtectedField("storageSize", TypeU32, 0, &_setStorageSize,&_getStorageSize, "Set the storage size (how many points we can work with) Max:1000000.");


    }

    // -------------------------------------------------------------------------
    void setPos(F32 x, F32 y, F32 z, F32 w) {
        mVector.points[0] = x;
        mVector.points[1] = y;
        mVector.points[2] = z;
        mVector.points[3] = w;
    }

    // -------------------------------------------------------------------------
    void setPos(const ConsoleVector& vec4) {
        this->mVector = vec4;
    }
    // -------------------------------------------------------------------------
    // **** direct local var access !!!! - i ignore fails here ...***
    void getPosByReference(const char* varX,const char* varY,const char* varZ = nullptr,const char* varW = nullptr) {
        ElfScript::setLocalFloat(varX, mVector.points[0]);
        ElfScript::setLocalFloat(varY, mVector.points[1]);
        if (varZ) ElfScript::setLocalFloat(varZ, mVector.points[2]);
        if (varW) ElfScript::setLocalFloat(varW, mVector.points[3]);
    }
    // **** direct local var access for points !!!! - i ignore fails here ...***
    bool getPointByReference(U32 index, const char* varX,const char* varY,const char* varZ = nullptr,const char* varW = nullptr) {
        if ( index >= this->mPoints.size()) return false;
        ElfScript::setLocalFloat(varX, this->mPoints[index].points[0]);
        ElfScript::setLocalFloat(varY, this->mPoints[index].points[1]);
        if (varZ) ElfScript::setLocalFloat(varZ, this->mPoints[index].points[2]);
        if (varW) ElfScript::setLocalFloat(varW, this->mPoints[index].points[3]);
        return true;
    }
    // **** direct local var access for points !!!! - i ignore fails here ...***
    bool setPointByReference(U32 index, const char* varX,const char* varY,const char* varZ = nullptr,const char* varW = nullptr) {
        if ( index >= this->mPoints.size()) return false;
        this->mPoints[index].points[0] = ElfScript::getLocalFloat(varX);
        this->mPoints[index].points[1] = ElfScript::getLocalFloat(varY);
        if (varZ) this->mPoints[index].points[2] = ElfScript::getLocalFloat(varZ);
        if (varW) this->mPoints[index].points[3] = ElfScript::getLocalFloat(varW);
        return true;
    }

#ifdef ENABLE_CONSOLE_VECTOR
    // fast fetch !!
    // **** direct local var access for ConsoleVector!!!! - i ignore fails here ...***
    bool getPointVecByReference(U32 index, const char* vecVar) {
        if ( index >= this->mPoints.size()) return false;
        ElfScript::setLocalVector(vecVar, this->mPoints[index]);
        return true;
    }
    // **** direct local var access for ConsoleVector !!!! - i ignore fails here ...***
    bool setPointVecByReference(U32 index,  const char* vecVar) {
        if ( index >= this->mPoints.size()) return false;
        this->mPoints[index] = ElfScript::getLocalVector(vecVar);
        return true;
    }
#endif
    // -------------------------------------------------------------------------
    void write(Stream &stream, U32 tabStop, U32 flags) override {
        // Parent::write >>>>>>>>>>>>>>>>>>>>>>>>>>
        if( !getCanSave() && !( flags & IgnoreCanSave ) )
            return;

        // Only output selected objects if they want that.
        if((flags & SelectedOnly) && !isSelected())
            return;

        stream.writeTabs(tabStop);
        char buffer[1024];
        dSprintf(buffer, sizeof(buffer), "new %s(%s) {\r\n", getClassName(), getName() && !(flags & NoName) ? getName() : "");
        stream.write(dStrlen(buffer), buffer);
        writeFields(stream, tabStop + 1);

        // <<<<<<<<<<<<<<<<<<<<<<<< Parent::write

        S32 count = this->mPoints.size();
        dSprintf(buffer, sizeof(buffer), "TypeS32 _populate = %d;\r\n", count); //magic populate ^^
        stream.writeTabs(tabStop);
            stream.write(dStrlen(buffer), buffer);
        for (S32 i = 0; i < count; i++) {
            ConsoleVector vec4 = this->mPoints[i];
            dSprintf(buffer, sizeof(buffer), "_p[%d] = { %g, %g, %g, %g};\r\n",i, vec4.points[0], vec4.points[1], vec4.points[2], vec4.points[3] );
            stream.writeTabs(tabStop);
            stream.write(dStrlen(buffer), buffer);
        }

        stream.writeTabs(tabStop);
        stream.write(4, "};\r\n");
    }

    // -------------------------------------------------------------------------
    // set the point in the Point Storage at index by Vector (String)
    bool setPointVec( U32 index, String strVector ) {
        if ( index >= this->mPoints.size()) return false;
        ConsoleVector vec4;
        dSscanf(strVector.c_str(), "%g %g %g %g",&vec4.points[0], &vec4.points[1], &vec4.points[2], &vec4.points[3]);
        this->mPoints[index] = vec4;
        return true;
    }

    // -------------------------------------------------------------------------
    // onAdd we check if we need to populate ....
    void populate() {
        bool test = false;

        if (test) {
            Con::printSeparator();
            Con::printf(" populate [id:%d] >>>>", this->getId());
        }

        if (this->mPoints.size() == 0) {
            if (test) Con::warnf("populate with a empty pointStorage!");
            return;
        }

        SimFieldDictionary* dict = getFieldDictionary();
        if (!dict) {
            if (test) Con::infof(" populate [id:%d] no SimFieldDictionary found...", this->getId());
            return; //nothing here
        }

        S32 count =0;
        StringTableEntry fieldName = nullptr;
        SimFieldDictionary::Entry* entry = nullptr;
        fieldName = StringTable->insert( "_populate" );
        entry = dict->findDynamicField(fieldName);
        if (!entry) {
             if (test) Con::printf(" populate [id:%d] no _populate field found!", this->getId());
            // we have no populate exit here
            return;
        }
        count = entry->mValue.getInt();
        if (count != this->mPoints.size()) {
            Con::errorf("Populate [id:%d] failed size missmatch! (%d!=%d)", this->getId(), count, this->mPoints.size());
            return;
        }
        if (test) Con::printf("Populate says we should store %d points.", count);
        if (!test) dict->setFieldValue(fieldName, nullptr); //pop _populate

        char buffer[128];
        String vec;

        for (S32 index = 0; index < count; index++) {
            dSprintf(buffer, sizeof(buffer), "_p%d", index);
            fieldName = StringTable->insert( buffer ) ;
            entry = dict->findDynamicField(fieldName);
            if (!entry) {
                Con::errorf("populate [id:%d] : No point found at %d", this->getId(), index);
            } else {
                vec = entry->mValue.getString();
                if (test) Con::printf("populate [id:%d] : _p%d = %s", this->getId(), index, vec.c_str());
                this->setPointVec(index, vec);
                if (!test) dict->setFieldValue(fieldName, nullptr); // pop _pXX
            }
        }

        // getFieldDictionary()->findDynamicField( strFieldName )
        // if (!isField("_populate", ))


        if (test) {
            Con::printf(" <<<< populate");
            Con::printf(" <<<< populate [id:%d]", this->getId());
            Con::printSeparator();
        }
    }
    // -------------------------------------------------------------------------
    // Lambda Fn
    // -------------------------------------------------------------------------
    // "Map a Lambda function to PointStorage. This can be used by stepFn or runFn\n"
    // "The function must except a Variable (TypeVector) and return a Variable TypeVector\n"
    // "this will be used to modify the Point Storage"
    bool mapFn(ConsoleValue funcValue, U32 customParamCount) {

        mFn = ElfScript::Lambda::getFn(funcValue);
        if (!mFn) return false;
        mFnStep = 0;
        initFnParams(customParamCount);
        return true;
    }



    // -------------------------------------------------------------------------
    // init the FnParams array
    // Called:
    //      1. every step ?
    void initFnParams(U32 customParamCount) {
        if (!mFn) return;
        static Namespace::Entry* lastFN = nullptr;

        if (!mFnParams) {
            mFnParams = new Array();
            mFnParams->registerObject();
        };
        if (lastFN != mFn || mFnParams->mValues.size() < 2) {
            mFnParams->mValues.clear();
            mConsoleTempValue.setString(mFn->mFunctionName);
            mFnParams->mValues.push_back(mConsoleTempValue);
            mConsoleTempValue.setVector({0});
            mFnParams->mValues.push_back(mConsoleTempValue);
            mConsoleTempValue.reset();
            for (S32 i = 0; i < customParamCount; i++) {
                mFnParams->mValues.push_back(mConsoleTempValue);
            }
        }
    }

    // -------------------------------------------------------------------------
    bool setFnValues() {
        if ( mFnParams->mValues.size() < 2) return false;
        mFnParams->at(1).setVector(mPoints[mFnStep]);
        return true;
    }
    // -------------------------------------------------------------------------
    // much slower than the other in StarField test scripts :/
    bool runFn() {
        if (!mFn) return false;
        S32 size = mPoints.size();

        CodeBlock* funcModule = reinterpret_cast<CodeBlock*>(mFn->mModule);
        const U32 funcOffSet = mFn->mFunctionOffset;
        Namespace* funcNameSpace = mFn->mNamespace;
        StringTableEntry funcName = mFn->mFunctionName;
        StringTableEntry funcPackage = mFn->mPackage;
        U32 argC = static_cast<U32>(mFnParams->mValues.size());
        ConsoleValue* argV = mFnParams->mValues.address();

        for (mFnStep = 0; mFnStep< size; mFnStep++) {
            if (!setFnValues()) return false;


            if (ElfScript::Lambda::callFnTight(
                    funcModule, funcOffSet, funcNameSpace, funcName
                    , funcPackage, argC, argV
                    ,mConsoleTempValue)) {
                mPoints[mFnStep] = mConsoleTempValue.getVector();
            } else {
                mFnStep = 0;
                return false;
            }
        } //for

        mFnStep = 0;
        return true;
    }
    // -------------------------------------------------------------------------
    bool stepFn() {
        if (!mFn) return false;
        if (!setFnValues()) return false;
        if (!ElfScript::Lambda::callFn(mFn,mFnParams,mConsoleTempValue, true )) return 0;
        mPoints[mFnStep] = mConsoleTempValue.getVector();

        mFnStep++;
        if (mFnStep >= mPoints.size()) mFnStep = 0;
        return true;
    }
    // -------------------------------------------------------------------------
    // ------------ EXPERIMENTAL ------------ EXPERIMENTAL ---------------------
    // -------------------------------------------------------------------------


    // -------------------------------------------------------------------------
    // this is hardcore running on global scope with a exchange variable for out ConsoleVector
    bool mapInjectFn(ConsoleValue funcValue) {

        mFn = ElfScript::Lambda::getFn(funcValue);
        if (!mFn) return false;
        mFnStep = 0;
        return true;
    }


    // -------------------------------------------------------------------------
    // This is very cool directly using TorqueScript CodeBock to inject
    // params
    //
    // It's fast because we only push/pop the Frame once and have out own param setup :)
    //
    // What it does:
    //
    // 1. initalize params and loopup the
    //    regCount == count of parameters of the Lambda function
    //
    // 2. push an Frame once
    //
    // 3. inject params which does not change in the loop reserve and
    //    setup the first register for our Vector and set the
    //
    // 4. Loop:
    //   - set ConsoleVector register
    //   - call the function with Frame:  Con::LamdaCallInjectedFrame_ID
    //   - use the function result to update the current ConsoleVector
    //     If no valid result is returned it write back the data from the
    //     first register.
    //
    // 5. Finished we now to pop the Frame.
    //
    bool runInjectFn(U32 injectArgC, ConsoleValue* injectArgV) {
        if (!mFn || !mFn->mModule) return false;
        S32 size = mPoints.size();

        CodeBlock* funcModule = reinterpret_cast<CodeBlock*>(mFn->mModule);
        const U32 funcOffSet = mFn->mFunctionOffset;
        Namespace* funcNameSpace = mFn->mNamespace;
        StringTableEntry funcName = mFn->mFunctionName;
        StringTableEntry funcPackage = mFn->mPackage;
        U32 argC = 0;
        ConsoleValue* argV = nullptr;

        // hardcore inject !!!
        U32* code = funcModule->code;
        U32 regCount = code[funcOffSet + 2 + 7];
        // count of parameters defined in lambda
        U32 headerArgc = code[funcOffSet + 2 + 6];
        if (headerArgc == 0) {
              Con::errorf("We need at least one parameter for our vector!");
              return false;
        }

        // pushframe every iteration is slow so I push it once
        Script::gEvalState.pushFrame(NULL, NULL, regCount);
        // setup argument
        U32 vecRegister = code[funcOffSet + 10 + 0]; // Index 0 for %vec
        Script::gEvalState.currentRegisterArray->values[vecRegister].type = cvVector;



        // loop the parameters from ConsoleMethod starting at 2
        for (U32 i = 0; i < injectArgC; i++) {
            U32 argIndexInLambda = i + 1; // first is reserved for a ConsoleVector

            // overflow ?
            if (argIndexInLambda >= headerArgc) break;

            // fetch the register and go
            U32 targetRegister = code[funcOffSet + 10 + argIndexInLambda];
            Script::gEvalState.currentRegisterArray->values[targetRegister] = injectArgV[i];
        }

        Script::gEvalState.currentRegisterArray->values[vecRegister].type = cvVector;

        // Loop
        for (mFnStep = 0; mFnStep < size; mFnStep++) {
            // write our points
            Script::gEvalState.currentRegisterArray->values[vecRegister].v = mPoints[mFnStep];

            // // mFnVectorStackPrt->v = mPoints[mFnStep];
            const Con::EvalResult evalRes = funcModule->exec(
                funcOffSet,
                funcName,
                funcNameSpace,
                argC, argV,
                false, funcPackage,
                Con::LamdaCallInjectedFrame_ID
            );


            if (evalRes.valid) {

                if (evalRes.value.type == cvVector) mPoints[mFnStep] = evalRes.value.v;
                else  mPoints[mFnStep] = Script::gEvalState.currentRegisterArray->values[vecRegister].v;
                // // else mPoints[mFnStep] = mFnVectorStackPrt->v;
            } else {
                Script::gEvalState.popFrame();
                return false;
            }

        } //for
        Script::gEvalState.popFrame();
        mFnStep = 0;
        return true;
    }




};

IMPLEMENT_CONOBJECT(PointStorageObject);

// ---------- get/set Vector String ----------
DefineEngineMethod(PointStorageObject, getPosVec, ConsoleVector, (), , "get the position as Vector ") {
    return object->mVector;
}
DefineEngineMethod(PointStorageObject, setPosVec, void, (ConsoleVector vector), , "set the position by Vector (String)") {
       object->mVector = vector;
}


// ---------- set Pos by float's ----------
DefineEngineMethod(PointStorageObject, setPos, void, (F32 x, F32 y, F32 z, F32 w),(0.f,0.f) ,
                   "Set position by single values") {
    object->setPos(x,y,z,w);
}
DefineEngineMethod(PointStorageObject, normalizeXZ, void, (), ,
                   "normalize the current position") {
    normalizeXY(object->mVector.points[0],object->mVector.points[1]);
}
DefineEngineMethod(PointStorageObject, getLen, F32, (), ,
                   "len of current position") {
    return lengthXY( object->mVector.points[0], object->mVector.points[1]);
}
// -------------------------------------
// ---------- mPoints storage ----------
DefineEngineMethod(PointStorageObject, setPoint, bool, (U32 index, F32 x, F32 y, F32 z, F32 w),(0.f, 0.f) ,
            "Set a  point at index in the point storage.") {
    if ( index >= object->mPoints.size()) return false;
    object->mPoints[index] = { x, y, z, w};
    return true;
}
DefineEngineMethod(PointStorageObject, setPoint3, bool, (U32 index, F32 x, F32 y, F32 z), ,
                   "Set a  point at index in the point storage.") {
    if ( index >= object->mPoints.size()) return false;
    object->mPoints[index].points[0] = x;
    object->mPoints[index].points[1] = y;
    object->mPoints[index].points[2] = z;
    return true;
}
DefineEngineMethod(PointStorageObject, setPoint2, bool, (U32 index, F32 x, F32 y), ,
            "Set a  point at index in the point storage.") {
    if ( index >= object->mPoints.size()) return false;
    object->mPoints[index].points[0] = x;
    object->mPoints[index].points[1] = y;
    return true;
}


DefineEngineMethod(PointStorageObject, getPointVec, ConsoleVector, (U32 index),
                   , "get the point from the point storage at index as Vector (String)") {
    if ( index >= object->mPoints.size()) return {0};
    return object->mPoints[index];
}
DefineEngineMethod(PointStorageObject, setPointVec, bool, ( U32 index, ConsoleVector vec4), ,
                   "set the point in the Point Storage at index by Vector (String)") {
    if ( index >= object->mPoints.size()) return false;

    object->mPoints[index] = vec4;
    return true;
}


DefineEngineMethod(PointStorageObject, getPointX, F32, (U32 index),
                   , "get the point.points[0] from the point storage at index as Vector (String)") {
    if ( index >= object->mPoints.size()) return 0.f;
    return (object->mPoints[index].points[0]);
}
DefineEngineMethod(PointStorageObject, getPointY, F32, (U32 index),
                   , "get the point.points[0] from the point storage at index as Vector (String)") {
    if ( index >= object->mPoints.size()) return 0.f;
    return (object->mPoints[index].points[1]);
}
DefineEngineMethod(PointStorageObject, getPointZ, F32, (U32 index),
                   , "get the point.points[2] from the point storage at index as Vector (String)") {
    if ( index >= object->mPoints.size()) return 0.f;
    return (object->mPoints[index].points[2]);
}
DefineEngineMethod(PointStorageObject, getPointW, F32, (U32 index),
                   , "get the point.points[3] from the point storage at index as Vector (String)") {
    if ( index >= object->mPoints.size()) return 0.f;
    return (object->mPoints[index].points[3]);
}
DefineEngineMethod(PointStorageObject, setPointX, bool, (U32 index, F32 value),
                   , "set the point.points[0] from the point storage at index as Vector (String)") {
    if ( index >= object->mPoints.size()) return false;
    object->mPoints[index].points[0] = value;
    return true;
}
DefineEngineMethod(PointStorageObject, setPointY, bool, (U32 index, F32 value),
                   , "set the point.points[1] from the point storage at index as Vector (String)") {
    if ( index >= object->mPoints.size()) return false;
    object->mPoints[index].points[1] = value;
    return true;
}
DefineEngineMethod(PointStorageObject, setPointZ, bool, (U32 index, F32 value),
                   , "set the point.points[2] from the point storage at index as Vector (String)") {
    if ( index >= object->mPoints.size()) return false;
    object->mPoints[index].points[2] = value;
    return true;
}
DefineEngineMethod(PointStorageObject, setPointW, bool, (U32 index, F32 value),
                   , "set the point.points[2] from the point storage at index as Vector (String)") {
    if ( index >= object->mPoints.size()) return false;
    object->mPoints[index].points[3] = value;
    return true;
}

// ---------- mPoints storage from/to objects position ----------
DefineEngineMethod(PointStorageObject, storePoint, bool, (U32 index), ,
                   "store the current values x,y,z,w, to the point storage") {
    if ( index >= object->mPoints.size()) return false;

    object->mPoints[index] = object->mVector;

    return true;
}

DefineEngineMethod(PointStorageObject, fetchPoint, bool, (U32 index), ,
                   "fetch the point from the point storage at index to the current values x,y,z,w") {
    if ( index >= object->mPoints.size()) return false;

    object->setPos( object->mPoints[index] );

    return true;
}




DefineEngineMethod(PointStorageObject, mapFn, SimObjectId, (ConsoleValue funcValue, U32 customParamCount),,
    "Map a Lambda function to PointStorage. This can be used by stepFn or runFn\n"
    "The function must except a Variable (TypeVector) and return a Variable TypeVector\n"
    "this will be used to modify the Point Storage\n"
    "Custom param count is the count of the parameter you want to set.\n"
    "It will return the ID of the param Array if you set customParamCount\n"
    "Your custom params start at 2..1+customParamCount\n"
    "Max 32 custom params are allowed\n"
) {
    if (customParamCount > 32) {
        Con::errorf("mapFn: Only up to 32 parameters allowed!");
        return 0;
    }
    if (object->mapFn(funcValue, customParamCount) && object->mFnParams) {
        Con::debugf("It will return the ID of the param Array if you set customParamCount.");
        if (customParamCount > 0) {
            Con::debugf("Your custom params start at 2  and end at %d", 1 + customParamCount);
            Con::debugf("Do not push new fields or delete the first 2! Use .set(2,%value).", 1 + customParamCount);
            return object->mFnParams->getId();
        } else {
            return 0;
        }
    }
    return 0;
}

// TODO extraParams
DefineEngineMethod(PointStorageObject, runFn, bool, (),,
                   "run the mapped function"
) {
    return object->runFn();
}

// TODO extraParams
DefineEngineMethod(PointStorageObject, stepFn, bool, (),,
                   "run the mapped function"
) {
    return object->stepFn();
}



DefineEngineMethod(PointStorageObject, mapInjectFn, bool, (ConsoleValue funcValue),,
                   " -------------------------  EXPERIMENTAL -------------------------------- \n"
                   "Map a Lambda function to PointStorage. This can be used by runInjectFn\n"
                   "Fist paramter must be the %vec variable like fn(%vec, ...) \n"
                   "the vectorVariableName must be initialized and used for our ConsoleVector\n"
                   "the lambda function does not need to return a value - if we have none the vectorVariable will be written back\n"
                   "to update our data"
) {
    return object->mapInjectFn(funcValue);
}



ConsoleMethod(PointStorageObject, runInjectFn, bool, 2, 0, "Run injected Console function with parameters") {
    // argv[0] ==> function name << runInjectFn
    // argv[1] ==> object id of PointStorageObject
    // argv[2] ==> here we go .....
    //                       less count, move pointer forward
    return object->runInjectFn(argc - 2, argv + 2);
}

