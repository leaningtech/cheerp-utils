DUETTO_COMPILER=/opt/duetto/bin/duetto-compiler
CLANG=/opt/duetto/bin/clang

%.js: %.bc
	${DUETTO_COMPILER} $^

%.js: %.cpp
	${CLANG} -target duetto -fno-math-errno -O2 -S $^ -o $@
