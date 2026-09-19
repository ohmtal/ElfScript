//-----------------------------------------------------------------------------
// Copyright (c) 2009/2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
#pragma once

#include "console/simBase.h"
#include "console/consoleTypes.h"
#include "objects/BasicGrid.h"
class Array;

namespace ElfGrid {


class GridObject : public SimObject {
     typedef SimObject Parent;
public:
    ElfScript::BasicGrid mGrid;


    // static void initPersistFields();

    bool onAdd() override;
    void onRemove() override;

    // SimObject * createPath(Vector2 start, Vector2 end, const bool smoothPath );
    Array* createPath(ConsoleVector start, ConsoleVector end, const bool smoothPath );


    DECLARE_CONOBJECT(GridObject);
};

} //namespace
