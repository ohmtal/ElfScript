//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// Script preprocessor using regex.
// Torquescript have no concept to use "fast" constants bevor i start
// changing bison/ast with adding this i try this first.
// NOTE: used in: Con::EvalResult CodeBlock::compileExec(StringTableEntry fileName, const char *inString, bool noCalls, S32 setFrame)
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
// #define _LOOP_COUNT_ 5000
// for (%i = 0; %i < _LOOP_COUNT_; %i++) => for (%i = 0; %i < 500; %i++)
// which use the bytecode than as constant which is much faster than using
// variables.
//-----------------------------------------------------------------------------

#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <regex>
#include <vector>
#include <algorithm>
#include <core/strings/stringFunctions.h>

namespace Con {


// Global table that persists across multiple exec() calls
std::unordered_map<std::string, std::string> gScriptConstants;

std::string preprocessTorqueScript(const char* inString) {
    if (inString == nullptr) return "";
    bool foundHash = dStrchr(inString, '#') != nullptr;

    std::string outputCode;

    if (foundHash) {
        std::istringstream stream(inString);
        std::string line;

        // RegEx to find: #define NAME VALUE
        std::regex defineRegex(R"(^\s*#define\s+([A-Za-z_][A-Za-z0-9_]*)\s+(.+?)\s*$)");
        // RegEx to find: #undef NAME
        // #undef removed since it undef the previous before and
        // its overwritten anyway
        // std::regex undefRegex(R"(^\s*#undef\s+([A-Za-z_][A-Za-z0-9_]*)\s*$)");

        // Phase 1: Parse line by line to collect definitions and undefinitions

        while (std::getline(stream, line)) {
            std::smatch match;

            if (std::regex_match(line, match, defineRegex)) {
                std::string name = match[1].str();
                std::string value = match[2].str();
                gScriptConstants[name] = value; // Add or update globally
            }
            // else if (std::regex_match(line, match, undefRegex)) {
            //     std::string name = match[1].str();
            //     gScriptConstants.erase(name); // Remove from global table
            // }
            else {
                // Keep normal code line
                outputCode += line + "\n";
            }
        }

    } //if found hash
    else {
        outputCode = inString;
    }

    // Phase 2: Copy definitions into a vector and sort them by length (longest first).
    // This is CRITICAL! If you have "MY_VAL" and "MY_VAL_MAX", replacing "MY_VAL"
    // first would break "MY_VAL_MAX" into "5000_MAX". Sorting fixes this.
    std::vector<std::pair<std::string, std::string>> sortedConstants(gScriptConstants.begin(), gScriptConstants.end());
    std::sort(sortedConstants.begin(), sortedConstants.end(),
              [](const auto& a, const auto& b) { return a.first.length() > b.first.length(); });

    // Phase 3: Global search and replace on the current script text
    for (const auto& [name, value] : sortedConstants) {
        // Use word boundaries (\b) so we don't match substrings inside other words
        std::regex replaceRegex("\\b" + name + "\\b");
        outputCode = std::regex_replace(outputCode, replaceRegex, value);
    }

    return outputCode;
}

// after so many changes and testing i rolled back and kept the latest code here:
// // //-----------------------------------------------------------------------------
// // // Copyright (c) 2026 Thomas Hühn (XXTH)
// // // SPDX-License-Identifier: MIT
// // //-----------------------------------------------------------------------------
// // // Script preprocessor using regex.
// // // Torquescript have no concept to use "fast" constants bevor i start
// // // changing bison/ast with adding this i try this first.
// // // TODO: find the best place to add this ;)
// // //-----------------------------------------------------------------------------
// // //-----------------------------------------------------------------------------
// // // #define LOOP_COUNT 5000
// // // for (%i = 0; %i < LOOP_COUNT; %i++) => for (%i = 0; %i < 500; %i++)
// // // #undef LOOP_COUNT // optional
// // // which use the bytecode than as constant which is much faster than using
// // // variables.
// // // used in: Con::EvalResult CodeBlock::compileExec(StringTableEntry fileName, const char *inString, bool noCalls, S32 setFrame)
// // //-----------------------------------------------------------------------------
// //
// // #include <iostream>
// // #include <string>
// // #include <sstream>
// // #include <unordered_map>
// // #include <regex>
// // #include <vector>
// // #include <algorithm>
// // #include <core/strings/stringFunctions.h>
// //
// // namespace Con {
// //
// //     // Global table that persists across multiple exec() calls
// //     std::unordered_map<std::string, std::string> gScriptConstants;
// //
// //     std::string preprocessTorqueScript(const char* inString) {
// //         if (inString == nullptr) return "";
// //         bool foundHash = dStrchr(inString, '#') != nullptr;
// //
// //         // 1. Create a 1:1 exact copy of the original string block
// //         std::string outputCode(inString);
// //
// //         // Check if the current input contains ANY '#' character
// //         if (foundHash) {
// //             std::istringstream stream(inString);
// //             std::string line;
// //
// //             // Regex just to find and collect the constants from the text
// //             std::regex defineRegex(R"(^\s*#define\s+([A-Za-z_][A-Za-z0-9_]*)\s+(.+?)\s*$)");
// //         std::regex undefRegex(R"(^\s*#undef\s+([A-Za-z_][A-Za-z0-9_]*)\s*$)");
// //
// //         // Phase 1: Only parse and collect definitions if '#' is present
// //         while (std::getline(stream, line)) {
// //             std::smatch match;
// //             if (!line.empty() && line.back() == '\r') line.pop_back();
// //
// //             if (std::regex_match(line, match, defineRegex)) {
// //                 gScriptConstants[match.str()] = match.str();
// //             }
// //             else if (std::regex_match(line, match, undefRegex)) {
// //                 gScriptConstants.erase(match.str());
// //             }
// //         }
// //         }
// //
// //     // Phase 2: Sort all globally known constants by length descending
// //     // (This runs ALWAYS, so even strings without '#' get their constants replaced!)
// //     std::vector<std::pair<std::string, std::string>> sortedConstants(gScriptConstants.begin(), gScriptConstants.end());
// //     std::sort(sortedConstants.begin(), sortedConstants.end(),
// //               [](const auto& a, const auto& b) { return a.first.length() > b.first.length(); });
// //
// //     // Phase 3: Replace the constant names everywhere in the whole block
// //     for (const auto& [name, value] : sortedConstants) {
// //         std::regex replaceRegex("\\b" + name + "\\b");
// //         outputCode = std::regex_replace(outputCode, replaceRegex, value);
// //     }
// //
// //     // Phase 4: Only neutralize the '#' directives if they actually exist
// //     if (foundHash) {
// //         outputCode = std::regex_replace(outputCode, std::regex(R"(^\s*#)"), "//");
// //     }
// //
// //     return outputCode;
// //     }
// //
// // } //Con


} //Con
