.PHONY: install

INSTALL_PREFIX ?= /opt/duetto

install: duetto/client.h duetto/types.h duetto/webgl.h duetto/clientlib.h
	mkdir -p ${INSTALL_PREFIX}/include/duetto
	cp -v $^ ${INSTALL_PREFIX}/include/
