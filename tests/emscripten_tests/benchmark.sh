#!/bin/sh

V8=../../v8/out/native/d8
SM=$HOME/Sources/mozilla-central-afb7995ef276/js/src/js
TEST=$1

rm -f benchmark-data-${TEST}-*

echo Benchmarking $TEST-Duetto on V8
count=0;
while [ $count -lt 10 ]
do
	time -f "%e" -a -o benchmark-data-${TEST}-duetto-v8 $V8 $TEST-duetto.js
	count=$(($count+1))
done

echo Benchmarking $TEST-Emscripten on V8
count=0;
while [ $count -lt 10 ]
do
	time -f "%e" -a -o benchmark-data-${TEST}-emscripten-v8 $V8 $TEST-emscripten.js
	count=$(($count+1))
done

echo Benchmarking $TEST-Duetto on SpiderMonkey
count=0;
while [ $count -lt 10 ]
do
	time -f "%e" -a -o benchmark-data-${TEST}-duetto-spidermonkey $SM --no-baseline --no-ion $TEST-duetto.js
	count=$(($count+1))
done

echo Benchmarking $TEST-Emscripten on SpiderMonkey
count=0;
while [ $count -lt 10 ]
do
	time -f "%e" -a -o benchmark-data-${TEST}-emscripten-spidermonkey $SM --no-baseline --no-ion $TEST-emscripten.js
	count=$(($count+1))
done

echo Benchmarking $TEST-Asm.js on SpiderMonkey
count=0;
while [ $count -lt 10 ]
do
	time -f "%e" -a -o benchmark-data-${TEST}-asm.js-spidermonkey $SM --no-baseline --no-ion $TEST-asm.js
	count=$(($count+1))
done

echo Benchmarking $TEST-Native
count=0;
while [ $count -lt 10 ]
do
	time -f "%e" -a -o benchmark-data-${TEST}-native ./${TEST}-native
	count=$(($count+1))
done


