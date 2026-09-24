//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// Enviroment VM

// #define DREIZEHN_BYTECODE
// #define DREIZEHN_BYTECODE_PORTING
// #define DEBUG_TRACE_EXECUTION
//-----------------------------------------------------------------------------
#pragma once



#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

#include <unordered_map>
#include <iostream>
#include <functional>
#include <cassert>

#include "Value.h"
#include "AstNode.h"
#include "Tools.h"
#include "FunctionMap.h"
#include "Globals.h"
#include "SymbolTable.h"
#include "VariableFrame.h"

// Byte Code
#ifdef DREIZEHN_BYTECODE
#include "VMStructure.h"
#include "CompilerScope.h"
#include "ASTCompiler.h"
#include "VM.h"
#endif

namespace DreiZehn {


    enum class BlockType { Function, ForLoop, WhileLoop, IfBlock };

    struct OpenBlock {
        BlockType mType;
        uint32_t mFuncNameSymbolId;
        BlockStatement* mBlockNodePointer;
    };


    enum class FlowSignal {
        None,
        Break,
        Return
    };



class Environment {
private:

    Environment* mParentEnv = nullptr;
    VariableFrame* mVariableFrame = nullptr;
public:
    Environment() : mParentEnv(nullptr) {
        Globals::gCurEnv = this;
        mVariableFrame = new VariableFrame(nullptr);
    }
    Environment(Environment* parentEnv) : mParentEnv(parentEnv) {
        Globals::gCurEnv = this;
        mVariableFrame = new VariableFrame(parentEnv->mVariableFrame);
    }
    ~Environment() {
        if (mParentEnv) Globals::gCurEnv = mParentEnv;
        else Globals::gCurEnv = nullptr;

        if (mVariableFrame) {
            delete(mVariableFrame);
            mVariableFrame = nullptr;
        }
    }

    VariableFrame* getVariableFrame() {
        assert(mVariableFrame && "FATAL ERROR: Enviroment require a VariableFrame!");
        return mVariableFrame;
    }


    // -------------------------------------------------------------------------
    // EXECUTE :D - currentEnv for function calls
    // -------------------------------------------------------------------------
    inline FlowSignal execute(ASTNode* node, Environment& currentEnv) {
        if (!node) return FlowSignal::None;


        // --- Break Statement ---
        if (dynamic_cast<BreakStatement*>(node)) {
            return FlowSignal::Break;
        }

        // --- Return Statement ---
        if (auto* retStmt = dynamic_cast<ReturnStatement*>(node)) {
            if (retStmt->mExpression) {
                Value retVal = retStmt->mExpression->evaluate(currentEnv);
                currentEnv.mVariableFrame->setVariable(SymbolTable::insert("__return_value__"), retVal);
            }
            return FlowSignal::Return;
        }

        // --- Assign ---
#ifdef DREIZEHN_BYTECODE
        if (auto* assign = dynamic_cast<AssignStatement*>(node)) {
            // new chunk
            BytecodeChunk chunk;
            CompilerScope scope;

            // compile
            ASTCompiler::compileExpression(assign->mRhs.get(), chunk, scope);

            chunk.emit(OP_EXIT);

            // fire!
            Value result = runDirectThreadedVM(chunk, scope.getLocalCount());
            // save
            currentEnv.mVariableFrame->setVariable(assign->mVarNameSymbolId, result);
        }
#else
        // prev byte code:
        if (auto* assign = dynamic_cast<AssignStatement*>(node)) {
            currentEnv.mVariableFrame->setVariable(assign->mVarNameSymbolId, assign->mRhs->evaluate(currentEnv));
        }
#endif


        // --- If-Statement  ---
        else if (auto* ifStmt = dynamic_cast<IfStatement*>(node)) {
            Value condVal = ifStmt->mCondition->evaluate(currentEnv);

            double condNum = condVal.getDouble();
            const double EPSILON = 1e-9;
            bool isTrue = std::abs(condNum) > EPSILON;

            if (isTrue) {
                for (auto& childNode : ifStmt->mBody) {
                    if (!childNode) continue;
                    FlowSignal sig = execute(childNode.get(), currentEnv);
                    if (sig != FlowSignal::None) return sig;
                }
            } else {
                for (auto& childNode : ifStmt->mElseBody) {
                    if (!childNode) continue;
                    FlowSignal sig = execute(childNode.get(), currentEnv);
                    if (sig != FlowSignal::None) return sig;
                }
            }
        }


        // ---- for statement .....
        #ifdef DREIZEHN_BYTECODE
        else if (auto* forStmt = dynamic_cast<ForStatement*>(node)) {
            BytecodeChunk chunk;
            CompilerScope scope;

             ASTCompiler::compileExpression(forStmt, chunk, scope);

             //TODO: ASTCompiler::compileForStatement(forStmt, chunk, scope);

            chunk.emit(OP_EXIT);

            runDirectThreadedVM(chunk, scope.getLocalCount());
        }
#else
        else if (auto* forStmt = dynamic_cast<ForStatement*>(node)) {
            Value startVal = forStmt->mStartExpr->evaluate(currentEnv);
            Value endVal = forStmt->mEndExpr->evaluate(currentEnv);

            int start = startVal.getInt();
            int end = endVal.getInt();

            Environment loopEnv(&currentEnv);

            for (int i = start; i <= end; ++i) {
                loopEnv.mVariableFrame->setVariable(forStmt->mIteratorVarNameSymbolId, Value(i));

                for (auto& statement : forStmt->mBody) {
                    FlowSignal sig = currentEnv.execute(statement.get(), loopEnv);

                    if (sig == FlowSignal::Break) {
                        return FlowSignal::None;
                    }
                    if (sig == FlowSignal::Return) {
                        return FlowSignal::Return;
                    }
                }
            }
        }
#endif
        // ---- While statement .....
        else if (auto* whileStmt = dynamic_cast<WhileStatement*>(node)) {
            Environment loopEnv(&currentEnv);

            auto checkCondition = [&]() -> bool {
                Value condVal = whileStmt->mCondition->evaluate(loopEnv);
                return (condVal.isInt() && condVal.asInt() != 0) ||
                (condVal.isDouble() && condVal.asDouble() != 0.0);
            };

            while (checkCondition()) {
                for (auto& statement : whileStmt->mBody) {
                    FlowSignal sig = currentEnv.execute(statement.get(), loopEnv);

                    if (sig == FlowSignal::Break) return FlowSignal::None;
                    if (sig == FlowSignal::Return) return FlowSignal::Return;
                }
            }
        }
        // --- BlockStatement  ---
        else
        if (auto* block = dynamic_cast<BlockStatement*>(node)) {
            for (auto& statement : block->mBody) {
                if (!statement) continue;
                FlowSignal sig = execute(statement.get(), *this);
                if (sig != FlowSignal::None) return sig;
            }
            return FlowSignal::None;
        }


        // --- others ---
        else if (auto* expr = dynamic_cast<Expression*>(node)) {
            expr->evaluate(currentEnv);
        }

        return FlowSignal::None;
    }


    // -------------------------------------------------------------------------
    // main execute
    inline FlowSignal execute(ASTNode* node) {
         return execute(node, *this);
    }
    // -------------------------------------------------------------------------
    void shutDown() {
        // done be destuctor: doGarbageCollection();
    }
}; //Class
} //Namespace
