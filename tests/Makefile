CLANG=/opt/duetto/bin/clang
DUETTO=/opt/duetto/bin/duetto
LLVMLINK=/opt/duetto/bin/llvm-link
LLVMOPT=/opt/duetto/bin/opt
LLVMDIS=/opt/duetto/bin/llvm-dis
EMSCRIPTEN=../emscripten/emscripten.py

all: server1-client.js server1 server2-client.js server2

%.bc: %.cpp
	$(CLANG) -O2 -I ../include -std=c++11 -emit-llvm -c $^ -o $@

%-client-base.bc %-server.o: %.bc
	$(DUETTO) $^

%-client-linked.bc: %-client-base.bc cxxlib-holefiller.bc ../libstdc++-llvm/string-inst.bc
	$(LLVMLINK) $^ -o $@

%-client.bc: %-client-linked.bc
	$(LLVMOPT) -O2 -std-link-opts $^ -o $@

%-client.ll: %-client.bc
	$(LLVMDIS) $^ -o $@

cxxlib-holefiller.bc: cxxlib-holefiller.cpp
	$(CLANG) -std=c++11 -emit-llvm -c $^ -o $@

%.js: %.ll
	$(EMSCRIPTEN) $^ -o $@

#NOTE: boost asio seems to be not supported by clang with c++11
server_stub.o: server_stub.cpp
	$(CLANG) -g -c $^ -o $@

%.o: %.cpp
	$(CLANG) -I ../include -std=c++11 -g -c $^ -o $@

server1: server1-server.o server_stub.o deserializer.o
	$(CLANG) -g -lboost_thread -lboost_system -lpion-net-4.0 -lpion-common-4.0 -llog4cpp $^ -o $@

server2: server2-server.o server_stub.o deserializer.o
	$(CLANG) -g -lboost_thread -lboost_system -lpion-net-4.0 -lpion-common-4.0 -llog4cpp $^ -o $@
