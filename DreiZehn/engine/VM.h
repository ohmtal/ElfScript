//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// The power machine :)
//  1. Build AST
//  2. chunk.rawInstructions
//  3. threadChunk(chunk)
//  4. runDirectThreadedVM(chunk)

#define DEBUG_TRACE_EXECUTION

//-----------------------------------------------------------------------------
#pragma once
#include <vector>
#include <iostream>
#include <cstring>
#include "VMStructure.h"
#include "VariableFrame.h"

namespace DreiZehn {

//-----------------------------------------------------------------------------

inline Value runDirectThreadedVM(BytecodeChunk& chunk) {

    constexpr void* dispatch_table[] = {
        &&handle_OP_CONST,       // push const to stack

        &&handle_OP_LOAD_VAR,
        &&handle_OP_SAVE_VAR,

        // for future use ...
        &&handle_OP_GET_LOCAL,   // fetch var
        &&handle_OP_SET_LOCAL,   // write var

        // Math
        &&handle_OP_ADD,
        &&handle_OP_SUB,
        &&handle_OP_MUL,
        &&handle_OP_DIV,

        &&handle_OP_EXIT,        // bye bye
        &&handle_OP_INVALID
    };

    if (chunk.mByteCodes.empty()) {
        return Value(0.0);
    }

    std::vector<Value> vmStack;
    vmStack.reserve(32);

    auto popStack = [&vmStack]() -> Value {
        assert(!vmStack.empty() && "RUNTIME ERROR INVALID STACK ACCESS!!");
        Value val = vmStack.back();
        vmStack.pop_back();
        return val;
    };
    auto pushStack = [&vmStack](Value val) {
        vmStack.push_back(val);
    };

    uint32_t  ip = 0;
    uint32_t* code = chunk.mByteCodes.data();
    size_t codeSize = chunk.mByteCodes.size();


    auto advanceU32 = [code, &ip, codeSize]() -> uint32_t {
        assert(ip < codeSize && "RUNTIME ERROR: BYTECODE OVERFLOW / UNEXPECTED END OF CODE");
        return code[ip++];
    };
    auto advanceValue = [code, &ip, codeSize]() -> Value {
        assert(ip + 1 < codeSize && "RUNTIME ERROR: BYTECODE OVERFLOW READING INLINE VALUE");
        Value val;
        std::memcpy(&val, &code[ip], sizeof(Value));
        ip += 2;
        return val;
    };


    // magic macro:
    #ifdef DEBUG_TRACE_EXECUTION
    #define DISPATCH() \
    do { \
        disassembleInstruction(code, ip); \
        goto *dispatch_table[advanceU32()]; \
    } while(0)
    #else
    #define DISPATCH() goto *dispatch_table[advanceU32()]
    #endif

    #define DISPATCH_OPCODE(op) goto *dispatch_table[op]
    // launch first command
    DISPATCH();

    // -------------------------------
    handle_OP_CONST: {
        pushStack(chunk.mConstants[advanceU32()]);
        DISPATCH();

    }
    // -------------------------------
    handle_OP_LOAD_VAR:{
        // lookup
        pushStack(
            gCurrentFrame->getVariable(advanceU32())
        );
        DISPATCH();
    }
    // -------------------------------
    handle_OP_SAVE_VAR:{
        U32 varID = advanceU32();
        gCurrentFrame->setVariable(varID, popStack());
        DISPATCH();
    }
    // -------------------------------
    handle_OP_GET_LOCAL: {
        assert(false && "NOT IMPLEMENTED");
        // pushStack(locals[advance()]);
        // DISPATCH();
    }
    // -------------------------------
    handle_OP_SET_LOCAL: {
        assert(false && "NOT IMPLEMENTED");
        // locals[advance()] = vmStack.back();
        // DISPATCH();
    }
    // -------------------------------
    handle_OP_ADD: {
        Value b = popStack();
        Value a = popStack();
        pushStack(Value(a.getDouble() + b.getDouble()));
        DISPATCH();
    }
    // -------------------------------
    handle_OP_SUB: {
        Value b = popStack();
        Value a = popStack();
        pushStack(Value(a.getDouble() - b.getDouble()));
        DISPATCH();
    }
    // -------------------------------
    handle_OP_MUL: {
        Value b = popStack();
        Value a = popStack();
        pushStack(Value(a.getDouble() * b.getDouble()));
        DISPATCH();
    }
    // -------------------------------
    handle_OP_DIV: {
        Value b = popStack();
        Value a = popStack();
        pushStack(Value(a.getDouble() / b.getDouble()));
        DISPATCH();
    }
    // -------------------------------
    handle_OP_EXIT: {
        return vmStack.empty() ? Value(0) : vmStack.back();
    }
    // -------------------------------
    handle_OP_INVALID: {
        assert(false && "RUNTIME ERROR IN VM INVALID BYTE CODE!");
    }

    #undef DISPATCH
    #undef DISPATCH_OPCODE

    Tools::errorf("SHOULD NOT BE HERE !!! Did you forget OP_EXIT?");
    return Value(0);
}

//-----------------------------------------------------------------------------
} // namespace DreiZehn
