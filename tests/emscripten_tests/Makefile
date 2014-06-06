EMCC=~/Sources/emscripten/emcc
CLOSURE=../../closure/compiler.jar

all: primes memops copy corrections fannkuch fasta

.PHONY: primes memops copy corrections fannkuch fasta

primes: primes-cheerp.js primes-emscripten.js primes-asm.js primes-native

memops: memops-cheerp.js memops-emscripten.js memops-asm.js memops-native

copy: copy-cheerp.js copy-emscripten.js copy-asm.js copy-native

corrections: corrections-cheerp.js corrections-emscripten.js corrections-asm.js corrections-native

fannkuch: fannkuch-emscripten.js fannkuch-cheerp.js fannkuch-asm.js fannkuch-native

fasta: fasta-emscripten.js fasta-cheerp.js fasta-asm.js fasta-native

%-native: %.cpp
	clang++ -fno-math-errno -O2 $^ -o $@

%-emscripten.js: %.cpp
	${EMCC} -O2 $^ -o $@

%-asm.js: %.cpp
	${EMCC} -s ASM_JS=1 -O2 $^ -o $@

%-cheerp.js: %.js
	sed -i -e "s/__Z7webMainv();/_main();/g" -e "s/_sqrt/Math.sqrt/g" -e "s/_printf/print/g" -e "s/_puts(/print(/g" $^
	java -jar ${CLOSURE} $^ > $@

clean:
	rm -fv primes-cheerp.js primes-emscripten.js primes-asm.js primes-native memops-cheerp.js memops-emscripten.js memops-asm.js memops-native copy-cheerp.js copy-emscripten.js copy-asm.js copy-native  corrections-cheerp.js corrections-emscripten.js corrections-asm.js corrections-native fannkuch-emscripten.js fannkuch-cheerp.js fannkuch-asm.js fannkuch-native fasta-emscripten.js fasta-cheerp.js fasta-asm.js fasta-native
