cmake_minimum_required(VERSION 3.12)

project(HelloConsole LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)

if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  set(CMAKE_BUILD_TYPE "Debug" CACHE STRING "Choose the type of build." FORCE)
  set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release" "MinSizeRel" "RelWithDebInfo")
endif()
# -----------------------------------------------------------------------------
#  defines TORQUESCRIPT_SRC
include("${CMAKE_CURRENT_LIST_DIR}/Engine/TorqueScript.cmake")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}")


add_executable(${PROJECT_NAME} main.cpp
    ${TORQUESCRIPT_SRC}
    ${CMAKE_CURRENT_LIST_DIR}/Engine/platform/XXTHPlatformProcess.cpp
)
target_include_directories(${PROJECT_NAME} PRIVATE "./" "./Engine/" )

