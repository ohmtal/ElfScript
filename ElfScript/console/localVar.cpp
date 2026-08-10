
Rejoicing too soon << does not work in function

//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------

#include "console/engineAPI.h"
#include <console/consoleTypes.h>
#include <console/consoleInternal.h>
#include <console/torquescript/ast.h>
#include <console/torquescript/compiler.h>


extern  FuncVars* getFuncVars(S32 lineNumber);
//-----------------------------------------------------------------------------
namespace ElfScript {

const char* getConsoleValueTypeName(S32 type) {
    switch (type) {
        case ConsoleValueType::cvFloat:   return "F64";
        case ConsoleValueType::cvInteger: return "S64";
        case ConsoleValueType::cvString:  return "String";
        case ConsoleValueType::cvSTEntry: return "Empty";
        default: return "other";
    }
}
//-----------------------------------------------------------------------------
bool getLocalVariable(const char* variableName, ConsoleValue*& stack, S32& reg){
    if (!variableName || variableName[0] != '%') return false;

    reg = getFuncVars(0)->lookupExising(StringTable->insert(variableName));
    if (reg < 0) return false;
    stack = &Script::gEvalState.currentRegisterArray->values[reg];

    return true;
}
ConsoleValue* getLocalVariable(const char* variableName ){
    ConsoleValue* stack = nullptr; S32 reg = -1;
    if (!getLocalVariable(variableName, stack, reg)) {
        return nullptr;
    }
    return stack;
}

//-----------------------------------------------------------------------------
bool setLocalFloat(const char* variableName, F64 value) {
    ConsoleValue* stack = getLocalVariable(variableName);
    if (stack == nullptr) return false;
    stack->setFloat(value);
    return true;
}
//-----------------------------------------------------------------------------
bool setLocalInt(const char* variableName, S64 value) {
    ConsoleValue* stack = getLocalVariable(variableName);
    if (stack == nullptr) return false;
    stack->setInt(value);
    return true;
}
//-----------------------------------------------------------------------------
bool setLocalString(const char* variableName, const char* value) {
    ConsoleValue* stack = getLocalVariable(variableName);
    if (stack == nullptr) return false;
    stack->setString(value);
    return true;
}
//-----------------------------------------------------------------------------
F64 getLocalFloat(const char* variableName) {
    ConsoleValue* stack = getLocalVariable(variableName);
    if (stack == nullptr) return 0.f;
    return stack->getFloat();
}
//-----------------------------------------------------------------------------
S64 getLocalInt(const char* variableName) {
    ConsoleValue* stack = getLocalVariable(variableName);
    if (stack == nullptr) return 0;
    return stack->getInt();
}
//-----------------------------------------------------------------------------
const char* getLocalString(const char* variableName) {
    ConsoleValue* stack = getLocalVariable(variableName);
    if (stack == nullptr) return "";
    return stack->getString();
}
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
DefineEngineFunction(varDump, void, (const char* variableName), , "local variable dump.only valid in the variables scope")
{
    Con::printSeparator();

    ConsoleValue* localVal = nullptr;S32 reg = -1;
    bool fail = !ElfScript::getLocalVariable(variableName, localVal, reg) || localVal == nullptr;
    if (fail) {
        Con::printf("varDump %s not found or not a local variable:", variableName);
        return ;
    }

    Con::printf("Variable: %10s [reg:%2d] [type:%8s] [value:%20s]"
    , variableName, reg, getConsoleValueTypeName(localVal->type), localVal->getString());

    // Con::printSeparator();
}

} //namespace ElfScript
