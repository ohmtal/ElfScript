//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
#pragma once

#include <iostream>
#include <vector>
#include <string>

#include "ext/magic_enum.hpp"
#include "console.h"
#include "consoleTypes.h"

namespace Con {

    // -------------------------------------------------------------------------
    /*
     * Register a enum(S32) to global variable with addConstent
     * NOTE only for interger types .. can be enhanced i guess ..
     */

    template <typename TEnum>
    void registerEnumS32(const std::string& prefix) {

        constexpr std::size_t count = magic_enum::enum_count<TEnum>();

        // ** static variable storage
        static std::vector<S32> storedValues(count);

        constexpr auto enumValues = magic_enum::enum_values<TEnum>();
        constexpr auto enumNames = magic_enum::enum_names<TEnum>();

        // ** generate
        for (std::size_t i = 0; i < count; ++i) {
            storedValues[i] = static_cast<S32>(enumValues[i]);
            std::string fullName = prefix + std::string(enumNames[i]);
            Con::addConstant(
                fullName.c_str(),
                             TypeS32,
                             &storedValues[i],
                             ""
            );
        }
    }
    // -------------------------------------------------------------------------
    // -------------------------------------------------------------------------
} //namespace Con


