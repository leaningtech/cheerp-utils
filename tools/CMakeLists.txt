cmake_minimum_required (VERSION 2.6)
project (Cheerp_Utils)

set (CHEERP_PREFIX ${CMAKE_INSTALL_PREFIX})

configure_file (
	"${PROJECT_SOURCE_DIR}/Cheerp.cmake.in"
	"${PROJECT_BINARY_DIR}/Cheerp.cmake"
	)
configure_file (
	"${PROJECT_SOURCE_DIR}/CheerpToolchain.cmake.in"
	"${PROJECT_BINARY_DIR}/CheerpToolchain.cmake"
	)

install (FILES "${PROJECT_BINARY_DIR}/Cheerp.cmake"
		DESTINATION share/cmake/Modules )
install (FILES "${PROJECT_BINARY_DIR}/CheerpToolchain.cmake"
		DESTINATION share/cmake/Modules/Platform )
	
