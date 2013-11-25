.PHONY: install

INSTALL_PREFIX ?= /opt/duetto
DUETTO_PREFIX ?= /opt/duetto

all: libGLESv2.bc

libGLESv2.bc: webgles.bc webglesutils.bc
	${DUETTO_PREFIX}/bin/llvm-link -o $@ $^

%.bc: %.cpp
	${DUETTO_PREFIX}/bin/clang -std=c++11 -c -emit-llvm $^ -o $@ -target duetto -I ../include

install_headers: webgles.h gl2.h
	mkdir -p ${INSTALL_PREFIX}/include/GLES2/
	cp -v $^ ${INSTALL_PREFIX}/include/GLES2/

install_lib: libGLESv2.bc
	mkdir -p ${INSTALL_PREFIX}/lib/
	cp -v $^ ${INSTALL_PREFIX}/lib/

install: install_headers install_lib

clean:
	rm -fv libGLESv2.bc webgles.bc webglesutils.bc
