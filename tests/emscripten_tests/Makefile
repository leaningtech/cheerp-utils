include ../tests.make

EMCC=~/Sources/emscripten/emcc

all: primes-duetto.js primes-emscripten.js

primes-emscripten.js: primes.cpp
	${EMCC} -O1 $^ -o $@

primes-duetto.js: primes.js
	sed -e "s/__Z7webMainv/_main/g" -e "s/_sqrt/Math.sqrt/g" -e "s/_printf/print/g" $^ > $@
