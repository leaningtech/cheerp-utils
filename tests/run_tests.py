#!/usr/bin/python3

import subprocess
import sys
import os
import re
from optparse import OptionParser

parser = OptionParser()
parser.add_option("-O", dest="optlevel", help="Optimization level (default -O1)", action="store", type="int", default=1 )
parser.add_option("--prefix",dest="prefix", help="Keep the generated output for each test, with the name prefix_testname.js", action="store")
(option, args) = parser.parse_args()

if len(args)!=2:
	print("Usage: %s <compiler> <js engine>\n" % sys.argv[0]);
	exit(1);

clang = args[0]
jsEngine = args[1]
optlevel = option.optlevel
prefix = option.prefix

tests = ['unit/downcast/test1.cpp',
	 'unit/virtual/test1.cpp','unit/virtual/test2.cpp',
	 'unit/memory/test1.cpp','unit/memory/test2.cpp','unit/memory/test3.cpp',
		'unit/memory/test4.cpp','unit/memory/test5.cpp','unit/memory/test6.cpp',
	 'unit/std/test1.cpp','unit/std/test2.cpp','unit/std/test3.cpp',
		'unit/std/test4.cpp','unit/std/test5.cpp','unit/std/test6.cpp',
		'unit/std/test7.cpp','unit/std/test8.cpp',
	 'unit/bitfield/test1.cpp','unit/bitfield/test2.cpp','unit/bitfield/test3.cpp',
		 'unit/bitfield/test4.cpp','unit/bitfield/test5.cpp',
	 'unit/types/test1.cpp','unit/types/test2.cpp','unit/types/test4.cpp',
		'unit/types/test5.cpp','unit/types/test6.cpp','unit/types/test7.cpp',
	 'unit/globals/test1.cpp','unit/globals/test2.cpp','unit/globals/test3.cpp','unit/globals/test4.cpp',
		'unit/globals/test5.cpp',
	 'unit/codegen/test1.cpp','unit/codegen/test2.cpp','unit/codegen/test3.cpp','unit/codegen/test4.cpp',
		 'unit/codegen/test5.cpp','unit/codegen/test6.cpp','unit/codegen/test7.cpp',
		 'unit/codegen/test8.cpp','unit/codegen/test9.cpp',
	 'unit/dom/test1.cpp','unit/dom/test2.cpp','unit/dom/test3.cpp','unit/dom/test4.cpp',
		'unit/dom/test5.cpp',
	 'unit/static/test1.cpp']

report = open("testReport.test","w")

def compileTest(compiler, testName, outFile):
	stderrLog = open("testErrs.out","w+");
	report.write('<testcase classname="compilation" name="%s">' % testName)
	ret=subprocess.call([compiler, "-O"+str(optlevel), "-target", "cheerp", "-Iunit",
		t, "-o", outFile],stderr=stderrLog);
	if ret != 0:
		report.write('<failure type="Compilation error">');
		stderrLog.seek(0);
		report.write(stderrLog.read());
		report.write('</failure>');
	report.write('</testcase>')
	stderrLog.close();

def runTest(engine, testName, outFile):
	stderrLog = open("testErrs.out","w+");
	stdoutLog = open("testOut.out","w+");
	report.write('<testcase classname="run" name="%s">' % testName)
	ret=subprocess.call([engine, outFile],stderr=stderrLog,stdout=stdoutLog);
	stderrLog.seek(0);
	stdoutLog.seek(0);
	if ret != 0:
		report.write('<failure type="Runtime error">');
		report.write(stderrLog.read());
		report.write('</failure>');
	report.write('</testcase>')
	if ret != 0:
		stderrLog.close();
		return
	for testLine in stdoutLog:
		m=re.match("^(.*) : (.*)",testLine)
		checkName = m.group(1)
		result = m.group(2)
		report.write('<testcase classname="check" name="%s">' % checkName)
		if result!="SUCCESS":
			report.write('<failure type="Self check error">%s</failure>' % testLine);
		report.write('</testcase>')
	stderrLog.close();

report.write('<testsuite>');
for t in tests:
	if prefix :
		head,tail = os.path.split(t)
		name,ext = os.path.splitext(tail)
		outFile = os.path.join(head, prefix + "_" + name + ".js")
	else :
		outFile = "out.js"
	
	compileTest(clang, t, outFile);
	runTest(jsEngine, t, outFile);
report.write('</testsuite>');

report.close()
