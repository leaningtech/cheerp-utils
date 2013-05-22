#!/usr/bin/python3

report = open("testReport.test","w")
report.write('<testsuite>\n<testcase classname="Type1" name="TestOk1"/>\n<testcase classname="Type1" name="TestOk2"/>\n<testcase classname="Type2" name="TestOk3">\n<failure type="Error3">Unexpected failure</failure>\n</testcase>\n</testsuite>');
report.close()
