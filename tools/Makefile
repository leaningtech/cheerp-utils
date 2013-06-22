.PHONY: install

INSTALL_PREFIX ?= /opt/duetto

install: Duetto.cmake DuettoToolchain.cmake
	mkdir -p ${INSTALL_PREFIX}/share/cmake/Modules/Platform
	cp DuettoToolchain.cmake ${INSTALL_PREFIX}/share/cmake/Modules
	cp Duetto.cmake ${INSTALL_PREFIX}/share/cmake/Modules/Platform

