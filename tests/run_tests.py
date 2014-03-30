#!/usr/bin/python3

import subprocess
import sys
import re

if len(sys.argv)!=3:
	print("Usage: %s <compiler> <js engine>\n" % sys.argv[0]);
	exit(1);

clang = sys.argv[1]
jsEngine = sys.argv[2]

tests = ['unit/downcast/test1.cpp',
	 'unit/virtual/test1.cpp','unit/virtual/test2.cpp',
	 'unit/memory/test1.cpp','unit/memory/test2.cpp','unit/memory/test3.cpp',
		'unit/memory/test4.cpp','unit/memory/test5.cpp','unit/memory/test6.cpp',
	 'unit/std/test1.cpp','unit/std/test2.cpp','unit/std/test3.cpp',
		'unit/std/test4.cpp','unit/std/test5.cpp',
	 'unit/bitfield/test1.cpp','unit/bitfield/test2.cpp','unit/bitfield/test3.cpp',
		 'unit/bitfield/test4.cpp','unit/bitfield/test5.cpp',
	 'unit/types/test1.cpp','unit/types/test2.cpp','unit/types/test4.cpp',
		'unit/types/test5.cpp','unit/types/test6.cpp','unit/types/test7.cpp',
	 'unit/globals/test1.cpp','unit/globals/test2.cpp','unit/globals/test3.cpp','unit/globals/test4.cpp',
	 'unit/codegen/test1.cpp','unit/codegen/test2.cpp','unit/codegen/test3.cpp','unit/codegen/test4.cpp',
		 'unit/codegen/test5.cpp',
	 'unit/dom/test1.cpp','unit/dom/test2.cpp','unit/dom/test3.cpp',
	 'unit/static/test1.cpp']

report = open("testReport.test","w")

def compileTest(compiler, testName, outFile):
	stderrLog = open("testErrs.out","w+");
	report.write('<testcase classname="compilation" name="%s">' % testName)
	ret=subprocess.call([compiler, "-O1", "-target", "duetto", "-Iunit",
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
	compileTest(clang, t, "out.js");
	runTest(jsEngine, t, "out.js");
report.write('</testsuite>');

report.close()
