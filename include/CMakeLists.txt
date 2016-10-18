cmake_minimum_required (VERSION 2.6)
project (Cheerp_Utils)

set (CHEERP_PREFIX ${CMAKE_INSTALL_PREFIX})

install (DIRECTORY client common server
	DESTINATION include )
	
