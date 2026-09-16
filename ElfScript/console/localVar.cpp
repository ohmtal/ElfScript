//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// Local Variable (%) Power :D ... also added  global ($) but kept the nameing
//-----------------------------------------------------------------------------

#include "console/engineAPI.h"
#include <console/consoleTypes.h>
#include <console/consoleInternal.h>
#include <console/torquescript/ast.h>
#include <console/torquescript/compiler.h>
#include <core/strings/stringUnit.h>
#include "localVar.h"


extern  FuncVars gEvalFuncVars;
extern  FuncVars gGlobalScopeFuncVars;

//-----------------------------------------------------------------------------
namespace ElfScript {

    const char* getConsoleValueTypeName(S32 type, U32 subType) {
        switch (type) {
            case ConsoleValueType::cvFloat:   return "Float";
            case ConsoleValueType::cvInteger: return "Integer";
            // case ConsoleValueType::cvString:  return "String";
            case ConsoleValueType::cvSTEntry: return "String";
            case ConsoleValueType::cvConsoleValueType: return "Console";
            case ConsoleValueType::cvPointer:{
                switch (subType) {
                    case cvsLambda: return "Lambda";
                    case cvsVariable: return "VarPtr";
                    default: return "Pointer";
                }
            }
            #ifdef ENABLE_CONSOLE_VECTOR
            case ConsoleValueType::cvVector:  return "Vector";
            #endif
            default: return avar("type:%d", type);
        }
    }
    // -----------------------------------------------------------------------------
    inline FuncVars* _getFuncVars() {
        return Compiler::gIsEvalCompile ? &gEvalFuncVars : &gGlobalScopeFuncVars;
    }
    // -----------------------------------------------------------------------------
    S32 findLocalVarRegisterInCurrentScope(const char* variableName)  {
        // sanity
        if (!variableName || variableName[0] != Con::LocalVarTag) return -1;

        // check we are in a function
        Dictionary& stackFrame = Script::gEvalState.getCurrentFrame();
        if (stackFrame.scopeName && stackFrame.scopeNamespace ){
            StringTableEntry functionName = stackFrame.scopeName;
            StringTableEntry namespaceName = stackFrame.scopeNamespace->mName;

            StringTableEntry varToLookup = StringTable->insert(variableName);
            return ((CodeBlock*)stackFrame.module)->variableRegisterTable.lookup(namespaceName, functionName, varToLookup);
        }

        // 2. we should be in global scope
        return _getFuncVars()->lookupExising(StringTable->insert(variableName));

    }

    //-----------------------------------------------------------------------------
    //
    //  get a local or global variable ConsoleValue
    //  i also added global but keep the name getLocalVariable
    //
    bool getLocalVariable(const char* variableName, ConsoleValue*& stack, S32& reg){
        if (!variableName) return false;

        if (variableName[0] == Con::LocalVarTag) {
            reg = findLocalVarRegisterInCurrentScope(variableName);
            if (reg < 0) return false;
            stack = &Script::gEvalState.currentRegisterArray->values[reg];
            if (!stack ) return false;
            return true;
        }
        else if (variableName[0] == Con::ParentVarTag) {
            reg = _getFuncVars()->lookupExising(StringTable->insert( variableName ));
            if (reg < 0) return false;
            S32 stackNum = 0;
            Dictionary& stackFrame = Script::gEvalState.getCurrentFrame();
            if (!stackFrame.scopeName || !stackFrame.scopeNamespace ){
                stackNum = Script::gEvalState.getTopOfStack() - 1;
            } else {
                stackNum = Script::gEvalState.getTopOfStack() - 2;
            }
            if (stackNum < 0) {
                Con::errorf("Gee stacknum lower than 0!");
                return false;
            }
            stack =  &Script::gEvalState.localStack[stackNum].values[reg];
            if (!stack ) return false;
            return true;
        }
        else if (variableName[0] == Con::GlobalVarTag) {
            Dictionary::Entry *entry =Con::gGlobalVars.lookup(StringTable->insert(variableName));
            if (!entry) return false;
            stack = &entry->getValue();
            if (!stack ) return false;
            return true;
        }


        return false;
    }

    ConsoleValue* getLocalVariable(const char* variableName ){
        ConsoleValue* stack = nullptr; S32 reg = -1;
        if (!getLocalVariable(variableName, stack, reg)) {
            return nullptr;
        }
        return stack;
    }

    //-----------------------------------------------------------------------------
    //-----------------------------------------------------------------------------
    // Was a test - again - when do i learn it does not work with local :P
    bool CreateVar(const char* variableName, ConsoleValue*& stack)
    {
        if (!variableName ) return false;


        if (variableName[0] == Con::LocalVarTag) {

            // !!!!!!!!!!!!!!!!!!!!!!!!
            Con::errorf("---- ElfScript::CreateVar: Local variables can only be created at compile time! ----");
            return false;
            // !!!!!!!!!!!!!!!!!!!!!!!!

            S32 varRegister = -1;

            // check we are in a function
            Dictionary& stackFrame = Script::gEvalState.getCurrentFrame();
            if (stackFrame.scopeName && stackFrame.scopeNamespace ){
                StringTableEntry functionName = stackFrame.scopeName;
                StringTableEntry namespaceName = stackFrame.scopeNamespace->mName;

                StringTableEntry varToLookup = StringTable->insert(variableName);
                varRegister =  ((CodeBlock*)stackFrame.module)->variableRegisterTable.lookup(namespaceName, functionName, varToLookup);

                // does not exists try to add and lookup again
                if (varRegister < 0) {
                    ((CodeBlock*)stackFrame.module)->variableRegisterTable.add(functionName, namespaceName,  varToLookup);
                    varRegister =  ((CodeBlock*)stackFrame.module)->variableRegisterTable.lookup(namespaceName, functionName, varToLookup);
                }

            } else {
                // 2. we should be in global scope
                // return _getFuncVars()->lookupExising(StringTable->insert(variableName));

            }

            // check again
            if (varRegister < 0) return false;
            stack = &Script::gEvalState.currentRegisterArray->values[varRegister];
            if (!stack ) {
                Con::errorf("ElfScriot::CreateVar failed to create variable:%s", variableName);
                return false;
            }
            return true;


            // This is tricky
            return false;

        } else if (variableName[0] == Con::GlobalVarTag) {
            // This add does also check it exits !
            Dictionary::Entry *entry = Con::gGlobalVars.add(StringTable->insert(variableName));
            if (!entry) return false;
            stack = &entry->getValue();
            if (!stack ) return false;
            return true;
        }

        return false;
    }
    //-----------------------------------------------------------------------------
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
    #ifdef ENABLE_CONSOLE_VECTOR
    ConsoleVector getLocalVector(const char* variableName) {
        ConsoleValue* stack = getLocalVariable(variableName);
        if (stack == nullptr) return ConsoleVector{0};
        return stack->getVector();
    }
    //-----------------------------------------------------------------------------
    bool setLocalVector(const char* variableName, ConsoleVector& value) {
        ConsoleValue* stack = getLocalVariable(variableName);
        if (stack == nullptr) return false;
        stack->setVector(value);
        return true;
    }

    #endif
    // -------------------------------------------------------------------------
    //  ~~~~~~~~~ Dump and Debug .... ~~~~~~~~~~
    // -------------------------------------------------------------------------
    // -----------------------------------------------------------------------------
    void varDumpGobals(const char* variableName)
    {
        if (!variableName) return;

        if (variableName[0] != Con::GlobalVarTag) {
            Con::errorf("Sorry [%s] in not a global variable %s", variableName);
            return;
        }
        Dictionary::Entry *entry =Con::gGlobalVars.lookup(StringTable->insert(variableName));
        if (!entry) {
            Con::printf("%s not found.", variableName);
            return ;
        }

        ConsoleValue& localVal = entry->getValue();
        Con::printf(" %10s [type:%8s] [value:%20s]"
        , variableName, getConsoleValueTypeName(localVal.type, localVal.subType), localVal.getString());

    }
    // // -----------------------------------------------------------------------------
    void varDumpLocals(const char* variableName)
    {
        // sanity
        if (!variableName) return;

        if (variableName[0] != Con::LocalVarTag && variableName[0] != Con::ParentVarTag) {
            Con::errorf("Sorry [%s] in not a local variable %s", variableName);
            return;
        }
        ConsoleValue* localVal = nullptr;
        S32 reg = -1;

        if (!getLocalVariable(variableName, localVal, reg) || !localVal) {
            Con::printf("%s not found.", variableName);
            return ;
        }

        Con::printf(" %10s [type:%8s] [value:%20s] [reg:%2d] "
        , variableName, getConsoleValueTypeName(localVal->type, localVal->subType), localVal->getString(), reg);
    }
    // -----------------------------------------------------------------------------
    void varDumpDynamicField(const char* variableName) {
        ConsoleValue* cval = nullptr;
        cval = Con::getObjectDynamicFieldConsoleValue(variableName);
        if (cval) {
            Con::printf(" %20s [type:%8s] [value:%20s]"
            , variableName, getConsoleValueTypeName(cval->type, cval->subType), cval->getString());
        }

    }
    // -----------------------------------------------------------------------------
    void dumpAllGlobalVariables() {
        Dictionary::HashTableData* hashTable = Con::gGlobalVars.hashTable;
        if (!hashTable) return;
        Con::printf("       ------------------- Global Variables -------------------");

        for (S32 i = 0; i < hashTable->size; i++)
        {
            Dictionary::Entry *walk = hashTable->data[i];
            while (walk)
            {
                ConsoleValue& localVal = walk->getValue();
                Con::printf(" %30s [type:%8s] [value:%20s]"
                , walk->name, getConsoleValueTypeName(localVal.type, localVal.subType), localVal.getString());

                walk = walk->nextEntry;
            }
        }
    }
    // -----------------------------------------------------------------------------
    void dumpAllLocalVariables(bool includingGlobalScope = true) {
        // 1. gEvalFuncVars
        if (includingGlobalScope) {
            Con::printSeparator();
            Con::printf("       ------------------- GlobalScope -------------------");
            _getFuncVars()->listExising();
        }

        Con::printSeparator();
        Con::printf("       ------------------- LocalScope -------------------");
        CompilerLocalVariableToRegisterMappingTable* tbl = &Compiler::getFunctionVariableMappingTable();
        if (!tbl) {
            Con::errorf("no CompilerLocalVariableToRegisterMappingTable found ");
            return ;
        }

        for (auto& [funcName, maptbl] : tbl->localVarToRegister) {
            Con::printf("%s, count: %d ", funcName, maptbl.varList.size());
            for (S32 i = 0 ; i < maptbl.varList.size(); i++) {
                Con::printf("   - %s", maptbl.varList[i]);
                // varDump( maptbl.varList[i]);
            }
            // Con::printf("%s: reg:%d currentType: %d", key, val.reg ,(S32)val.currentType);
        }
        Con::printSeparator();
    }

    // -----------------------------------------------------------------------------
    void varDump(const char* variableName) {

        if (dStrstr(variableName, "."))  {
             ElfScript::varDumpDynamicField(variableName);
            return;
        }

        if (variableName[0] == Con::GlobalVarTag) {
            ElfScript::varDumpGobals(variableName);
            return;
        }

        ElfScript::varDumpLocals(variableName);
    }

} //namespace ElfScript
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
DefineEngineFunction( varDumpField, void, (const char* variableName), , "local/global variable dump. local only valid in the variables scope")
{
    if ( !variableName || variableName[0] == '\0') return;
    ElfScript::varDumpDynamicField(variableName);
}

DefineEngineFunction( value, const char * , (const char* variableName), , "local/global value")
{
    if ( !variableName || variableName[0] == '\0') return "";
   return(ElfScript::getLocalString(variableName)); //does both local and global

}

DefineEngineFunction( varDump, void, (const char* variableName), , "local/global variable dump. local only valid in the variables scope")
{
    ElfScript::varDump(variableName);

}
// -----------------------------------------------------------------------------
DefineEngineFunction( dumpLocals, void, (bool allLocals, bool withGlobals),(true, true),"dump local and global  variables") {
    ElfScript:: dumpAllLocalVariables(allLocals);
    if (withGlobals) ElfScript:: dumpAllGlobalVariables();
}
// -----------------------------------------------------------------------------

DefineEngineFunction(whereAmI, void,(),,"look up the function where i'am called from") {
    Dictionary& stackFrame = Script::gEvalState.getCurrentFrame();
    if (!stackFrame.scopeName || !stackFrame.scopeNamespace ){
        Con::printf("**WhereAmI** Global scope i guess ...");
        return;
    }
    StringTableEntry functionName = stackFrame.scopeName;
    StringTableEntry namespaceName = stackFrame.scopeNamespace->mName;

    // Con::printSeparator();
    Con::printf("**WhereAmI** you are in function:  [%s::%s] ",
                namespaceName ? namespaceName : ""
                , functionName ? functionName :"unknown");

}
// -----------------------------------------------------------------------------
// see also toObject (previous toArray)
DefineEngineFunction(explodeGlobal,S32, (const char* varName, bool debugOut),(false),
                     "WARNING works only with Global Variable '$' !!!!!!\n"
                     "Convert an string content of varname to an set typed of variables with varName[0..count] fields\n"
                     "tab separated (default) or space separated"
                     "@return the count of variables"
) {

    const char* text = ElfScript::getLocalString(varName);

    if (!text || text[0] == '\0') {
        // Con::errorf("Variable %s is empty and cant be converted to array", varName);
        return 0;
    }

    const char* set = "\t\n";
    // we try to separate by tabs to keep stuff like "Hello World" TAB "tom"
    U32 count =  StringUnit::getUnitCount( text, "\t\n" );
    // we only got no or one token - switch to space / tab separated
    if (count < 2) {
        count =  StringUnit::getUnitCount( text, " \t\n" );
        set = " \t\n";
    }

    // nothing - is empty ?
    if (count < 1) {
        Con::errorf("Variable %s is empty and cant be converted to object", varName);
        return 0;
    }
    char buff[256];
    StringTableEntry fieldNameEntry = nullptr;
    for (U32 i = 0; i < count; i++) {
        const char * token = StringUnit::getUnit( text, i, set );

        dSprintf(buff,256,"%s%d",varName, i); //mhh or as array ?
        fieldNameEntry = StringTable->insert( buff );

        // // Script::gEvalState.setCurVarNameCreate(fieldNameEntry);

        ConsoleValue* stack = nullptr;
        ElfScript::CreateVar(fieldNameEntry, stack);
        if (!stack) return 0;
        if (isInt(token)) stack->setInt(dAtol(token));
        else if (isFloat(token)) stack->setFloat(dAtod(token));
        else stack->setString(token);

        if (debugOut) ElfScript::varDump(fieldNameEntry);
    }
    // clean original content:
    ElfScript::setLocalString(varName, "");



    return count;
}

// =============================================================================
DefineEngineFunction( getVarPtr, ConsoleValue, (const char * variableName),,"") {
    ConsoleValue* stack = ElfScript::getLocalVariable(variableName);
    ConsoleValue myValue;
    if (stack) myValue.setPointer(stack, cvsVariable);
    else myValue.setString("varPtr failed to get pointer!!");
    return myValue;
}
DefineEngineFunction( getValueByPtr, ConsoleValue, (ConsoleValue PtrValue),,"") {
     ConsoleValue myValue;
    myValue.setString("valueByPtr: FAILED to get value!");
    if (PtrValue.type != cvPointer || PtrValue.subType != cvsVariable) return myValue;
    void* rawPtr = PtrValue.getPointer();
    if ( !rawPtr ) return myValue;
    ConsoleValue* value = reinterpret_cast<ConsoleValue*>(rawPtr);
    if ( !value ) return myValue;

    myValue = *value;
    return myValue;

}
DefineEngineFunction( setValueByPtr, bool, (ConsoleValue PtrValue, ConsoleValue setterValue),,"") {
    if (PtrValue.type != cvPointer ) return false;
    void* rawPtr = PtrValue.getPointer();
    if ( !rawPtr ) return false;
    ConsoleValue* value = reinterpret_cast<ConsoleValue*>(rawPtr);
    if ( !value ) return false;

    *value = setterValue;
    return true;
}

// =============================================================================
#ifdef TORQUE_DEBUG
// DefineEngineFunction(LIST_LOCAL_STACKS, void, (),, "debug: list local stacks") {
//     Con::printSeparator();
//     Con::printf("STACK COUNT: %d", Script::gEvalState.localStack.size() );
//     for (S32 i =0; i < Script::gEvalState.localStack.size(); i++) {
//         S32 j = 0;
//         Script::gEvalState.localStack[i].values[j];
//         // while (dynamic_cast<ConsoleValue>();
//     }
// }



DefineEngineFunction(TEST_VAR_CREATE,void,(),,"must be test inside and outside a function!") {
    ConsoleValue* stack = nullptr;
    Con::printSeparator();
    if (ElfScript::CreateVar("$globalVarTest", stack)) {
        stack->setString("GLOBAL: I was here !");
        ElfScript::varDump("$globalVarTest");
    } else {
    }
    if (ElfScript::CreateVar("%localVarTest", stack)) {
        stack->setString("LOCAL: I was here !");
        ElfScript::varDump("%localVarTest");
    } else {
        Con::errorf("- FAILED TO CREATE LOCAL!");
    }
    Con::printSeparator();
}


DefineEngineFunction( testLocalGlobal, void, (const char * variableName),,"") {
     S32 varRegister = ElfScript::_getFuncVars()->lookupExising(StringTable->insert( variableName ));
     Con::printf("REGISTER FOR %s is %d - LOCALSTACK SIZE:%d STACKDEPTH: %d", variableName, varRegister,
                 Script::gEvalState.localStack.size(), Script::gEvalState.getTopOfStack());
     // hardcore validations later :P

     S32 stackNum = 0;
     Dictionary& stackFrame = Script::gEvalState.getCurrentFrame();
     if (!stackFrame.scopeName || !stackFrame.scopeNamespace ){
         stackNum = Script::gEvalState.getTopOfStack() - 1;
     } else {
         stackNum = Script::gEvalState.getTopOfStack() - 2;
    }
    if (stackNum < 0) {
        Con::errorf("Gee stacknum lower than 0!");
        stackNum = 0;
    }
    ConsoleValue* valuePtr =  &Script::gEvalState.localStack[stackNum].values[varRegister];
     Con::printf("& %10s [type:%8s] [value:%20s] [reg:%2d] "
       , variableName, ElfScript::getConsoleValueTypeName(valuePtr->type, valuePtr->subType), valuePtr->getString(), varRegister);
}

#endif
