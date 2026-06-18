cmake_minimum_required(VERSION 3.12)

project(TorqueScript LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)

if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  set(CMAKE_BUILD_TYPE "Debug" CACHE STRING "Choose the type of build." FORCE)
  set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release" "MinSizeRel" "RelWithDebInfo")
endif()
# -----------------------------------------------------------------------------
# ----------  options ----------
option(BUILD_TORQUESCRIPT "Build the Torque Script" ON)
option(BUILD_ELFSCRIPT "Build the ElfScript" ON)
# -----------------------------------------------------------------------------
if (BUILD_TORQUESCRIPT)
    #  defines TORQUESCRIPT_SRC
    set(TARGET_NAME HelloConsole)
    include("${CMAKE_CURRENT_LIST_DIR}/TorqueScript/TorqueScript.cmake")
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}")
    add_executable(${TARGET_NAME} main.cpp
        ${TORQUESCRIPT_SRC}
        ${CMAKE_CURRENT_LIST_DIR}/TorqueScript/platform/stub/platformProcess.cpp
    )
    target_include_directories(${TARGET_NAME} PRIVATE "./" "./TorqueScript/" )
endif()
# -----------------------------------------------------------------------------
if (BUILD_ELFSCRIPT)

    set(TARGET_NAME HelloElf)
    include("${CMAKE_CURRENT_LIST_DIR}/ElfScript/ElfScript.cmake")
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}")
    add_executable(${TARGET_NAME} ${CMAKE_CURRENT_LIST_DIR}/ElfScript/demoMain.cpp
        ${ELFSCRIPT_SRC}
        ${CMAKE_CURRENT_LIST_DIR}/ElfScript/platform/stub/platformProcess.cpp
    )
    target_include_directories(${TARGET_NAME} PRIVATE "./ElfScript/" )
endif()
# -----------------------------------------------------------------------------
