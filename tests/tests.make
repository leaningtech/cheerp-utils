DUETTO_COMPILER=/opt/duetto/bin/duetto-compiler
CLANG=/opt/duetto/bin/clang

%.js: %.bc
	${DUETTO_COMPILER} $^

%.js: %.cpp
	${CLANG} -target duetto -std=c++11 -fno-math-errno -O2 -S $^ -o $@
