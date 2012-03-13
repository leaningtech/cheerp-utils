all: test.bc test2.bc test3.bc

%.bc: %.cpp 
	clang -O2 -emit-llvm $^ -c -o $@

clean:
	rm -f test.bc test2.bc
