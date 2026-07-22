//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------#pragma once
#include <string>
#include "console/console.h"
namespace Con {
    /// XXTH ElfScript preprocessor:
    void setScriptConstant(std::string key, S32 value);
    void setScriptConstant(std::string key, U64 value);
    void setScriptConstant(std::string key, F64 value);
    void setScriptConstant(std::string key, std::string value);
    std::string preprocessTorqueScript(const char* inString);

}
