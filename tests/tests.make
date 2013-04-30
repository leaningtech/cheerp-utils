DUETTO_COMPILER=/opt/duetto/bin/duetto-compiler
CLANG=/opt/duetto/bin/clang

%.js: %.bc
	${DUETTO_COMPILER} $^

%.js: %.cpp
	#O3 is actually what is used by EMCC
	${CLANG} -target duetto -std=c++11 -O3 -S $^ -o $@
