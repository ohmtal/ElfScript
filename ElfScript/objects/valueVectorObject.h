//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// ElfScript ValueVectorObject
// Experimental !
//-----------------------------------------------------------------------------
#pragma once

#include "console/engineAPI.h"
#include "console/console.h"
#include "console/enginePrimitives.h"
#include "console/dynamicTypes.h"

DefineConsoleType( TypeValue, ConsoleValue )
DECLARE_STRUCT( ConsoleValue );

class ValueVector: public SimObject
{
    typedef SimObject Parent;
public:
    DECLARE_CONOBJECT(ValueVector);
    Vector<ConsoleValue> mValues;


    // ------------------------------------------------------------------------
    inline bool isIndexValid(S32 index) {
        return index >= 0 && index < mValues.size();
    }

};
