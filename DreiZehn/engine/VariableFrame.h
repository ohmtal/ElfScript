//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// Variable Frame
//-----------------------------------------------------------------------------
#pragma once

#include <unordered_map>
#include <cassert>

#include "Value.h"
#include "ValueObject.h"
#include "Tools.h"

namespace DreiZehn {

// -----------------------------------------------------------------------------
// Global Access:
class VariableFrame;
inline VariableFrame* gCurrentFrame = nullptr;
// all objects go into the gMasterFrame for
// GarbageCollection !!!
inline VariableFrame* gMasterFrame = nullptr;
// -----------------------------------------------------------------------------
class VariableFrame {
private:
    // variables stack
    std::unordered_map<uint32_t, Value> mVariables;
    // Garbage collection
    std::vector<ValueObject*> mGarbageCollection;

    VariableFrame* mParentFrame = nullptr;





public:
    VariableFrame( VariableFrame* parentFrame ) {
        gCurrentFrame = this;
        if (parentFrame == nullptr) {
            gMasterFrame = this;
            mGarbageCollection.reserve(256);
        }
        mParentFrame = parentFrame;
    }
    ~VariableFrame() {
        doGarbageCollection();
        gCurrentFrame = mParentFrame;
    }

    // -------------------------------------------------------------------------
    // Variable getter/setter
    // -------------------------------------------------------------------------
    inline void setVariable(uint32_t id, Value val) {

        if (Globals::gShowVariableDebug) Tools::printf("DEBUG: setVariable :: name: %s id: %d, floatval: %f\n", SymbolTable::getName(id).c_str(), id, val.getFloat());

        auto it = mVariables.find(id);
        if (it != mVariables.end()) {
            it->second = val;
            return;
        }

        if (mParentFrame != nullptr) {
            if (mParentFrame->tryUpdateVariable(id, val)) {
                return;
            }
        }
        mVariables[id] = val;
    }
    // -------------------------------------------------------------------------
    inline bool tryUpdateVariable(uint32_t id, Value val) {
        auto it = mVariables.find(id);
        if (it != mVariables.end()) {
            it->second = val;
            return true;
        }
        if (mParentFrame != nullptr) {
            return mParentFrame->tryUpdateVariable(id, val);
        }
        return false;
    }
    // // -------------------------------------------------------------------------
   inline Value getVariable(uint32_t id) {
        if (Globals::gShowVariableDebug) Tools::printf("DEBUG: getVariable :: name: %s id: %d\n", SymbolTable::getName(id).c_str(), id);

        auto it = mVariables.find(id);
        if (it != mVariables.end()) {
            return it->second;
        }

        if (mParentFrame != nullptr) {
            return mParentFrame->getVariable(id);
        }

        std::string varName = SymbolTable::getName(id);
        Tools::errorf("Variable not found: %s\n", varName.c_str());
        return Value();
    }
    // -------------------------------------------------------------------------
    // GarbageCollection
    // -------------------------------------------------------------------------
    inline void addToGarbageCollection(ValueObject* obj) {
       assert(gMasterFrame && "addToGarbageCollection but Frame have not MasterFrame!!!");
       gMasterFrame->mGarbageCollection.push_back(obj);

    }

    inline void doGarbageCollection() {
        // NOTE only on MasterFrame
       if (!gMasterFrame || this != gMasterFrame) return ;
        for (auto* obj : mGarbageCollection) {
            delete obj;
        }
        mGarbageCollection.clear();
    }
};


} // namespace DreiZehn
