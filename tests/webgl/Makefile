CLANG=/opt/duetto/bin/clang
DUETTO=/opt/duetto/bin/duetto
LLVMLINK=/opt/duetto/bin/llvm-link
LLVMOPT=/opt/duetto/bin/opt
LLVMDIS=/opt/duetto/bin/llvm-dis
#LLVMTOJS=../emscripten/emscripten.py
LLVMTOJS=/opt/duetto/bin/duetto-compiler

%.bc: %.cpp
	$(CLANG) -fno-exceptions -O2 -I ../../include -std=c++11 -emit-llvm -c $^ -o $@

%-client-base.bc %-server.o: %.bc
	$(DUETTO) $^

%-client-linked.bc: %-client-base.bc
	#cxxlib-holefiller.bc
	#../libstdc++-llvm/string-inst.bc
	$(LLVMLINK) $^ -o $@

%-client.bc: %-client-linked.bc
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
	$(CLANG) -I ../../include -std=c++11 -g -c $^ -o $@

