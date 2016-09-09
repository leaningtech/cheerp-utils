.PHONY: install

INSTALL_PREFIX ?= /opt/cheerp

install: cheerp-unknown-none-ar  cheerp-unknown-none-ranlib cheerp-unknown-none-gcc cheerp-unknown-none-g++ cheerpconf
	mkdir -p ${INSTALL_PREFIX}/libexec
	cp cheerp-unknown-none-ar  cheerp-unknown-none-ranlib cheerp-unknown-none-gcc cheerp-unknown-none-g++ ${INSTALL_PREFIX}/libexec/
	cp cheerpconf ${INSTALL_PREFIX}/bin/

