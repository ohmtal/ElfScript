//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT

//-----------------------------------------------------------------------------
// ImGui Console Types
//-----------------------------------------------------------------------------
#pragma once
#ifndef _DYNAMIC_CONSOLETYPES_H_
#include "console/dynamicTypes.h"
#endif

#ifndef _ENGINEPRIMITIVES_H_
#include "console/enginePrimitives.h"
#endif

#ifndef _ENGINESTRUCTS_H_
#include "console/engineStructs.h"
#endif

#include "imgui.h"

// ------------------------------------------------------------------------------
void InitBindings_ImGui();
// ------------------------------------------------------------------------------

DECLARE_STRUCT(ImVec2);
DECLARE_STRUCT(ImVec4);

DefineConsoleType( TypeImVec2, ImVec2 )
DefineConsoleType( TypeImVec4, ImVec2 )


