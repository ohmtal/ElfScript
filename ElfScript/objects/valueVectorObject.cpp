//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// NOTE: THIS is only really good if: ENABLE_CONSOLE_VALUE_CALLBACK is enabled
//-----------------------------------------------------------------------------
#include "valueVectorObject.h"
#include "console/console.h"
#include <console/consoleTypes.h>

// ----------------------------------------------------------------------------
IMPLEMENT_CONOBJECT(ValueVector);
// ----------------------------------------------------------------------------
DefineEngineMethod(ValueVector, at, ConsoleValue, (S32 index), , "fetch a value") {
    if (!object->isIndexValid(index)) return ConsoleValue();
    return object->mValues[index];
}

DefineEngineMethod(ValueVector, first, ConsoleValue, (), , "fetch first ") {
    if (!object->isIndexValid(0)) return ConsoleValue();
    return object->mValues[0];
}
DefineEngineMethod(ValueVector, last, ConsoleValue, (), , "fetch last ") {
    S32 size = object->mValues.size();
    if (size == 0) return ConsoleValue();
    return object->mValues[size - 1];
}

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
