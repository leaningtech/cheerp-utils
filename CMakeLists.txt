cmake_minimum_required (VERSION 2.6)
project (Cheerp_Utils)

set (CHEERP_PREFIX ${CMAKE_INSTALL_PREFIX} CACHE FILEPATH "set cheerp installation prefix")

# scripts
configure_file (
	"scripts/cheerpwrap.in"
	"${PROJECT_BINARY_DIR}/cheerpwrap"
	)

install (PROGRAMS "${PROJECT_BINARY_DIR}/cheerpwrap"
	DESTINATION bin)
install (PROGRAMS
		scripts/cheerp-unknown-none-ar
		scripts/cheerp-unknown-none-g++
		scripts/cheerp-unknown-none-gcc
		scripts/cheerp-unknown-none-ranlib
	DESTINATION libexec )
	
# tools
configure_file (
	"tools/Cheerp.cmake.in"
	"${PROJECT_BINARY_DIR}/Cheerp.cmake"
	)
configure_file (
	"tools/CheerpToolchain.cmake.in"
	"${PROJECT_BINARY_DIR}/CheerpToolchain.cmake"
	)

install (FILES "${PROJECT_BINARY_DIR}/Cheerp.cmake"
		DESTINATION share/cmake/Modules )
install (FILES "${PROJECT_BINARY_DIR}/CheerpToolchain.cmake"
		DESTINATION share/cmake/Modules/Platform )

# tests
install (FILES tests/dom/dom1.cpp tests/dom/test1.html
	DESTINATION share/cheerp/examples/dom )

install (FILES tests/webgl/webgl.cpp tests/webgl/webgl.html
	DESTINATION share/cheerp/examples/webgl )

install (FILES tests/cheerp_server_stub.cpp tests/cheerp_pion_main.cpp tests/deserializer.cpp
	DESTINATION share/cheerp/ )

# include
install (DIRECTORY include/client/
	DESTINATION include/client/cheerp )
install (DIRECTORY include/server/
	DESTINATION include/server/cheerp )
install (DIRECTORY include/common/
	DESTINATION include/common/cheerp )
