INSTALL_PREFIX ?= /opt/cheerp

install:
	mkdir -p ${INSTALL_PREFIX}/share/cheerp/examples/dom
	cp -v dom/dom1.cpp dom/test1.html ${INSTALL_PREFIX}/share/cheerp/examples/dom/
	mkdir -p ${INSTALL_PREFIX}/share/cheerp/examples/webgl
	cp -v webgl/webgl.cpp webgl/webgl.html ${INSTALL_PREFIX}/share/cheerp/examples/webgl/
	cp -v cheerp_server_stub.cpp cheerp_pion_main.cpp deserializer.cpp ${INSTALL_PREFIX}/share/cheerp/
