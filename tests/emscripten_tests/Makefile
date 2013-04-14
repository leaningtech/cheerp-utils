include ../tests.make

EMCC=~/Sources/emscripten/emcc
CLOSURE=../../closure/compiler.jar

all: primes memops copy corrections fannkuch fasta

.PHONY: primes memops copy corrections fannkuch fasta

primes: primes-duetto.js primes-emscripten.js primes-native

memops: memops-duetto.js memops-emscripten.js memops-native

copy: copy-duetto.js copy-emscripten.js copy-native

corrections: corrections-duetto.js corrections-emscripten.js corrections-native

fannkuch: fannkuch-emscripten.js fannkuch-duetto.js fannkuch-native

fasta: fasta-emscripten.js fasta-duetto.js fasta-native

%-native: %.cpp
	clang++ -O2 $^ -o $@

%-emscripten.js: %.cpp
	${EMCC} -O2 $^ -o $@

%-duetto.js: %.js
	java -jar ${CLOSURE} $^ > $@
	sed -i -e "s/__Z7webMainv();/_main();/g" -e "s/_sqrt/Math.sqrt/g" -e "s/_printf/print/g" -e "s/_puts(/print(/g" $@
