cmake_minimum_required (VERSION 2.6)
project (Cheerp_Utils LANGUAGES)

set (CHEERP_PREFIX ${CMAKE_INSTALL_PREFIX} CACHE FILEPATH "set cheerp installation prefix")
execute_process(COMMAND "${CMAKE_INSTALL_PREFIX}/bin/clang" --version
                OUTPUT_VARIABLE CMAKE_CHEERP_RAW_VERSION)
message(WARNING "Cheerp raw version string ${CMAKE_CHEERP_RAW_VERSION}")
string(REGEX MATCH "[0-9]+\\.[0-9]+\\.[0-9]+"
        CHEERP_VERSION
        "${CMAKE_CHEERP_RAW_VERSION}")
message(WARNING "Cheerp version match ${CHEERP_VERSION}")

# scripts
configure_file (
	"scripts/cheerpwrap.in"
	"${PROJECT_BINARY_DIR}/cheerpwrap"
	)

install (PROGRAMS "${PROJECT_BINARY_DIR}/cheerpwrap"
	DESTINATION bin)
install (PROGRAMS
		scripts/cheerp-unknown-none-g++
		scripts/cheerp-unknown-none-gcc
		scripts/wasm32-unknown-none-g++
		scripts/wasm32-unknown-none-gcc
		scripts/wasm32-unknown-wasi-g++
		scripts/wasm32-unknown-wasi-gcc
	DESTINATION libexec )
	
# tools
SET(toolchain_files_templates
	"tools/CheerpCommon.cmake.in"
	)
foreach(toolchain_file ${toolchain_files_templates})
	get_filename_component(base ${toolchain_file} NAME_WE)
	configure_file (
		${toolchain_file}
		"${PROJECT_BINARY_DIR}/${base}.cmake"
		@ONLY
		)
	install (FILES "${PROJECT_BINARY_DIR}/${base}.cmake"
			DESTINATION share/cmake/Modules/)
endforeach()
install (FILES
	"tools/CheerpToolchain.cmake"
	"tools/CheerpWasmToolchain.cmake"
	"tools/CheerpWasiToolchain.cmake"
		DESTINATION share/cmake/Modules/)
install (FILES
	"tools/Cheerp.cmake"
		DESTINATION share/cmake/Modules/Platform)

# tests
install (FILES tests/dom/dom1.cpp tests/dom/test1.html
	DESTINATION share/cheerp/examples/dom )

install (FILES tests/webgl/webgl.cpp tests/webgl/webgl.html
	DESTINATION share/cheerp/examples/webgl )

# include
install (DIRECTORY include/client/
	DESTINATION include/client/cheerp )
