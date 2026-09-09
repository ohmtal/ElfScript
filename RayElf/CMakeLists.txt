# -----------------------------------------------------------------------------
# Minimal Binding example with lib
# -----------------------------------------------------------------------------
cmake_minimum_required(VERSION 3.24)
# -----------------------------------------------------------------------------
project(RayElf)
set(PROJECT_SRC
    src/main.cpp
)
# -----------------------------------------------------------------------------
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# =============== ElfScript >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
set(ELFSCRIPT_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../" CACHE PATH "Path to ElfScript")
set(ELF_MODULE ${ELFSCRIPT_PATH}/ElfScript)
# FIXME lib does not work correctly - a lot of functions are not bound
# set(ELF_CMAKE ${ELF_MODULE}/ElfScriptLib.cmake)
set(ELF_CMAKE ${ELF_MODULE}/ElfScript.cmake)
set(RAYELF_CMAKE ${ELF_MODULE}/addons/raylib/raylib-elfscript.cmake)

if(NOT EXISTS ${ELF_CMAKE})
    message(FATAL_ERROR
        "\n ElfScript path is not set or invalid: ${ELFSCRIPT_PATH} "
        "\n Please provide the path using: "
        "\n cmake -B build -DELFSCRIPT_PATH=/path/to/ElfScript"
    )
else()

 set(RAYLIB_FETCH ON)
 set(RAYELF_DEFAULTMAIN ON)
 set(RAYELF_DKCONSOLE ON)
 set(ELF_ENABLE_CONSOLE_VECTOR ON)
 set(ELF_ENABLE_SLIMOBJECT ON)
 set(ELF_ENABLE_FIELDCACHE ON)
 set(ELF_ENABLE_DOC_EXPORTER ON)
 set(ELF_FILE_EXTENSION "elf" CACHE STRING "ElfScript: File extension")
 set(ELF_APP_NAME "raylib-elfScript" CACHE STRING "ElfScript: App-Name used in scripts")
 set(ELF_APP_VERSION "800" CACHE STRING "ElfScript: App-Version used in scripts")
 set(ELF_APP_VERSION_STRING "Version 0.8" CACHE STRING "ElfScript: App-Version String used in scripts")


 include(${ELF_CMAKE})
 include(${RAYELF_CMAKE})
endif()
# <<<<<<<<<<<<<<<<<<<<<<<<<<<< ElfScript ========================

add_executable(${PROJECT_NAME}
    ${PROJECT_SRC}
    ${ELFSCRIPT_SRC}
    ${RAYLIB_ELFSCRIPT_SRC}
)

set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"

    # -- for windows: 
    RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_CURRENT_SOURCE_DIR}"
    RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_CURRENT_SOURCE_DIR}"
)

target_link_libraries(${PROJECT_NAME} PRIVATE
     # ElfScript
     raylib
)

target_include_directories(${PROJECT_NAME} PRIVATE
  "${ELF_MODULE}"
)

