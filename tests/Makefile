INSTALL_PREFIX ?= /opt/duetto

install:
	mkdir -p ${INSTALL_PREFIX}/share/duetto/examples/dom
	cp -v dom/dom1.cpp dom/test1.html ${INSTALL_PREFIX}/share/duetto/examples/dom/
	mkdir -p ${INSTALL_PREFIX}/share/duetto/examples/webgl
	cp -v webgl/webgl.cpp webgl/webgl.html ${INSTALL_PREFIX}/share/duetto/examples/webgl/
	cp -v server_stub.cpp deserializer.cpp ${INSTALL_PREFIX}/share/duetto/
