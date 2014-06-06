CLANG=/opt/cheerp/bin/clang++

%.js: %.cpp
	${CLANG} -target cheerp -O2 $^ -o $@
