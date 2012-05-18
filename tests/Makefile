CLANG=/opt/duetto/bin/clang
DUETTO=/opt/duetto/bin/duetto
EMSCRIPTEN=../emscripten/emscripten.py

all: server1-client.js

%.bc: %.cpp
	$(CLANG) -I ../include -std=c++11 -emit-llvm -c $^ -o $@

%-client.ll: %.bc
	$(DUETTO) $^

%.js: %.ll
	$(EMSCRIPTEN) $^ -o $@

server_stub.o: server_stub.cpp
	$(CLANG) -g -c $^ -o $@

server1: server1-server.o server_stub.o
	$(CLANG) -g -lboost_thread -lboost_system -lpion-net-4.0 -lpion-common-4.0 -llog4cpp $^ -o $@
