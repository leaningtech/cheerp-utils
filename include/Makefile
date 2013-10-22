.PHONY: install

INSTALL_PREFIX ?= /opt/duetto

install: client.h types.h webgl.h
	mkdir -p ${INSTALL_PREFIX}/include/duetto
	cp -v $^ ${INSTALL_PREFIX}/include/duetto
