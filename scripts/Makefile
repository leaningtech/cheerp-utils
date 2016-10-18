.PHONY: install

INSTALL_PREFIX ?= /opt/cheerp

install: cheerp-unknown-none-ar  cheerp-unknown-none-ranlib cheerp-unknown-none-gcc cheerp-unknown-none-g++ cheerpwrap.gen
	mkdir -p ${INSTALL_PREFIX}/bin
	mkdir -p ${INSTALL_PREFIX}/libexec
	cp cheerp-unknown-none-ar  cheerp-unknown-none-ranlib cheerp-unknown-none-gcc cheerp-unknown-none-g++ ${INSTALL_PREFIX}/libexec/
	sh cheerpwrap.gen ${INSTALL_PREFIX} > ${INSTALL_PREFIX}/bin/cheerpwrap

