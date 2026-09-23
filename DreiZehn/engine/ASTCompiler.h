//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// The power machine :)
//-----------------------------------------------------------------------------
#pragma once
#include "VariableFrame.h"
#include "VMStructure.h"
#include <memory>

namespace DreiZehn {

class ASTCompiler {
public:

    static void compileExpression(ASTNode* node, BytecodeChunk& chunk, CompilerScope& scope) {
        if (!node) return;

        // ---------------------------------------------------------------------
        // --- literal
        if (auto* literal = dynamic_cast<LiteralExpression*>(node)) {
            Value finalValue;

            if (literal->mType == TokenType::Number) {
                char* endptr = nullptr;
                double resDouble = std::strtod(literal->mRawValue.c_str(), &endptr);

                if (literal->mRawValue.find('.') != std::string::npos) {
                    finalValue = Value(resDouble);
                } else {
                    finalValue = Value(static_cast<int>(resDouble));
                }
            }

            else if (literal->mType == TokenType::StringLiteral) {
                auto* strObj = new StringValueObject(literal->mRawValue);
                if (gCurrentFrame) gCurrentFrame->addToGarbageCollection(strObj);
                finalValue = Value(strObj);
            }

            uint32_t constIdx = chunk.addConstant(finalValue);
            chunk.emit(OP_CONST);
            chunk.emit(constIdx);
        }

        //TODO ValueExpression

        // ---------------------------------------------------------------------
        // --- variable
        else if (auto* varExpr = dynamic_cast<VariableExpression*>(node)) {
            // local register ..// uint32_t slot = scope.insert(varExpr->mVariableNameSymbolId);
            U32 slot = varExpr->mVariableNameSymbolId;
            chunk.emit(OP_LOAD_VAR);
            chunk.emit(slot);
        }

        // TODO  MethodExpression
        // TODO  CallExpression
        // TODO  AssignStatement

        // --- operation
        else if (auto* binary = dynamic_cast<BinaryOpExpression*>(node)) {
            compileExpression(binary->mLeft.get(), chunk, scope);
            compileExpression(binary->mRight.get(), chunk, scope);

            switch (binary->mOp) {
                case TokenType::Plus    : chunk.emit(OP_ADD); break;
                case TokenType::Minus   : chunk.emit(OP_SUB); break;
                case TokenType::Mul     : chunk.emit(OP_MUL); break;
                case TokenType::Div     : chunk.emit(OP_DIV); break;
                default: Tools::errorf("COMPILE ERROR BinaryOpExpression : unknown TokenType: %d", (int)binary->mOp);
            }
        }
        // --- .....
        //TODO BinaryExpression

        //TODO IfStatement
        //TODO ElseMarkerNode
        //TODO FunctionDefineStartNode
        //TODO FunctionDefineEndNode
        //TODO ForStatement
        //TODO BreakStatement
        //TODO ReturnStatement
        //TODO WhileStatement


    } // compileExpression
}; //ASTCompiler
} // namespace
