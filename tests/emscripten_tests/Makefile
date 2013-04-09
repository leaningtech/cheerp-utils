include ../tests.make

EMCC=~/Sources/emscripten/emcc

all: primes memops

.PHONY: primes memops

primes: primes-duetto.js primes-emscripten.js

memops: memops-duetto.js memops-emscripten.js

%-emscripten.js: %.cpp
	${EMCC} -O2 $^ -o $@

%-duetto.js: %.js
	sed -e "s/__Z7webMainv/_main/g" -e "s/_sqrt/Math.sqrt/g" -e "s/_printf/print/g" $^ > $@
