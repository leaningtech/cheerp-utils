.PHONY: install, install_server, install_client

INSTALL_PREFIX ?= /opt/duetto

install_client: duetto/client.h duetto/types.h duetto/webgl.h duetto/clientlib.h
	mkdir -p ${INSTALL_PREFIX}/include/duetto/
	cp -v $^ ${INSTALL_PREFIX}/include/duetto/

install_server: server.h
	mkdir -p ${INSTALL_PREFIX}/include/native/
	cp -v $^ ${INSTALL_PREFIX}/include/native/

install: install_client install_server
