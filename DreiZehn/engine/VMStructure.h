//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// VM Structure
//-----------------------------------------------------------------------------
#pragma once
#pragma once
#include <vector>
#include <cstdint>
namespace DreiZehn {

typedef uint32_t U32; // dont want to break my fingers lol

enum  OpCodes : uint32_t {
    OP_CONST,       // push const to stack

    OP_LOAD_VAR,
    OP_SAVE_VAR,

    // for future use ...
    OP_GET_LOCAL,   // fetch var
    OP_SET_LOCAL,   // write var

    // Math
    OP_ADD,
    OP_SUB,
    OP_MUL,
    OP_DIV,

    OP_EXIT,        // bye bye
    OP_INVALID
};

inline const char* OpCodeNames[] = {
    "OP_CONST",
    "OP_LOAD_VAR",
    "OP_SAVE_VAR",
    "OP_GET_LOCAL",
    "OP_SET_LOCAL",
    "OP_ADD",
    "OP_SUB",
    "OP_MUL",
    "OP_DIV",
    "OP_EXIT",
    "OP_INVALID"
};



inline void disassembleInstruction(const uint32_t* code, size_t offset) {
    uint32_t opcode = code[offset];

    Tools::printf("%04zu: ", offset);

    if (opcode < OP_INVALID) {
        Tools::printf("%s", OpCodeNames[opcode]);

        if (opcode == OP_CONST || opcode == OP_LOAD_VAR || opcode == OP_SAVE_VAR) {
            Tools::printf(" (Arg: %u)", code[offset + 1]);
        }
    } else {
        Tools::printf("UNKNOWN_OPCODE [%u]", opcode);
    }
    Tools::printf("\n");
}


// -----------------------------------------------------------------------------

// the code chunk
struct BytecodeChunk {
    std::vector<uint32_t> mByteCodes;
    std::vector<Value> mConstants;

    uint32_t addConstant(Value val) {
        mConstants.push_back(val);
        return static_cast<uint32_t>(mConstants.size() - 1);
    }

    U32 emit(uint32_t op) {
        mByteCodes.push_back(op);
        return (U32)mByteCodes.size() - 1;
    }
};

} // namespace DreiZehn
