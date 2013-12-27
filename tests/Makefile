CLANG=/opt/duetto/bin/clang
DUETTO=/opt/duetto/bin/duetto
LLVMLINK=/opt/duetto/bin/llvm-link
LLVMOPT=/opt/duetto/bin/opt
LLVMDIS=/opt/duetto/bin/llvm-dis
LLVMTOJS=../llvm/build/bin/duetto-compiler

INSTALL_PREFIX ?= /opt/duetto

all: server1-client.js server1 server2-client.js server2 server3-client.js server3 tictactoe

%.bc: %.cpp
	$(CLANG) -O2 -target duetto -std=c++11 -emit-llvm -c $^ -o $@

%-client-base.bc %-server.o: %.bc
	$(DUETTO) $^

%-client.bc: %-client-base.bc
	$(LLVMOPT) -O2 -std-link-opts $^ -o $@

%-client.ll: %-client.bc
	$(LLVMDIS) $^ -o $@

cxxlib-holefiller.bc: cxxlib-holefiller.cpp
	$(CLANG) -std=c++11 -emit-llvm -c $^ -o $@

%.js: %.ll
	$(LLVMTOJS) $^ -o $@

#NOTE: boost asio seems to be not supported by clang with c++11
server_stub.o: server_stub.cpp
	$(CLANG) -g -c $^ -o $@

%.o: %.cpp
	$(CLANG) -I ../include -std=c++11 -g -c $^ -o $@

server1: server1-server.o server_stub.o deserializer.o
	$(CLANG) -g -lboost_thread -lboost_system -lpion-net-4.0 -lpion-common-4.0 -llog4cpp $^ -o $@

server2: server2-server.o server_stub.o deserializer.o
	$(CLANG) -g -lboost_thread -lboost_system -lpion-net-4.0 -lpion-common-4.0 -llog4cpp $^ -o $@

server3: server3-server.o server_stub.o deserializer.o
	$(CLANG) -g -lboost_thread -lboost_system -lpion-net-4.0 -lpion-common-4.0 -llog4cpp $^ -o $@

tictactoe: tictactoe-server.o server_stub.o deserializer.o
	$(CLANG) -g -lboost_thread -lboost_system -lpion-net-4.0 -lpion-common-4.0 -llog4cpp $^ -o $@

install:
	mkdir -p ${INSTALL_PREFIX}/share/duetto/examples/dom
	cp -v dom/dom1.cpp dom/test1.html ${INSTALL_PREFIX}/share/duetto/examples/dom/
	mkdir -p ${INSTALL_PREFIX}/share/duetto/examples/webgl
	cp -v webgl/webgl.cpp webgl/webgl.html webgl/webgl-util.js ${INSTALL_PREFIX}/share/duetto/examples/webgl/
	cp -v server_stub.cpp deserializer.cpp ${INSTALL_PREFIX}/share/duetto/
