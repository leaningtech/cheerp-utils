all: test.bc test2.bc test3.bc

%.bc: %.cpp 
	clang -O2 -emit-llvm $^ -c -o $@ -I include

clean:
	rm -f test.bc test2.bc
