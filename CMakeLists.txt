cmake_minimum_required(VERSION 3.12)

project(TorqueScript LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)

if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  set(CMAKE_BUILD_TYPE "Debug" CACHE STRING "Choose the type of build." FORCE)
  set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release" "MinSizeRel" "RelWithDebInfo")
endif()
# -----------------------------------------------------------------------------
# ----------  options ----------
option(BUILD_ELFSCRIPT "Build the ElfScript" ON)
option(BUILD_TORQUESCRIPT "Build the Torque Script" OFF)
option(BUILD_EXPERIMENTAL "Build the Experimental" OFF)
# -----------------------------------------------------------------------------
if (BUILD_ELFSCRIPT)

    set(TARGET_NAME HelloElf)
    include("${CMAKE_CURRENT_LIST_DIR}/ElfScript/ElfScript.cmake")
    
#     set_target_properties(${PROJECT_NAME} PROPERTIES
#         RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
# 
#         # -- for windows:
#         RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_CURRENT_SOURCE_DIR}"
#         RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_CURRENT_SOURCE_DIR}"
#     )         
    
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}")
    if(UNIX)
      list(APPEND ELFSCRIPT_SRC ${CMAKE_CURRENT_LIST_DIR}/ElfScript/addons/shellConsole/POSIXConsole.cpp)
    endif()
      list(APPEND ELFSCRIPT_SRC ${CMAKE_CURRENT_LIST_DIR}/ElfScript/addons/console/consoleDocExporter.cpp)
      #  Network test FIXME mutex
      # list(APPEND ELFSCRIPT_SRC ${CMAKE_CURRENT_LIST_DIR}/ElfScript/core/dnet.cpp)
      # list(APPEND ELFSCRIPT_SRC ${CMAKE_CURRENT_LIST_DIR}/ElfScript/core/stream/bitStream.cpp)
      # list(APPEND ELFSCRIPT_SRC ${CMAKE_CURRENT_LIST_DIR}/ElfScript/platform/platformNet.cpp)
      
           
      
    add_executable(${TARGET_NAME}
        ${CMAKE_CURRENT_LIST_DIR}/ElfScript/demo/demoMain.cpp
        ${CMAKE_CURRENT_LIST_DIR}/ElfScript/demo/testObj.cpp
        ${ELFSCRIPT_SRC}
        ${CMAKE_CURRENT_LIST_DIR}/ElfScript/platform/stub/platformProcess.cpp
    )
    
    # Windows - winVolume :: need to set on all builds
    if(MSVC)
        target_compile_options(${TARGET_NAME} PRIVATE "/Zc:wchar_t-")
        target_compile_definitions(${TARGET_NAME} PRIVATE
            NOMINMAX
            UNICODE
            _UNICODE
        )
    endif()
      
    
    target_include_directories(${TARGET_NAME} PRIVATE "./ElfScript/" "./ElfScript/demo/")
endif()
# -----------------------------------------------------------------------------
if (BUILD_TORQUESCRIPT)
    #  defines TORQUESCRIPT_SRC
    set(TARGET_NAME HelloConsole)
    include("${CMAKE_CURRENT_LIST_DIR}/TorqueScript/TorqueScript.cmake")
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}")

        # Windows - winVolume :: need to set on all builds
        if(MSVC)
            target_compile_options(${TARGET_NAME} PRIVATE "/Zc:wchar_t-")
            target_compile_definitions(${TARGET_NAME} PRIVATE
                NOMINMAX
                UNICODE
                _UNICODE
            )
        endif()
    
    add_executable(${TARGET_NAME}
        ${CMAKE_CURRENT_LIST_DIR}/TorqueScript/demo/main.cpp
        ${TORQUESCRIPT_SRC}
        ${CMAKE_CURRENT_LIST_DIR}/TorqueScript/platform/stub/platformProcess.cpp
    )
    target_include_directories(${TARGET_NAME} PRIVATE "./TorqueScript/demo/" "./TorqueScript/" )
endif()
# -----------------------------------------------------------------------------

if (BUILD_EXPERIMENTAL)
    #  defines EXPERIMENTAL_SRC
    set(TARGET_NAME HelloExperimental)
    include("${CMAKE_CURRENT_LIST_DIR}/experimental/Experimental.cmake")
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}")
        # Windows - winVolume :: need to set on all builds
        if(MSVC)
            target_compile_options(${TARGET_NAME} PRIVATE "/Zc:wchar_t-")
            target_compile_definitions(${TARGET_NAME} PRIVATE
                NOMINMAX
                UNICODE
                _UNICODE
            )
        endif()

    add_executable(${TARGET_NAME}
        experimental/main.cpp
        ${EXPERIMENTAL_SRC}
    )
    target_include_directories(${TARGET_NAME} PRIVATE "./experimental" )
endif()
