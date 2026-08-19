//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// Implement Alias Objects:
// SimObject => Object
// SimGroup  => Group
//-----------------------------------------------------------------------------
#include "console/engineAPI.h"
#include "console/simSet.h"

class Object: public SimObject
{
    typedef SimObject Parent;
public:
     DECLARE_CONOBJECT(Object);
};
IMPLEMENT_CONOBJECT(Object);


class Group: public SimGroup
{
    typedef SimGroup Parent;
public:
    DECLARE_CONOBJECT(Group);
};
IMPLEMENT_CONOBJECT(Group);
