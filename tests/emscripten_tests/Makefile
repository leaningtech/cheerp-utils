include ../tests.make

EMCC=~/Sources/emscripten/emcc

all: primes memops copy corrections

.PHONY: primes memops copy corrections fannkuch fasta

primes: primes-duetto.js primes-emscripten.js

memops: memops-duetto.js memops-emscripten.js

copy: copy-duetto.js copy-emscripten.js

corrections: corrections-duetto.js corrections-emscripten.js

fannkuch: fannkuch-emscripten.js fannkuch-duetto.js

fasta: fasta-emscripten.js fasta-duetto.js

%-emscripten.js: %.cpp
	${EMCC} -O2 $^ -o $@

%-duetto.js: %.js
	sed -e "s/__Z7webMainv();/arguments.unshift(null);_main(arguments.length,{d:arguments,o:0});/g" -e "s/_sqrt/Math.sqrt/g" -e "s/_printf/print/g" -e "s/_atoi/parseInt/g" -e "s/_puts(/print(/g" $^ > $@
