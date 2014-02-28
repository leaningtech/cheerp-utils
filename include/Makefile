.PHONY: install, install_server, install_client

INSTALL_PREFIX ?= /opt/duetto

install_client: client/client.h client/types.h client/webgl.h client/clientlib.h client/int64utils.h
	mkdir -p ${INSTALL_PREFIX}/include/client/duetto/
	cp -v $^ ${INSTALL_PREFIX}/include/client/duetto/

install_server: server/server.h
	mkdir -p ${INSTALL_PREFIX}/include/server/duetto/
	cp -v $^ ${INSTALL_PREFIX}/include/server/duetto/

install: install_client install_server
