
Rejoicing too soon << does not work in function

//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
#pragma once

class ConsoleValue;
namespace ElfScript {
    const char* getConsoleValueTypeName(S32 type);
    bool getLocalVariable(const char* variableName, ConsoleValue* stack, S32& reg);
    ConsoleValue* getLocalVariable(const char* variableName );

    bool setLocalFloat(const char* variableName, F64 value);
    bool setLocalInt(const char* variableName, S64 value);
    bool setLocalString(const char* variableName, const char* value);

    F64 getLocalFloat(const char* variableName);
    S64 getLocalInt(const char* variableName);
    const char* getLocalString(const char* variableName);
}
