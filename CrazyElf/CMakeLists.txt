# Testing SDL3 only bindings
# -----------------------------------------------------------------------------
cmake_minimum_required(VERSION 3.24)
# -----------------------------------------------------------------------------
# set(CMAKE_C_COMPILER "clang")
# set(CMAKE_CXX_COMPILER "clang++")
# -----------------------------------------------------------------------------
# Project settings - this is all you have to modify:
# project(baseElf LANGUAGES C CXX)

project(CrazyElf)
set(PROJECT_SRC
    src/main.cpp
    src/pointObjects.cpp
    src/myPlatformProcess.cc
)

set (ASSET_PATH ${CMAKE_CURRENT_LIST_DIR}/assets@assets)
# -----------------------------------------------------------------------------
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# if (EMSCRIPTEN)
#
#     add_link_options(
#         "-sALLOW_MEMORY_GROWTH=1"
#     )
# endif()

# ------------- SDL3
# lazy add
find_package(SDL3 REQUIRED)


# =============== ElfScript >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
set(ELFSCRIPT_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../" CACHE PATH "Path to ElfScript")
set(ELF_MODULE ${ELFSCRIPT_PATH}/ElfScript)
set(ELF_CMAKE ${ELF_MODULE}/ElfScript.cmake)


if(NOT EXISTS ${ELF_CMAKE})
    message(FATAL_ERROR
        "\n ElfScript path is not set or invalid: ${ELFSCRIPT_PATH} "
        "\n Please provide the path using: "
        "\n cmake -B build -DELFSCRIPT_PATH=/path/to/ElfScript"
    )
else()
 include(${ELF_CMAKE})

  set (ELFSCRIPT_INCLUDES
   ${ELF_MODULE}
  )
  # optinal doc exporter
  list(APPEND ELFSCRIPT_SRC ${ELF_MODULE}/addons/console/consoleDocExporter.cpp)

  # SDL3Elf
  list(APPEND ELFSCRIPT_SRC ${ELF_MODULE}/addons/SDL3/SDL3_input.cpp)
  list(APPEND ELFSCRIPT_SRC ${ELF_MODULE}/addons/SDL3/SDL3_Filesystem.cpp)
  list(APPEND ELFSCRIPT_SRC ${ELF_MODULE}/addons/SDL3/ConsoleTypes.cpp)
  list(APPEND ELFSCRIPT_SRC ${ELF_MODULE}/addons/SDL3/SDL3_render.cpp)
  list(APPEND ELFSCRIPT_SRC ${ELF_MODULE}/addons/SDL3/SDL3_core.cpp)
  list(APPEND ELFSCRIPT_SRC ${ELF_MODULE}/addons/SDL3/SDL3_audio.cpp)

    if(UNIX)
      list(APPEND ELFSCRIPT_SRC ${ELF_MODULE}/addons/shellConsole/POSIXConsole.cpp)
    endif()
    list(APPEND ELFSCRIPT_SRC ${ELF_MODULE}/addons/console/consoleDocExporter.cpp)

endif()
# <<<<<<<<<<<<<<<<<<<<<<<<<<<< ElfScript ========================


# ------------- Main
add_executable(${PROJECT_NAME}
    ${PROJECT_SRC}
    ${ELFSCRIPT_SRC}
)


set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"

    # -- for windows: 
    RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_CURRENT_SOURCE_DIR}"
    RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_CURRENT_SOURCE_DIR}"
)

target_include_directories(${PROJECT_NAME} PRIVATE
  "${ELFSCRIPT_INCLUDES}"
  "${ELF_MODULE}/addons/SDL3/"
  "${CMAKE_CURRENT_SOURCE_DIR}/include"
)

target_link_libraries(${PROJECT_NAME} PRIVATE
     SDL3::SDL3
)


# Windows - winVolume :: need to set on all builds 
if(MSVC)
    target_compile_options(${PROJECT_NAME} PRIVATE "/Zc:wchar_t-")
    target_compile_definitions(${PROJECT_NAME} PRIVATE 
        NOMINMAX 
        UNICODE 
        _UNICODE
    )
endif()

# Web Configurations
if (EMSCRIPTEN)

    add_link_options(
        "-sALLOW_MEMORY_GROWTH=1"
    )


    set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME "index" SUFFIX ".html")
    target_link_options(${PROJECT_NAME} PUBLIC --sUSE_SDL=3 PUBLIC --preload-file ${ASSET_PATH} PRIVATE "-lidbfs.js")


    set(TARGET_NAME ${PROJECT_NAME})

    set(CUSTOM_SHELL_FILE "${CMAKE_CURRENT_SOURCE_DIR}/res/minshell.html")
    if(EXISTS "${CUSTOM_SHELL_FILE}")
        target_link_options(${TARGET_NAME} PRIVATE "--shell-file" "${CUSTOM_SHELL_FILE}")
        set_target_properties(${TARGET_NAME} PROPERTIES LINK_DEPENDS "${CUSTOM_SHELL_FILE}")
    endif()

endif()
