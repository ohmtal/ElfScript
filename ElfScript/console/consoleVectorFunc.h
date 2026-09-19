//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// directly linked console Vector functions
//-----------------------------------------------------------------------------
#pragma once

#include <functional>
#include <unordered_map>
#include "console.h"

namespace ElfScript::ConsoleVector {

using CallBack =  std::function< bool (S32, ConsoleValue*, ConsoleValue& )>;
using FuncLookupMap = std::unordered_map<StringTableEntry, CallBack>;

inline bool mInitialized = false;
inline FuncLookupMap mLookup;


// -----------------------------------------------------------------------------
bool equal(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue);
bool equal2(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue);
bool equal3(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue);

bool add(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue);
bool sub(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue);
bool mul(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue);
bool div(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue);

bool getRectCentered(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue);
bool pointInRect(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue);
bool contains(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue);
bool intersects(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue);

bool dist2(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue);
bool distSq2(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue);
bool dist3(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue);
bool distSq3(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue);

bool len2(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue);
bool len2Sq(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue);

bool len3(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue);
bool len3Sq(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue);

bool normalize2(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue);
bool normalize3(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue);

bool dot2(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue);
bool dot3(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue);

bool cross2(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue);
bool cross3(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue);

// // NOT! bool randomize(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue);
// -----------------------------------------------------------------------------
static void Init() {
    if (mInitialized) return;
    mLookup[StringTable->insert("equal")] = equal;
    mLookup[StringTable->insert("equal2")] = equal2;
    mLookup[StringTable->insert("equal3")] = equal3;

    mLookup[StringTable->insert("add")] = add;
    mLookup[StringTable->insert("sub")] = sub;
    mLookup[StringTable->insert("mul")] = mul;
    mLookup[StringTable->insert("div")] = div;

    mLookup[StringTable->insert("getRectCentered")] = getRectCentered;
    mLookup[StringTable->insert("pointInRect")] = pointInRect;
    mLookup[StringTable->insert("contains")] = contains;
    mLookup[StringTable->insert("intersects")] = intersects;

    mLookup[StringTable->insert("dist2")]   = dist2;
    mLookup[StringTable->insert("distSq2")] = distSq2;
    mLookup[StringTable->insert("dist3")]   = dist3;
    mLookup[StringTable->insert("distSq3")] = distSq3;

    mLookup[StringTable->insert("len2")]    = len2;
    mLookup[StringTable->insert("len2Sq")]  = len2Sq;

    mLookup[StringTable->insert("len3")]    = len3;
    mLookup[StringTable->insert("len3Sq")]  = len3Sq;

    mLookup[StringTable->insert("normalize2")] = normalize2;
    mLookup[StringTable->insert("normalize3")] = normalize3;

    mLookup[StringTable->insert("dot2")]    = dot2;
    mLookup[StringTable->insert("dot3")]    = dot3;

    mLookup[StringTable->insert("cross2")]    = cross2;
    mLookup[StringTable->insert("cross3")]    = cross3;

    // // mLookup[StringTable->insert("randomize")]    = randomize;

    mInitialized = true;
}


inline bool funcCaller(S32 argC, ConsoleValue* argV, ConsoleValue& resultValue) {
    if (argC < 1) return false;
    // // StringTableEntry func = StringTable->insert(argV[0].getString());
    StringTableEntry func = argV[0].getString();
    if (!mInitialized) Init();


    auto it = mLookup.find(func);
    if (it != mLookup.end()) {
        return it->second(argC, argV, resultValue);
    } else {
        Con::errorf("Unknown Function: %s", argV[0].getString());
        return false;
    }


}

} //namespace
