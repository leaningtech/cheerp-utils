.PHONY: install

INSTALL_PREFIX ?= /opt/duetto

install: cmake/Duetto.cmake cmake/DuettoToolchain.cmake
	mkdir -p ${INSTALL_PREFIX}/share/cmake/Modules/Platform
	cp cmake/DuettoToolchain.cmake ${INSTALL_PREFIX}/share/cmake/Modules
	cp cmake/Duetto.cmake ${INSTALL_PREFIX}/share/cmake/Modules/Platform

