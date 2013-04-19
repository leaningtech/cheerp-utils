DUETTO_COMPILER=/opt/duetto/bin/duetto-compiler
CLANG=/opt/duetto/bin/clang

%.js: %.bc
	${DUETTO_COMPILER} $^

%.bc: %.cpp
	#O3 is actually what is used by EMCC
	${CLANG} -O3 -emit-llvm -m32 -c $^ -o $@
