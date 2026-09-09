# -----------------------------------------------------------------------------
# Include file for raylib-elfScript sources
#
# defining RAYLIB_ELFSCRIPT_SRC
# -----------------------------------------------------------------------------

# NOTE also need to add target_link_libraries(${PROJECT_NAME} PRIVATE raylib)

if (RAYLIB_FETCH)
    include(FetchContent)

    set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

    if (RAYLIB_GIT_MASTER)
        set(RAY_TAG master)
    else()
        set(RAY_TAG 6.0)
    endif()

    FetchContent_Declare(
        raylib
        GIT_REPOSITORY https://github.com/raysan5/raylib.git
        GIT_TAG        ${RAY_TAG}
    )
    FetchContent_MakeAvailable(raylib)
endif()


set(RAYLIB_ELFSCRIPT_SRC
    # add this to you projects CMake look at demo >>
    #   ${CMAKE_CURRENT_LIST_DIR}/defaultMain.cpp
    ${CMAKE_CURRENT_LIST_DIR}/platformProcess.cpp
    ${CMAKE_CURRENT_LIST_DIR}/ConsoleTypes.cpp
    ${CMAKE_CURRENT_LIST_DIR}/elfBase.cpp
    ${CMAKE_CURRENT_LIST_DIR}/elfCore.cpp
    ${CMAKE_CURRENT_LIST_DIR}/elfEnum.cpp
    ${CMAKE_CURRENT_LIST_DIR}/elfResource.cpp
    ${CMAKE_CURRENT_LIST_DIR}/elfTextures.cpp
    ${CMAKE_CURRENT_LIST_DIR}/elfText.cpp
    ${CMAKE_CURRENT_LIST_DIR}/elfCamera.cpp
    ${CMAKE_CURRENT_LIST_DIR}/elfShapes.cpp
    ${CMAKE_CURRENT_LIST_DIR}/elfModels.cpp
    ${CMAKE_CURRENT_LIST_DIR}/elfAudio.cpp
    ${CMAKE_CURRENT_LIST_DIR}/elfShader.cpp
    ${CMAKE_CURRENT_LIST_DIR}/elfFile.cpp
    ${CMAKE_CURRENT_LIST_DIR}/elfRayMath.cpp
)

if (RAYELF_DEFAULTMAIN)
    list(APPEND RAYLIB_ELFSCRIPT_SRC ${CMAKE_CURRENT_LIST_DIR}/defaultMain.cpp)
    add_compile_definitions(RAYELF_OVERWRITE_WINDOWSHOULDCLOSE)
endif()

if (RAYELF_DEFAULTMAINEVENTS)
    list(APPEND RAYLIB_ELFSCRIPT_SRC ${CMAKE_CURRENT_LIST_DIR}/defaultMainWithEvents.cpp)
endif()

if (RAYELF_DKCONSOLE)
    list(APPEND RAYLIB_ELFSCRIPT_SRC ${CMAKE_CURRENT_LIST_DIR}/consoledk/ConsoleGuiObject.cpp)
endif()

# i need that when adding ImGui!
if (RAYELF_BEGINEND_DRAWING_OVERWRITE)
    add_compile_definitions(BEGIN_END_DRAWING_OVERWRITE)
endif()
