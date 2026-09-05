//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// ElfScript Array
//-----------------------------------------------------------------------------
#pragma once

#include "console/engineAPI.h"
#include "console/console.h"
#include "console/enginePrimitives.h"
#include "console/dynamicTypes.h"



class Array: public SimObject
{
    typedef SimObject Parent;
public:
    DECLARE_CONOBJECT(Array);
    Vector<ConsoleValue> mValues;


    // ------------------------------------------------------------------------
    inline bool isIndexValid(S32 index) {
        return index >= 0 && index < mValues.size();
    }

};
