.PHONY: install, install_server, install_client

INSTALL_PREFIX ?= /opt/cheerp

install_client: client/client.h client/jsobject.h client/types.h client/webgl.h client/clientlib.h client/int64utils.h
	mkdir -p ${INSTALL_PREFIX}/include/client/cheerp/
	cp -v $^ ${INSTALL_PREFIX}/include/client/cheerp/

install_server: server/server.h server/connection.h
	mkdir -p ${INSTALL_PREFIX}/include/server/cheerp/
	cp -v $^ ${INSTALL_PREFIX}/include/server/cheerp/

install_common: common/promise.h
	mkdir -p ${INSTALL_PREFIX}/include/common/cheerp/
	cp -v $^ ${INSTALL_PREFIX}/include/common/cheerp/

install: install_client install_server install_common
