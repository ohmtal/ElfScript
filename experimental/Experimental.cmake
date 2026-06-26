# Experimental Source Files definition

set(SCRIPT_SRC
    ${CMAKE_CURRENT_LIST_DIR}/script/astAlloc.cpp
    ${CMAKE_CURRENT_LIST_DIR}/script/ast.h
    ${CMAKE_CURRENT_LIST_DIR}/script/astNodes.cpp
    ${CMAKE_CURRENT_LIST_DIR}/script/bison.simple
    ${CMAKE_CURRENT_LIST_DIR}/script/cmdgram.cpp
    ${CMAKE_CURRENT_LIST_DIR}/script/CMDgram.h
    ${CMAKE_CURRENT_LIST_DIR}/script/CMDgram.y
    ${CMAKE_CURRENT_LIST_DIR}/script/CMDscan.cpp
    ${CMAKE_CURRENT_LIST_DIR}/script/CMDscan.l
    ${CMAKE_CURRENT_LIST_DIR}/script/codeBlock.cpp
    ${CMAKE_CURRENT_LIST_DIR}/script/codeBlock.h
    ${CMAKE_CURRENT_LIST_DIR}/script/compiledEval.cpp
    ${CMAKE_CURRENT_LIST_DIR}/script/compiler.cpp
    ${CMAKE_CURRENT_LIST_DIR}/script/compiler.h
    ${CMAKE_CURRENT_LIST_DIR}/script/evalState.cpp
    ${CMAKE_CURRENT_LIST_DIR}/script/evalState.h
    ${CMAKE_CURRENT_LIST_DIR}/script/optimizer.cpp
    ${CMAKE_CURRENT_LIST_DIR}/script/parser.cpp
    ${CMAKE_CURRENT_LIST_DIR}/script/parser.h
    ${CMAKE_CURRENT_LIST_DIR}/script/runtime.cpp
    ${CMAKE_CURRENT_LIST_DIR}/script/runtime.h
)


set(EXPERIMENTAL_SRC
    ${SCRIPT_SRC}
)

