all: test.bc test2.bc

test.bc:
	clang -O2 -emit-llvm test.cpp -c -o test.bc

test2.bc:
	clang -O2 -emit-llvm test2.cpp -c -o test2.bc

clean:
	rm -f test.bc test2.bc
