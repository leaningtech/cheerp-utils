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
parser.add_option("--prefix",dest="prefix", help="Keep the generated output for each test, with the name prefix_testname.js", action="store")
parser.add_option("--asmjs",dest="asmjs", help="Run the tests in asmjs mode", action="store_true", default=False)
parser.add_option("--genericjs",dest="genericjs", help="Run the tests in genericjs mode", action="store_true", default=False)
parser.add_option("--preexecute",dest="preexecute", help="Run the tests inside PreExecuter", action="store_true", default=False)
parser.add_option("--preexecute-asmjs",dest="preexecute_asmjs", help="Run the tests inside PreExecuter in asmjs mode", action="store_true", default=False)
parser.add_option("--all",dest="all", help="Run all the test kinds [genericjs/asmjs/preexecute]", action="store_true", default=False)
parser.add_option("--pretty-code",dest="pretty_code", help="Compile with -cheerp-pretty-code", action="store_true", default=False)
(option, args) = parser.parse_args()

if option.all:
	option.genericjs = True
	option.asmjs = True
	option.preexecute = True

if len(args)!=2:
	print("Usage: %s <compiler> <js engine>\n" % sys.argv[0]);
	exit(1);

clang = args[0]
jsEngine = args[1]
optlevel = option.optlevel
prefix = option.prefix
jobs = option.jobs
progress = 0

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
	 'unit/static/test1.cpp']
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
	 ]
asmjs_tests = common_tests + [
		'unit/ffi/test1.cpp',
        'unit/std/malloc.cpp'
		]

tests = set()
if option.preexecute or option.preexecute_asmjs:
	tests |= set(pre_executer_tests)
if option.asmjs:
	tests |= set(asmjs_tests)
if option.genericjs:
	tests |= set(genericjs_tests)

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

def compileTest(compiler, mode, testName, outFile, testReport, testErrs ):
	maybe_pretty = ['-cheerp-pretty-code','-cheerp-asmjs-symbolic-globals'] if option.pretty_code else []
	testReport.write('<testcase classname="compilation-%s" name="%s">' % (mode, testName))
	ret=subprocess.call([compiler, "-O"+str(optlevel), "-target", "cheerp",
		"-frtti", "-Iunit", "-cheerp-no-math-imul", "-cheerp-no-math-fround",
		"-cheerp-mode="+mode,
		testName, "-o", outFile] + maybe_pretty, stderr=testErrs);
	if ret != 0:
		testReport.write('<failure type="Compilation error">');
		testErrs.seek(0);
		testReport.write(testErrs.read());
		testReport.write('</failure>');
	testReport.write('</testcase>')

def runTest(engine, mode, testName, outFile, testReport, testErrs, testOut):

	ret=subprocess.call([engine, outFile],stderr=testErrs,stdout=testOut);
	testErrs.seek(0);
	testOut.seek(0);

	testReport.write('<testcase classname="run-%s" name="%s">' % (mode,testName))
	if ret != 0:
		testReport.write('<failure type="Runtime error">');
		testReport.write(testErrs.read());
		testReport.write('</failure>');
	testReport.write('</testcase>')

	if ret == 0:
		for testLine in testOut:
			m=re.match("^(.*) : (.*)",testLine)
			checkName = m.group(1)
			result = m.group(2)
			testReport.write('<testcase classname="check" name="%s">' % escape(checkName))
			if result!="SUCCESS":
				testReport.write('<failure type="Self check error">%s</failure>' % testLine);
			testReport.write('</testcase>')

def do_test(test):
	global progress
	print("[%d%%] Compiling and executing test: %s" % (( progress * 100 / len(tests) ), test) )

	head,tail = os.path.split(test)
	name,ext = os.path.splitext(tail)

	if prefix:
		outFile = os.path.join(head, prefix + "_" + name + ".js")
	else:
		outFile = os.path.join(head, name + ".js")

	stderrLog = open("%s_testerr" % test,"w+")
	stdoutLog = open("%s_testout" % test,"w+")
	stdrepLog = open("%s_testreport" % test,"w+")

	if option.preexecute and test in pre_executer_tests:
		preExecuteTest(clang, "genericjs", test, outFile, stdrepLog, stderrLog)
	if option.preexecute_asmjs and test in pre_executer_tests:
		preExecuteTest(clang, "asmjs", test, outFile, stdrepLog, stderrLog)
	if option.asmjs and test in asmjs_tests:
		compileTest(clang, "asmjs", test, outFile, stdrepLog, stderrLog)
		runTest(jsEngine, "asmjs", test, outFile, stdrepLog, stderrLog, stdoutLog)
	if option.genericjs and test in genericjs_tests:
		compileTest(clang, "genericjs", test, outFile, stdrepLog, stderrLog)
		runTest(jsEngine, "genericjs", test, outFile, stdrepLog, stderrLog, stdoutLog)

	stderrLog.close()
	stdoutLog.close()
	stdrepLog.close()

	progress = progress + 1


executor = concurrent.futures.ThreadPoolExecutor(jobs)
futures = [executor.submit(do_test, test) for test in tests]
concurrent.futures.wait(futures)

# Build back the testReport, testErrs and testOut files
testReport = open("testReport.test","w")
testErrs = open("testErrs.out","w+");
testOut = open("testOut.out","w+");

testReport.write('<testsuite>');

for t in tests:
	tr = open("%s_testreport" % t,"r")
	te = open("%s_testerr" % t,"r")
	to = open("%s_testout" % t,"r")

	for line in tr:
		testReport.write(line)
	for line in te:
		testErrs.write(line)
	for line in to:
		testOut.write(line)

	to.close()
	te.close()
	tr.close()

	os.remove("%s_testreport" %t)
	os.remove("%s_testerr" %t)
	os.remove("%s_testout" %t)
	
testReport.write('</testsuite>');

testReport.close()
