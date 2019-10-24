set(CHEERP 1)

# do not build a test program, trust us
set(CMAKE_C_COMPILER_WORKS 1)
set(CMAKE_CXX_COMPILER_WORKS 1)

set(CMAKE_CROSSCOMPILING TRUE)
set_property(GLOBAL PROPERTY TARGET_SUPPORTS_SHARED_LIBS FALSE)

set(CHEERP_FLAGS "")
set(CHEERP_EXE_FLAGS "")

set(CHEERP_WASM_ENABLE "" CACHE STRING "Comma-separated list of Wasm options to enable")
set(CHEERP_WASM_DISABLE "" CACHE STRING "Comma-separated list of Wasm options to disable")
if(NOT CHEERP_WASM_ENABLE STREQUAL "")
  set(CHEERP_FLAGS "${CHEERP_FLAGS} -cheerp-wasm-enable=${CHEERP_WASM_ENABLE}")
endif()
if(NOT CHEERP_WASM_DISABLE STREQUAL "")
  set(CHEERP_FLAGS "${CHEERP_FLAGS} -cheerp-wasm-disable=${CHEERP_WASM_DISABLE}")
endif()

option(CHEERP_PRETTY_CODE "Generate human-readable JS" OFF)
if(CHEERP_PRETTY_CODE)
  set(CHEERP_EXE_FLAGS "${CHEERP_EXE_FLAGS} -cheerp-pretty-code")
endif()

set(CHEERP_SECONDARY_OUTPUT_FILE "" CACHE STRING "Runtime path of the secondary output file (Wasm module or asm.js memory file)")
set(CHEERP_SECONDARY_OUTPUT_PATH "" CACHE STRING "Name of the secondary output file (Wasm module or asm.js memory file)")
if(NOT CHEERP_SECONDARY_OUTPUT_FILE STREQUAL "")
  set(CHEERP_EXE_FLAGS "${CHEERP_EXE_FLAGS} -cheerp-secondary-output-file=${CHEERP_SECONDARY_OUTPUT_FILE}")
endif()
if(NOT CHEERP_SECONDARY_OUTPUT_PATH STREQUAL "")
  set(CHEERP_EXE_FLAGS "${CHEERP_EXE_FLAGS} -cheerp-secondary-output-path=${CHEERP_SECONDARY_OUTPUT_PATH}")
endif()

set(CHEERP_LINEAR_OUTPUT "" CACHE STRING "Output format for the linear memory part of the program [wasm/wast/asmjs]")
if(NOT CHEERP_LINEAR_OUTPUT STREQUAL "")
  set(CHEERP_EXE_FLAGS "${CHEERP_EXE_FLAGS} -cheerp-linear-output=${CHEERP_LINEAR_OUTPUT}")
endif()

set(CMAKE_STATIC_LIBRARY_SUFFIX ".bc")
set(CMAKE_EXECUTABLE_SUFFIX ".js")

foreach(LANG in LISTS C CXX)
  set(CMAKE_${LANG}_COMPILE_OBJECT "<CMAKE_${LANG}_COMPILER> <DEFINES> <INCLUDES> <FLAGS> -o <OBJECT> -c <SOURCE> ${CHEERP_FLAGS}")
  set(CMAKE_${LANG}_CREATE_STATIC_LIBRARY "<CMAKE_LINKER> <OBJECTS> -o <TARGET>")
  set(CMAKE_${LANG}_LINK_EXECUTABLE "<CMAKE_${LANG}_COMPILER> <FLAGS> <CMAKE_${LANG}_LINK_FLAGS> <LINK_FLAGS> <OBJECTS> -o <TARGET> <LINK_LIBRARIES> ${CHEERP_FLAGS} ${CHEERP_EXE_FLAGS}")
endforeach()

