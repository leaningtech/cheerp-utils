include ../tests.make

EMCC=~/Sources/emscripten/emcc

all: primes memops copy corrections

.PHONY: primes memops copy corrections

primes: primes-duetto.js primes-emscripten.js

memops: memops-duetto.js memops-emscripten.js

copy: copy-duetto.js copy-emscripten.js

corrections: corrections-duetto.js corrections-emscripten.js

%-emscripten.js: %.cpp
	${EMCC} -O2 $^ -o $@

%-duetto.js: %.js
	sed -e "s/__Z7webMainv/_main/g" -e "s/_sqrt/Math.sqrt/g" -e "s/_printf/print/g" $^ > $@
