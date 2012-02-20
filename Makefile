all: test.bc

test.bc:
	clang -O2 -emit-llvm test.cpp -c -o test.bc

clean:
	rm -f test.bc
