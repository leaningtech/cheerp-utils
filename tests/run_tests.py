#!/usr/bin/python3

import subprocess
import sys
import os
import re
import concurrent.futures
from optparse import OptionParser
from xml.sax.saxutils import escape

parser = OptionParser()
parser.add_option("-O", dest="optlevel", help="Optimization level (default -O1)", action="store", type="int", default=1 )
parser.add_option("-j", dest="jobs", help="Number of jobs (default 1)", action="store", type="int", default=1 )
parser.add_option("--keep", dest="keep_logs", help="Don't delete log files for individual tests",
	action="store_true", default=False)
parser.add_option("--prefix",dest="prefix", help="Keep the generated output for each test, with the name prefix_testname.js", action="store")
parser.add_option("--asmjs",dest="asmjs", help="Run the tests in asmjs mode", action="store_true", default=False)
parser.add_option("--genericjs",dest="genericjs", help="Run the tests in genericjs mode", action="store_true", default=False)
parser.add_option("--wasm", dest="wasm", help="Run the tests in wasm mode",
	action="store_true", default=False)
parser.add_option("--preexecute",dest="preexecute", help="Run the tests inside PreExecuter", action="store_true", default=False)
parser.add_option("--preexecute-asmjs",dest="preexecute_asmjs", help="Run the tests inside PreExecuter in asmjs mode", action="store_true", default=False)
parser.add_option("--all",dest="all", help="Run all the test kinds [genericjs/asmjs/wasm/preexecute]", action="store_true", default=False)
parser.add_option("--pretty-code",dest="pretty_code", help="Compile with -cheerp-pretty-code", action="store_true", default=False)
parser.add_option("--no-lto",dest="no_lto", help="Compile with -cheerp-no-lto", action="store_true", default=False)
(option, args) = parser.parse_args()

if option.all:
	option.asmjs = True
	option.genericjs = True
	option.wasm = True
	option.preexecute = True
	option.preexecute_asmjs = True

if len(args) < 2:
	print("Usage: %s <compiler> <js engine>\n" % sys.argv[0]);
	exit(1);

clang = args[0]
jsEngine = args[1]
optlevel = option.optlevel
prefix = option.prefix
jobs = option.jobs
asmjs = option.asmjs
wasm = option.wasm

pre_executer_tests = ['unit/downcast/test1.cpp',
	 'unit/virtual/test1.cpp',
		'unit/virtual/test2.cpp',
		'unit/virtual/test3.cpp',
		'unit/virtual/rtti.cpp',
	 'unit/memory/test1.cpp','unit/memory/test2.cpp','unit/memory/test3.cpp',
		'unit/memory/test4.cpp','unit/memory/test5.cpp','unit/memory/test6.cpp',
		'unit/memory/test7.cpp','unit/memory/test8.cpp',
	 'unit/std/test1.cpp','unit/std/test2.cpp','unit/std/test3.cpp',
		'unit/std/test4.cpp','unit/std/test5.cpp','unit/std/test6.cpp',
		'unit/std/test7.cpp','unit/std/test8.cpp','unit/std/test9.cpp',
		'unit/std/stringassign.cpp', 'unit/std/sscanf.cpp',
		'unit/std/stdmemfuncs.cpp','unit/std/sort.cpp','unit/std/mapdestruction.cpp',
	 'unit/bitfield/test1.cpp','unit/bitfield/test2.cpp','unit/bitfield/test3.cpp',
		 'unit/bitfield/test4.cpp','unit/bitfield/test5.cpp',
	 'unit/types/test1.cpp','unit/types/test2.cpp','unit/types/test4.cpp',
		'unit/types/test5.cpp','unit/types/test6.cpp',
		'unit/types/test8.cpp','unit/types/test9.cpp','unit/types/test10.cpp',
		'unit/types/test11.cpp','unit/types/test12.cpp','unit/types/test13.cpp',
		'unit/types/test14.cpp','unit/types/test16.cpp','unit/types/cinheritance.cpp',
		'unit/types/memberfunctions.cpp',
	 'unit/globals/test1.cpp','unit/globals/test2.cpp','unit/globals/test3.cpp','unit/globals/test4.cpp',
		'unit/globals/test5.cpp','unit/globals/test6.cpp',
	 'unit/codegen/test1.cpp','unit/codegen/test3.cpp','unit/codegen/test4.cpp',
		 'unit/codegen/test5.cpp','unit/codegen/test6.cpp','unit/codegen/test7.cpp',
		 'unit/codegen/test8.cpp','unit/codegen/test9.cpp','unit/codegen/test10.cpp',
		 'unit/codegen/test11.cpp','unit/codegen/test13.cpp',
		 'unit/codegen/test14.cpp','unit/codegen/test15.cpp','unit/codegen/test16.cpp',
		 'unit/codegen/test17.cpp','unit/codegen/test18.cpp', 'unit/codegen/test19.cpp',
		 'unit/codegen/test21.cpp','unit/codegen/test22.cpp',
		 'unit/codegen/test23.cpp','unit/codegen/test24.cpp','unit/codegen/bswap.cpp',
		 'unit/codegen/64bitenum.cpp','unit/codegen/64bitpointerarith.cpp',
         'unit/codegen/variadic.cpp', 'unit/static/test1.cpp']
common_tests = pre_executer_tests + [
		'unit/std/gettimeofday.cpp','unit/std/chrono.cpp',
		]
genericjs_tests = common_tests + [
		'unit/dom/test1.cpp','unit/dom/test2.cpp','unit/dom/test3.cpp','unit/dom/test4.cpp',
		'unit/dom/test5.cpp','unit/dom/test6.cpp','unit/dom/test7.cpp',
		'unit/dom/test8.cpp','unit/dom/noconstructor.cpp',
		'unit/memory/typedarrays_operator.cpp',
		'unit/std/stringhashing.cpp',
		'unit/types/test7.cpp',
		'unit/codegen/test20.cpp',
		'unit/codegen/escapes.cpp',
		'unit/std/tostring.cpp','unit/codegen/test2.cpp','unit/codegen/test12.cpp',
	 ]
asmjs_tests = common_tests + [
		'unit/ffi/test1.cpp',
        'unit/std/malloc.cpp'
		]
wasm_tests = asmjs_tests

selected_tests = set()

# Determine if we want to run a select number of test, or all tests.
if args[2:]:
	selected_tests = args[2:]
else:
	if option.preexecute or option.preexecute_asmjs:
		selected_tests |= set(pre_executer_tests)
	if option.asmjs:
		selected_tests |= set(asmjs_tests)
	if option.wasm:
		selected_tests |= set(wasm_tests)
	if option.genericjs:
		selected_tests |= set(genericjs_tests)

	selected_tests = sorted(list(selected_tests))

def preExecuteTest(compiler, mode, testName, outFile, testReport, testErrs ):
	maybe_pretty = ['-cheerp-pretty-code'] if option.pretty_code else []
	testReport.write('<testcase classname="preexecution-%s" name="%s">' % (mode, testName))
	p=subprocess.Popen([compiler, "-O"+str(optlevel), "-target", "cheerp",
		"-frtti", "-Iunit", "-cheerp-preexecute", "-mllvm","-cheerp-preexecute-main",
		"-DPRE_EXECUTE_TEST",
		"-cheerp-mode="+ mode,
		testName, "-o", outFile] + maybe_pretty ,stderr=subprocess.PIPE);
	_, errs = p.communicate()
	testErrs.write(errs.decode("utf-8"))
	if p.returncode != 0 or b"Tried to execute an unknown external function" in errs:
		testReport.write('<failure type="PreExecution error">');
		testErrs.seek(0);
		testReport.write(testErrs.read());
		testReport.write('</failure>');
	testReport.write('</testcase>')

def compileTest(compiler, mode, testName, outFile, testReport, testOut):
	testReport.write('<testcase classname="compilation-%s" name="%s">' % (mode, testName))
	flags = [
		"-O"+str(optlevel),
		"-target", "cheerp",
		"-frtti",
		"-Iunit",
		"-cheerp-no-math-imul",
		"-cheerp-no-math-fround",
		"-o", outFile
	]

	if option.pretty_code:
		flags += ['-cheerp-pretty-code','-cheerp-asmjs-symbolic-globals']

	if option.no_lto:
		flags += ['-cheerp-no-lto']

	if mode == "wasm":
		assert testName[-4:] == ".cpp"
		flags += ["-cheerp-mode=wasm"]
		flags += ["-cheerp-wast-loader={}.js".format(testName[:-4])]
		flags += ["-cheerp-pretty-code"]
	elif mode == "asmjs":
		flags += ["-cheerp-mode=asmjs"]
	else:
		assert mode == "genericjs"
		flags += ["-cheerp-mode=genericjs"]

	ret=subprocess.call([compiler] + flags + [testName],
		stderr=subprocess.STDOUT, stdout=testOut);

	if ret != 0:
		testReport.write('<failure type="Compilation error">');
		testOut.seek(0);
		testReport.write(testOut.read());
		testReport.write('</failure>');
	testReport.write('</testcase>')


def runTest(engine, mode, testName, outFile, testReport, testOut):
	testFile = outFile
	if mode == "wasm":
		assert outFile[-5:] == ".wasm"
		testFile = outFile[:-5] + '.js'

	failure = False

	ret=subprocess.call([engine, testFile], stderr=subprocess.STDOUT,
		stdout=testOut);

	# Reset the read position to the beginning of the output. Otherwise
	# it's not possible to check if there are errors in the output lines.
	testOut.seek(0);

	if ret == 0:
		for testLine in testOut:
			match = re.match("^(.*) : (.*)",testLine)
			if match:
				checkName = match.group(1)
				result = match.group(2)
				testReport.write('<testcase classname="check" name="%s">' % escape(checkName))
				if result!="SUCCESS":
					testReport.write('<failure type="Self check error">%s</failure>' % testLine);
					failure = True
				testReport.write('</testcase>')

			match = re.search("error|fail", testLine, re.IGNORECASE)
			failure |= bool(match)
	else:
		failure = True

	testReport.write('<testcase classname="run-%s" name="%s">' % (mode,testName))
	if failure:
		testReport.write('<failure type="Runtime error">');
		testReport.write(testOut.read());
		testReport.write('</failure>');
	testReport.write('</testcase>')

	return failure

def do_test(test):
	status = "pass"

	head, tail = os.path.split(test)
	name, _ = os.path.splitext(tail)

	stdoutLog = open("%s.log" % test,"w+")
	stdrepLog = open("%s_testreport" % test,"w+")

	test_runs = [
		(option.preexecute, "genericjs", test not in pre_executer_tests,
			preExecuteTest, None),
		(option.preexecute_asmjs, "asmjs", test not in pre_executer_tests,
			preExecuteTest, None),
		(option.asmjs, "asmjs", test not in asmjs_tests, compileTest,
			runTest),
		(option.wasm, "wasm", test not in wasm_tests, compileTest,
			runTest),
		(option.genericjs, "genericjs", test not in genericjs_tests,
			compileTest, runTest),
	]

	for enabled, mode, skip, compile, run in test_runs:
		if not enabled or skip:
			continue

		if mode == "wasm":
			ext = 'wasm'
		else:
			ext = 'js'

		if prefix:
			outFile = os.path.join(head, prefix + "_" + name + "." + ext)
		else:
			outFile = os.path.join(head, name + "." + ext)

		if compile(clang, mode, test, outFile, stdrepLog, stdoutLog):
			status = "error"
		if run and run(jsEngine, mode, test, outFile, stdrepLog, stdoutLog):
			status = "assertion"

		# Remove the generated wasm file.
		if mode == "wasm" and os.path.isfile(outFile):
			os.remove(outFile)

	stdoutLog.close()
	stdrepLog.close()

	return status


executor = concurrent.futures.ThreadPoolExecutor(jobs)
futures = [executor.submit(do_test, test) for test in selected_tests]

progress = 0
for test, future in zip(selected_tests, futures):
	# Re-raise any error that is thrown while running the tests.
	status = future.result()

	progress += 1
	done = progress * 100 / len(selected_tests)
	sys.stdout.write("[%3d%%] %-36s %s\n" % (done, test, status))

# Build back the testReport, testErrs and testOut files
testReport = open("testReport.test","w")
testOut = open("testOut.out","w+");

testReport.write('<testsuite>');

for t in selected_tests:
	tr = open("%s_testreport" % t,"r")
	to = open("%s.log" % t,"r")

	for line in tr:
		testReport.write(line)
	for line in to:
		testOut.write(line)

	to.close()
	tr.close()

	if not option.keep_logs:
	    os.remove("%s_testreport" %t)
	    os.remove("%s.log" %t)
	
testReport.write('</testsuite>');

testReport.close()
