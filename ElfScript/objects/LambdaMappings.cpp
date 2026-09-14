//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// Lambda
//-----------------------------------------------------------------------------
#include "LambdaMappings.h"
#include "console/localVar.h"

namespace ElfScript::Lambda {




} // namespace




//FIXME move to localVar... or somewhere else or best i hack this into the VM
DefineEngineFunction( getVarPtr, ConsoleValue, (const char * variableName),,"") {
    ConsoleValue* stack = ElfScript::getLocalVariable(variableName);
    if (stack) ElfScript::Lambda::muleValue.setPointer(stack, cvPointer);
    else ElfScript::Lambda::muleValue.setString("varPtr failed to get pointer!!");
    return ElfScript::Lambda::muleValue;
}
DefineEngineFunction( getValueByPtr, ConsoleValue, (ConsoleValue PtrValue),,"") {
    ElfScript::Lambda::muleValue.setString("valueByPtr: FAILED to get value!");
    if (PtrValue.type != cvPointer ) return ElfScript::Lambda::muleValue;
    void* rawPtr = PtrValue.getPointer();
    if ( !rawPtr ) return ElfScript::Lambda::muleValue;
    // // entry = reinterpret_cast<Namespace::Entry*>(this->dataPtr)
    ConsoleValue* value = reinterpret_cast<ConsoleValue*>(rawPtr);
    if ( !value ) return ElfScript::Lambda::muleValue;

    ElfScript::Lambda::muleValue = *value;
    return ElfScript::Lambda::muleValue;

}
DefineEngineFunction( setValueByPtr, bool, (ConsoleValue PtrValue, ConsoleValue setterValue),,"") {
    if (PtrValue.type != cvPointer ) return false;
    void* rawPtr = PtrValue.getPointer();
    if ( !rawPtr ) return false;
    // // entry = reinterpret_cast<Namespace::Entry*>(this->dataPtr)
    ConsoleValue* value = reinterpret_cast<ConsoleValue*>(rawPtr);
    if ( !value ) return false;

    *value = setterValue;
    return true;
}


DefineEngineFunction(callLambdaTest, ConsoleValue, (ConsoleValue lambdaValue, Array* params ),,"") {
    ConsoleValue result;

    if (!ElfScript::Lambda::callValue(lambdaValue, params, result)) {
        Con::errorf("callLambdaTest Failed!!");
    }
    return result;
}


DefineEngineFunction(callLambdaTest2, ConsoleValue, (ConsoleValue lambdaValue),,"") {
    ConsoleValue result;

    if (!ElfScript::Lambda::callValueWithOutArgs(lambdaValue, result)) {
        Con::errorf("callLambdaTest2 Failed!!");
    }
    return result;
}
