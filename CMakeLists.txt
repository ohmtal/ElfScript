cmake_minimum_required(VERSION 3.12)

project(TorqueScript LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)

if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  set(CMAKE_BUILD_TYPE "Debug" CACHE STRING "Choose the type of build." FORCE)
  set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release" "MinSizeRel" "RelWithDebInfo")
endif()
# -----------------------------------------------------------------------------
# ----------  options ----------
# // only one left so obsolete option(BUILD_ELFSCRIPT "Build the ElfScript" ON)
set(BUILD_ELFSCRIPT ON)
# -----------------------------------------------------------------------------
# # option(ELF_ENABLE_CONSOLE_VECTOR_CALLBACK "ElfScript: Enable experimetal console vector callback" OFF)

# -----------------------------------------------------------------------------
set(FAST_DEFAULT OFF)
set(BUILD_O_FAST ${FAST_DEFAULT} CACHE BOOL "Build Application with maximum speed (-Ofast)")

set(GPROF_DEFAULT OFF)
set(BUILD_GPROF ${GPROF_DEFAULT} CACHE BOOL "Build Application with -pg for gprof analysis")

# -----------------------------------------------------------------------------
set(IPO_DEFAULT OFF)
set(BUILD_WITH_IPO ${IPO_DEFAULT} CACHE BOOL "Build Application with speed profile LTO (-O3)")

# --- Speed Optimization (LTO) --- NOTE: not faster than -02
if (BUILD_WITH_IPO)
    include(CheckIPOSupported)
    check_ipo_supported(RESULT ipo_supported)

    # gcc is faster ?!
    # set(CMAKE_C_COMPILER "clang")
    # set(CMAKE_CXX_COMPILER "clang++")

    if(ipo_supported AND NOT ANDROID)
        set(CMAKE_INTERPROCEDURAL_OPTIMIZATION_RELEASE ON)
    endif()


    add_library(flux_speed_profile INTERFACE)
    target_compile_options(flux_speed_profile INTERFACE
        $<$<CONFIG:Release>:
            $<$<CXX_COMPILER_ID:MSVC>:/O2 /Oi /Ot>
            $<$<OR:$<CXX_COMPILER_ID:GNU>,$<CXX_COMPILER_ID:Clang>>:-O3 -fno-strict-aliasing
                $<$<AND:$<NOT:$<BOOL:${EMSCRIPTEN}>>,$<NOT:$<BOOL:${ANDROID}>>>:-march=native>>
        >
    )
    #  -g  if you need
endif()
# -----------------------------------------------------------------------------
set(SANITIZE_DEFAULT OFF)
set(BUILD_WITH_SANITIZE ${SANITIZE_DEFAULT} CACHE BOOL "Build Application with -fsanitize=address -g")
# ------------------------------------------------------------------------------
if (BUILD_ELFSCRIPT)

    set(TARGET_NAME HelloElf)

    set(ELF_APP_NAME "ElfScript Demo" CACHE STRING "ElfScript: App-Name used in scripts" FORCE)
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


    # # if ( ELF_ENABLE_CONSOLE_VECTOR_CALLBACK )
    # #  add_compile_definitions(ENABLE_CONSOLE_VECTOR_CALLBACK)
    # # endif()



    if (BUILD_WITH_IPO)
        target_link_libraries(${TARGET_NAME} PUBLIC  flux_speed_profile)
    endif()
    if (BUILD_WITH_SANITIZE)
        target_compile_options(${TARGET_NAME} PRIVATE -fsanitize=address -g)
        target_link_options(${TARGET_NAME} PRIVATE -fsanitize=address)
    endif()

    if (BUILD_O_FAST)
        target_compile_options(${TARGET_NAME} PRIVATE -Ofast)
        target_link_options(${TARGET_NAME} PRIVATE -Ofast)
    endif()
    if (BUILD_GPROF)
        target_compile_options(${TARGET_NAME} PRIVATE -pg)
        target_link_options(${TARGET_NAME} PRIVATE -pg)
    endif()

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
