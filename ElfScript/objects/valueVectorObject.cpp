//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// Experimental
//-----------------------------------------------------------------------------
#include "valueVectorObject.h"
#include <console/consoleTypes.h>


// ----------------------------------------------------------------------------
ConsoleType(TypeValue, TypeValue, ConsoleValue, "")
ImplementConsoleTypeCasters( TypeValue, ConsoleValue )
IMPLEMENT_STRUCT( ConsoleValue, TypeValue,,
                  "the powerfull console vale" )

FIELD( f, floatValue, 1, "Red channel value." )
FIELD( i, integerValue, 1, "Green channel value." )

END_IMPLEMENT_STRUCT;

ConsoleGetType( TypeValue )
{
    ConsoleValue *cv = (ConsoleValue *) dptr;
    return cv->getString();
}

ConsoleSetType( TypeValue )
{
    if(argc == 1)
        ((ConsoleValue *)dptr)->setString(argv[0]);
    else
        Con::printf("failed to set Value!");
}
// ----------------------------------------------------------------------------
IMPLEMENT_CONOBJECT(ValueVector);
// ----------------------------------------------------------------------------
// TODO:
// - first a type
// - last as type
// ------------------- at as type ---------------------------------------------
// DefineEngineMethod(ValueVector, at, ConsoleValue, (S32 index), , "fetch a float") {
//     if (!object->isIndexValid(index)) return ConsoleValue();
//     return object->mValues[index];
// }
// DefineEngineMethod(ValueVector, atFptr, F64*, (S32 index), , "fetch a float pointer") {
//     if (!object->isIndexValid(index)) return nullptr;
//     return &object->mValues[index].f;
// }

DefineEngineMethod(ValueVector, get, ConsoleValue, (S32 index), , "fetch a float") {
    if (!object->isIndexValid(index)) return ConsoleValue();
    return object->mValues[index];
}

DefineEngineMethod(ValueVector, getF, F64, (S32 index), , "fetch a float") {
    if (!object->isIndexValid(index)) return 0.0;
    return object->mValues[index].getFloat();
}

DefineEngineMethod(ValueVector, getI, S64, (S32 index), , "fetch a int") {
    if (!object->isIndexValid(index)) return 0;
    return object->mValues[index].getInt();
}

DefineEngineMethod(ValueVector, getS, const char* , (S32 index), , "fetch a string") {
    if (!object->isIndexValid(index)) return "";
    Con::printf("String is: %s", object->mValues[index].getString());

    return object->mValues[index].getString();
}

#ifdef ENABLE_CONSOLE_VECTOR
DefineEngineMethod(ValueVector, getV, ConsoleVector , (S32 index), , "fetch a Console 4 Point Vector") {
    if (!object->isIndexValid(index)) return {0};
    return object->mValues[index].getVector();
}
#endif
// // // ------------------- first as type ---------------------------------------------
// // DefineEngineMethod(ValueVector, firstF, F64, (), , "fetch first float") {
// //     if (!object->isIndexValid(0)) return 0.0;
// //     return object->mValues[0].getFloat();
// // }
// //
// // DefineEngineMethod(ValueVector, firstI, S64, (), , "fetch first int") {
// //     if (!object->isIndexValid(0)) return 0;
// //     return object->mValues[0].getInt();
// // }
// //
// // DefineEngineMethod(ValueVector, firstS, const char* , (), , "fetch fist string") {
// //     if (!object->isIndexValid(0)) return "";
// //     return object->mValues[0].getString();
// // }
// //
// // #ifdef ENABLE_CONSOLE_VECTOR
// // DefineEngineMethod(ValueVector, firstV, ConsoleVector , (), , "fetch first Console 4 Point Vector") {
// //     if (!object->isIndexValid(0)) return {0};
// //     return object->mValues[0].getVector();
// // }
// // #endif
// // // ------------------- last as type ---------------------------------------------
// // DefineEngineMethod(ValueVector, lastF, F64, (), , "fetch last float") {
// //     S32 size = object->mValues.size();
// //     if (size == 0) return 0.0;
// //     return object->mValues[size - 1].getFloat();
// // }
// //
// // DefineEngineMethod(ValueVector, lastI, S64, (), , "fetch last int") {
// //     S32 size = object->mValues.size();
// //     if (size == 0) return 0;
// //     return object->mValues[size - 1].getInt();
// // }
// //
// // DefineEngineMethod(ValueVector, lastS, const char * , (), , "fetch last string") {
// //     S32 size = object->mValues.size();
// //     if (size == 0) return "";
// //     return object->mValues[size - 1].getString();
// // }
// //
// // #ifdef ENABLE_CONSOLE_VECTOR
// // DefineEngineMethod(ValueVector, lastV, ConsoleVector , (), , "fetch last Console 4 Point Vector") {
// //     S32 size = object->mValues.size();
// //     if (size == 0) return {0};
// //     return object->mValues[ size - 1 ].getVector();
// // }
// // #endif
// -----------------------------------------------------------------------------
DefineEngineMethod(ValueVector, size, S32, (), , "get the size") {
    return object->mValues.size();
}

DefineEngineMethod(ValueVector, empty, void, (), , "empty the Vector") {
    object->mValues.empty();
}
// -----------------------------------------------------------------------------
DefineEngineMethod(ValueVector, push_back, void, (ConsoleValue value), , "push back a value") {
    object->mValues.push_back(value);
}

DefineEngineMethod(ValueVector, set, bool, (S32 index, ConsoleValue value), , "set a value at index") {
    if (!object->isIndexValid(index)) return false;
    object->mValues[index] = value;
    return true;
}


DefineEngineMethod(ValueVector, insert, bool, (S32 position,ConsoleValue value), , "insert a value at index") {
    if (!object->isIndexValid(position)) return false;
    object->mValues.insert(position, value);
    return true;
}
DefineEngineMethod(ValueVector, erase, bool, (S32 position), , "") {
    if (!object->isIndexValid(position)) return false;
    object->mValues.erase(position);
    return true;
}

DefineEngineMethod(ValueVector, pop_front, void, (), , "") {
    object->mValues.pop_front();
}

DefineEngineMethod(ValueVector, pop_back, void, (), , "") {
    object->mValues.pop_back();
}

// -----------------------------------------------------------------------------
DefineEngineMethod(ValueVector, list, void, (), , "List the values") {
    Con::printSeparator();
    for (S32 i = 0; i < object->mValues.size(); i++)
            Con::printf("#%04d %s",i, object->mValues[i].getString());
}
