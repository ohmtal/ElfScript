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
void InitBindings_ImGui(); // NOTE this must be called on init!
// ------------------------------------------------------------------------------

DECLARE_STRUCT(ImVec2);
DefineConsoleType( TypeImVec2, ImVec2 )
IMPLEMENT_ENGINE_TYPE_TRAITS(ImVec2)


DECLARE_STRUCT(ImVec4);
DefineConsoleType( TypeImVec4, ImVec4 )
IMPLEMENT_ENGINE_TYPE_TRAITS(ImVec4)

#ifdef ENABLE_CONSOLE_VECTOR
template<>
struct EngineUnmarshallData< ImVec2 >
{
    ImVec2 operator()( ConsoleValue &ref ) const
    {
        ConsoleVector v = ref.getVector();
        return {v.points[0], v.points[1]};
    }

    ImVec2 operator()( const char* str ) const
    {
        ImVec2 result = {0.f,0.f};
        if (str && str[0] != '\0') {
            dSscanf(str, "%g %g",
                    result.x,
                    result.y

            );
        }
        return result;
    }
};


template<>
struct EngineUnmarshallData< ImVec4 >
{
    ImVec4 operator()( ConsoleValue &ref ) const
    {
        ConsoleVector v = ref.getVector();
        return {v.points[0], v.points[1], v.points[2], v.points[3]};
    }

    ImVec4 operator()( const char* str ) const
    {
        ImVec4 result = {0.f,0.f,0.f, 0.f};
        if (str && str[0] != '\0') {
            dSscanf(str, "%g %g %g %g",
                    result.x,
                    result.y,
                    result.z,
                    result.w
            );
        }
        return result;
    }
};
#endif
