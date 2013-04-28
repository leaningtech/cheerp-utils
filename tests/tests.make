DUETTO_COMPILER=/opt/duetto/bin/duetto-compiler
CLANG=/opt/duetto/bin/clang

%.js: %.bc
	${DUETTO_COMPILER} $^

%.bc: %.cpp
	#O3 is actually what is used by EMCC
	${CLANG} -std=c++11 ${TEST_CFLAGS} -O3 -emit-llvm -m32 -c $^ -o $@
