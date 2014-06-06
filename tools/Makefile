.PHONY: install

INSTALL_PREFIX ?= /opt/cheerp

install: cmake/Cheerp.cmake cmake/CheerpToolchain.cmake
	mkdir -p ${INSTALL_PREFIX}/share/cmake/Modules/Platform
	cp cmake/CheerpToolchain.cmake ${INSTALL_PREFIX}/share/cmake/Modules
	cp cmake/Cheerp.cmake ${INSTALL_PREFIX}/share/cmake/Modules/Platform

