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
DefineConsoleType( TypeImVec2, ImVec2 )
IMPLEMENT_ENGINE_TYPE_TRAITS(ImVec2)


DECLARE_STRUCT(ImVec4);
DefineConsoleType( TypeImVec4, ImVec4 )
IMPLEMENT_ENGINE_TYPE_TRAITS(ImVec4)

// // --------------------------------------------------------------------------
// // Custom Engine Type Traits Specialization for ImVec2
// // --------------------------------------------------------------------------
// template<>
// struct EngineTypeTraits< ImVec2 > : public _EngineStructTypeTraits< ImVec2 >
// {
//     //  Force the function wrapper signature to return a pointer for C-Linkage
//     typedef ImVec2* ReturnValueType;
//
//     //  Define the conversion function your engine's macro expects
//     // This handles translating the pointer back to what the engine needs
//     static ImVec2* ReturnValue(ImVec2* val) { return val; }
//     static ImVec2* ReturnValue(ImVec2 val)  { return new ImVec2(val); } // Safe fallback fallback for engine initialization checks
// };
//
// // Hook the static TYPEINFO mapping up to your engine's name registry helper
// template<>
// const EngineTypeInfo* const _EngineStructTypeTraits< ImVec2 >::TYPEINFO = EngineTypeInfo::getTypeInfoByName("ImVec2");

// // --------------------------------------------------------------------------
// // Custom Engine Type Traits Specialization for ImVec4
// // --------------------------------------------------------------------------
// template<>
// struct EngineTypeTraits< ImVec4 > : public _EngineStructTypeTraits< ImVec4 >
// {
//     typedef ImVec4* ReturnValueType;
//
//     static ImVec4* ReturnValue(ImVec4* val) { return val; }
//     static ImVec4* ReturnValue(ImVec4 val)  { return new ImVec4(val); }
// };
//
// template<>
// const EngineTypeInfo* const _EngineStructTypeTraits< ImVec4 >::TYPEINFO = EngineTypeInfo::getTypeInfoByName("ImVec4");
