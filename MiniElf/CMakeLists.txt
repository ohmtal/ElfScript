# -----------------------------------------------------------------------------
# Minimal Binding example with lib
# -----------------------------------------------------------------------------
cmake_minimum_required(VERSION 3.24)
# -----------------------------------------------------------------------------
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# -----------------------------------------------------------------------------
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  set(CMAKE_BUILD_TYPE "RelWithDebInfo" CACHE STRING "Choose the type of build." FORCE)
  set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release" "MinSizeRel" "RelWithDebInfo")
endif()
# -----------------------------------------------------------------------------
# Project Sources:
# -----------------------------------------------------------------------------
project(MiniElf)
set(PROJECT_SRC
    src/main.cpp
)

# =============== ElfScript >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
set(ELFSCRIPT_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../" CACHE PATH "Path to ElfScript")
set(ELF_MODULE ${ELFSCRIPT_PATH}/ElfScript)
set(ELF_CMAKE ${ELF_MODULE}/ElfScriptLib.cmake)

 set(ELF_ENABLE_SLIMOBJECT ON)
 set(ELF_ENABLE_FIELDCACHE ON)
 set(ELF_ENABLE_DOC_EXPORTER ON)
 set(ELF_FILE_EXTENSION "elf" CACHE STRING "ElfScript: File extension")
 set(ELF_APP_NAME "MiniElf" CACHE STRING "ElfScript: App-Name used in scripts")
 set(ELF_APP_VERSION "800" CACHE STRING "ElfScript: App-Version used in scripts")
 set(ELF_APP_VERSION_STRING "Version 0.8" CACHE STRING "ElfScript: App-Version String used in scripts")



if(NOT EXISTS ${ELF_CMAKE})
    message(FATAL_ERROR
        "\n ElfScript path is not set or invalid: ${ELFSCRIPT_PATH} "
        "\n Please provide the path using: "
        "\n cmake -B build -DELFSCRIPT_PATH=/path/to/ElfScript"
    )
else()



 include(${ELF_CMAKE})
endif()
# <<<<<<<<<<<<<<<<<<<<<<<<<<<< ElfScript ========================

add_executable(${PROJECT_NAME}
    ${PROJECT_SRC}
)

set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"

    # -- for windows: 
    RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_CURRENT_SOURCE_DIR}"
    RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_CURRENT_SOURCE_DIR}"
)

# NOTE: Important =>
#   "$<LINK_LIBRARY:WHOLE_ARCHIVE,ElfScript>"
# to link the complete library, else 90% of bindings do not work!

target_link_libraries(${PROJECT_NAME} PRIVATE
     # # ElfScript
     "$<LINK_LIBRARY:WHOLE_ARCHIVE,ElfScript>"
)

target_include_directories(${PROJECT_NAME} PRIVATE
  "${ELF_MODULE}"
)

