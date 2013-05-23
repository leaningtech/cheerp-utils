#!/usr/bin/python3

import subprocess
import sys
import re

if len(sys.argv)!=3:
	print("Usage: %s <compiler> <js engine>\n" % sys.argv[0]);
	exit(1);

clang = sys.argv[1]
jsEngine = sys.argv[2]

tests = ['unit/downcast/test1.cpp','unit/virtual/test1.cpp']

report = open("testReport.test","w")

def compileTest(compiler, testName, outFile):
	stderrLog = open("testErrs.out","w+");
	report.write('<testcase classname="compilation" name="%s">' % testName)
	ret=subprocess.call([compiler, "-O3", "-target", "duetto", "-std=c++11", "-Iunit",
		"-S", t, "-o", outFile],stderr=stderrLog);
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
	ret=subprocess.call([engine, "duetto.js", outFile],stderr=stderrLog,stdout=stdoutLog);
	stderrLog.seek(0);
	stdoutLog.seek(0);
	if ret != 0:
		report.write('<failure type="Runtime error">');
		report.write(stderrLog.read());
		report.write('</failure>');
	report.write('</testcase>')
	for testLine in stdoutLog:
		m=re.match("^(.*) : (.*)",testLine)
		checkName = m.group(1)
		result = m.group(2)
		report.write('<testcase classname="check" name="%s">' % checkName)
		if result!="SUCCESS":
			report.write('<failure type="Self check error"/>');
		report.write('</testcase>')
	stderrLog.close();

report.write('<testsuite>');
for t in tests:
	compileTest(clang, t, "out.js");
	runTest(jsEngine, t, "out.js");
report.write('</testsuite>');

report.close()
