# -----------------------------------------------------------------------------
# Minimal Binding example with lib
# -----------------------------------------------------------------------------
cmake_minimum_required(VERSION 3.24)
# -----------------------------------------------------------------------------
project(MiniElf)
set(PROJECT_SRC
    src/main.cpp
)
# -----------------------------------------------------------------------------
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# =============== ElfScript >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
set(ELFSCRIPT_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../" CACHE PATH "Path to ElfScript")
set(ELF_MODULE ${ELFSCRIPT_PATH}/ElfScript)
set(ELF_CMAKE ${ELF_MODULE}/ElfScriptLib.cmake)

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

target_link_libraries(${PROJECT_NAME} PRIVATE
     ElfScript
)

target_include_directories(${PROJECT_NAME} PRIVATE
  "${ELF_MODULE}"
)

