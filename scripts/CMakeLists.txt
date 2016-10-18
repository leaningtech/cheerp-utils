cmake_minimum_required (VERSION 2.6)
project (Cheerp_Utils)

set (CHEERP_PREFIX ${CMAKE_INSTALL_PREFIX})

configure_file (
	"${PROJECT_SOURCE_DIR}/cheerpwrap.in"
	"${PROJECT_BINARY_DIR}/cheerpwrap"
	)

install (PROGRAMS "${PROJECT_BINARY_DIR}/cheerpwrap"
	DESTINATION bin)
install (PROGRAMS
		cheerp-unknown-none-ar
		cheerp-unknown-none-g++
		cheerp-unknown-none-gcc
		cheerp-unknown-none-ranlib
	DESTINATION libexec )
	
