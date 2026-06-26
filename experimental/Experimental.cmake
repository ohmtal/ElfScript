# Experimental Source Files definition

set(SCRIPT_SRC
    ${CMAKE_CURRENT_LIST_DIR}/torquescript/astAlloc.cpp
    ${CMAKE_CURRENT_LIST_DIR}/torquescript/ast.h
    ${CMAKE_CURRENT_LIST_DIR}/torquescript/astNodes.cpp
    ${CMAKE_CURRENT_LIST_DIR}/torquescript/bison.simple
    ${CMAKE_CURRENT_LIST_DIR}/torquescript/cmdgram.cpp
    ${CMAKE_CURRENT_LIST_DIR}/torquescript/CMDgram.h
    ${CMAKE_CURRENT_LIST_DIR}/torquescript/CMDgram.y
    ${CMAKE_CURRENT_LIST_DIR}/torquescript/CMDscan.cpp
    ${CMAKE_CURRENT_LIST_DIR}/torquescript/CMDscan.l
    ${CMAKE_CURRENT_LIST_DIR}/torquescript/codeBlock.cpp
    ${CMAKE_CURRENT_LIST_DIR}/torquescript/codeBlock.h
    ${CMAKE_CURRENT_LIST_DIR}/torquescript/compiledEval.cpp
    ${CMAKE_CURRENT_LIST_DIR}/torquescript/compiler.cpp
    ${CMAKE_CURRENT_LIST_DIR}/torquescript/compiler.h
    ${CMAKE_CURRENT_LIST_DIR}/torquescript/evalState.cpp
    ${CMAKE_CURRENT_LIST_DIR}/torquescript/evalState.h
    ${CMAKE_CURRENT_LIST_DIR}/torquescript/optimizer.cpp
    ${CMAKE_CURRENT_LIST_DIR}/torquescript/parser.cpp
    ${CMAKE_CURRENT_LIST_DIR}/torquescript/parser.h
    ${CMAKE_CURRENT_LIST_DIR}/torquescript/runtime.cpp
    ${CMAKE_CURRENT_LIST_DIR}/torquescript/runtime.h
)


set(EXPERIMENTAL_SRC
    ${SCRIPT_SRC}
)

