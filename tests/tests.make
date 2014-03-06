CLANG=/opt/duetto/bin/clang++

%.js: %.cpp
	${CLANG} -target duetto -O2 $^ -o $@
