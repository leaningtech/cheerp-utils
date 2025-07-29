#!/usr/bin/env python3

import subprocess
import hashlib
import random
import sys
import os
import re
import concurrent.futures
import time
from optparse import OptionParser
from xml.sax.saxutils import escape

usage="usage: %prog [options] <compiler> <js engine> [test]"
parser = OptionParser(usage=usage)
parser.add_option("-O", dest="optlevel", help="Optimization level (default -O1)", action="store", type="int", default=1 )
parser.add_option("-j", dest="jobs", help="Number of jobs (default 1)", action="store", type="int", default=1 )
parser.add_option("--keep", dest="keep_logs", help="Don't delete log files for individual tests",
    action="store_true", default=False)
parser.add_option("--prefix",dest="prefix", help="Keep the generated output for each test, with the name prefix_testname.js", action="store")
parser.add_option("--asmjs",dest="asmjs", help="Run the tests in asmjs mode", action="store_true", default=False)
parser.add_option("--genericjs",dest="genericjs", help="Run the tests in genericjs mode", action="store_true", default=False)
parser.add_option("--wasm", dest="wasm", help="Run the tests in wasm mode",
    action="store_true", default=False)
parser.add_option("--typescript", dest="typescript", help="Also generate .d.ts files", action="store_true", default=False)
parser.add_option("--valgrind", dest="valgrind", help="Run with valgrind activated", action="store_true", default=False)
parser.add_option("--preexecute",dest="preexecute", help="Run the tests inside PreExecuter", action="store_true", default=False)
parser.add_option("--determinism", dest="determinism", help="Select the level of testing devoted to uncover non-deterministic behaviour", action="store", type="int", default=0)
parser.add_option("--determinism-probability", dest="determinism_probability", help="Select the chance a given test is tested for determinism", action="store", type="float", default=0.1)
parser.add_option("--preexecute-asmjs",dest="preexecute_asmjs", help="Run the tests inside PreExecuter in asmjs mode", action="store_true", default=False)
parser.add_option("--all",dest="all", help="Run all the test kinds [genericjs/asmjs/wasm/preexecute]", action="store_true", default=False)
parser.add_option("--pretty-code",dest="pretty_code", help="Compile with -cheerp-pretty-code", action="store_true", default=False)
parser.add_option("--no-lto",dest="no_lto", help="Compile with -cheerp-no-lto", action="store_true", default=False)
parser.add_option("--print-cmd",dest="print_cmd", help="Print the commands as they're executed", action="store_true", default=False)
parser.add_option("--asan",dest="test_asan", help="Test using AddressSanitizer (only asmjm/wasm)", action="store_true", default=False)
parser.add_option("--himem",dest="himem", help="Run tests with heap start at 2GB", action="store_true", default=False)
parser.add_option("--print-stats",dest="print_stats", help="Print a summary of test result numbers", action="store_true", default=False)
parser.add_option("--time",dest="time_tests", help="Print compilation time and run time for each test", action="store_true", default=False)
(option, args) = parser.parse_args()

if option.all:
    option.asmjs = True
    option.genericjs = True
    option.wasm = True
    option.preexecute = True
    option.preexecute_asmjs = True

if len(args) < 2:
    parser.print_help()
    exit(1)

clang = args[0]
jsEngine = args[1].split()
optlevel = option.optlevel
prefix = option.prefix
jobs = option.jobs
asmjs = option.asmjs
wasm = option.wasm
probability_determinism = max(0.0, min(1.0, option.determinism_probability))

class Stats:
    def __init__(self):
        self.passed = 0
        self.asserted = 0
        self.errored = 0
    def record(self, status):
        if status == "pass":
            self.passed += 1
        elif status == "assertion":
            self.asserted += 1
        elif status == "error":
            self.errored += 1
    def report(self):
        print("passed: ", self.passed)
        print("asserted: ", self.asserted)
        print("errored: ", self.errored)

stats = Stats()

class Test:
    def __init__(self, name, genericjs, asmjs, wasm, preexecutable, flags, options):
        self.name = name
        self.genericjs = genericjs
        self.asmjs = asmjs
        self.wasm = wasm
        self.preexecutable = preexecutable
        self.flags = flags
        self.options = options

    def __lt__(self, other):
         return self.name < other.name

    @classmethod
    def preexecutable(this, name, flags = [[]], options = {}):
        return this(name, True, True, True, True, flags, options)

    @classmethod
    def common(this, name, flags = [[]], options = {}):
        return this(name, True, True, True, False, flags, options)

    @classmethod
    def genericjsOnly(this, name, flags = [[]], options = {}):
        return this(name, True, False, False, False, flags, options)

    @classmethod
    def linearOnly(this, name, flags = [[]], options = {}):
        return this(name, False, True, True, False, flags, options)

    @classmethod
    def wasmOnly(this, name, flags = [[]], options = {}):
        return this(name, False, False, True, False, flags, options)

pre_executer_tests = ['unit/downcast/test1.cpp',
     'unit/virtual/test1.cpp',
        'unit/virtual/test2.cpp',
        'unit/virtual/test3.cpp',
        'unit/virtual/rtti.cpp','unit/virtual/constructor.cpp',
     'unit/vbases/test1.cpp','unit/vbases/test2.cpp','unit/vbases/test3.cpp',
        'unit/vbases/test4.cpp','unit/vbases/test5.cpp',
     'unit/memory/test1.cpp','unit/memory/test2.cpp','unit/memory/test3.cpp',
        'unit/memory/test4.cpp','unit/memory/test5.cpp','unit/memory/test6.cpp',
        'unit/memory/test7.cpp','unit/memory/test8.cpp','unit/memory/arraynew.cpp',
        'unit/memory/multiarray.cpp',
     'unit/std/test1.cpp','unit/std/test2.cpp','unit/std/test3.cpp',
        'unit/std/test4.cpp','unit/std/test5.cpp','unit/std/test6.cpp',
        'unit/std/test7.cpp','unit/std/test8.cpp','unit/std/test9.cpp',
        'unit/std/stringassign.cpp', 'unit/std/sscanf.cpp', 'unit/std/locale.cpp',
        'unit/std/stdmemfuncs.cpp','unit/std/sort.cpp','unit/std/mapdestruction.cpp',
        'unit/std/memcmp.cpp',
     'unit/bitfield/test1.cpp','unit/bitfield/test2.cpp','unit/bitfield/test3.cpp',
         'unit/bitfield/test4.cpp','unit/bitfield/test5.cpp',
     'unit/types/test1.cpp','unit/types/test2.cpp','unit/types/test4.cpp',
        'unit/types/test5.cpp','unit/types/test6.cpp',
        'unit/types/test8.cpp','unit/types/test9.cpp','unit/types/test10.cpp',
        'unit/types/test11.cpp','unit/types/test12.cpp','unit/types/test13.cpp',
        'unit/types/test14.cpp','unit/types/test16.cpp','unit/types/cinheritance.cpp',
        'unit/types/memberfunctions.cpp', 'unit/types/memberfunctions2.cpp',
        'unit/types/union64.cpp',
     'unit/globals/test1.cpp','unit/globals/test2.cpp','unit/globals/test3.cpp','unit/globals/test4.cpp',
        'unit/globals/test5.cpp','unit/globals/test6.cpp','unit/globals/test7.cpp',
        'unit/globals/betterconst.cpp',
        'unit/globals/globaluint16.cpp',
     'unit/codegen/test1.cpp','unit/codegen/test3.cpp','unit/codegen/test4.cpp',
         'unit/codegen/test5.cpp','unit/codegen/test6.cpp','unit/codegen/test7.cpp',
         'unit/codegen/test8.cpp','unit/codegen/test9.cpp','unit/codegen/test10.cpp',
         'unit/codegen/test11.cpp','unit/codegen/test13.cpp',
         'unit/codegen/test14.cpp','unit/codegen/test15.cpp','unit/codegen/test16.cpp',
         'unit/codegen/test17.cpp','unit/codegen/test18.cpp', 'unit/codegen/test19.cpp',
         'unit/codegen/test22.cpp',
         'unit/codegen/test23.cpp','unit/codegen/test24.cpp','unit/codegen/bswap.cpp',
         'unit/codegen/64bitenum.cpp','unit/codegen/64bitpointerarith.cpp','unit/codegen/floattoint.cpp',
         'unit/codegen/variadic.cpp', 'unit/codegen/dynalloca.cpp', 'unit/static/test1.cpp',
         'unit/codegen/dynstack.cpp', 'unit/codegen/byval.cpp',
         'unit/codegen/fptoi.cpp', 'unit/codegen/64bitrewrite.cpp',
         'unit/codegen/reverse_iter.cpp', 'unit/codegen/structbase.cpp',
         'unit/randomcfg/size5times20.cpp', 'unit/randomcfg/size10times10.cpp',
         'unit/randomcfg/size20times10.cpp', 'unit/randomcfg/size50times2.cpp',
         'unit/randomcfg/swap5by5.cpp', 'unit/randomcfg/swap10by10.cpp',
         'unit/randomcfg/swap25by25.cpp',
         'unit/randomcfg/swapOnPointers.cpp', 'unit/randomcfg/combOnDouble.cpp',
         'unit/randomcfg/comb10by10.cpp', 'unit/randomcfg/swap25by25.cpp',
    ]
common_tests = [
        'unit/std/gettimeofday.cpp','unit/std/chrono.cpp', 'unit/ffi/test3.cpp',
        'unit/closures/test4.cpp',
        'unit/jsexport/cheerp_pimpl.cpp',
        'unit/jsexport/factory.cpp',
        'unit/jsexport/invoke_functions.cpp',
        'unit/jsexport/namespaces.cpp',
        'unit/jsexport/parameters_builtin.cpp',
        'unit/jsexport/unsafe_gnu.c',
        'unit/jsexport/unsafe_clang.cpp',
        'unit/client/class.cpp',
        'unit/client/nested-namespaces.cpp',
        'unit/client/setter-getter.cpp',
        'unit/client/static-methods.cpp',
        'unit/client/typeof.cpp',
        'unit/client/instanceof.cpp',
        'unit/codegen/nested_lambda.cpp',
        'unit/types/padding1.cpp',
        'unit/types/padding2.cpp',
        'unit/types/padding3.cpp',
        'unit/globals/initializers.cpp',
        ]
genericjs_only_tests = [
        'unit/dom/test1.cpp','unit/dom/test2.cpp','unit/dom/test3.cpp','unit/dom/test4.cpp',
        'unit/dom/test5.cpp','unit/dom/test6.cpp','unit/dom/test7.cpp',
        'unit/dom/test8.cpp','unit/dom/test9.cpp','unit/dom/noconstructor.cpp', 'unit/dom/utf8.cpp',
        'unit/dom/objapi.cpp','unit/dom/max.cpp',
        'unit/memory/typedarrays_operator.cpp', 'unit/memory/kinds.cpp',
        'unit/std/stringhashing.cpp',
        'unit/types/test7.cpp',
        'unit/codegen/test20.cpp',
        'unit/codegen/escapes.cpp',
        'unit/codegen/advancedasm.cpp',
        'unit/std/tostring.cpp','unit/codegen/test2.cpp','unit/codegen/test12.cpp',
        'unit/closures/test1.cpp','unit/closures/test2.cpp','unit/closures/test3.cpp',
        'unit/jsexport/parameters_client.cpp',
     ]
asmjs_only_tests = [
        'unit/ffi/test1.cpp',
        'unit/ffi/test2.cpp',
        'unit/std/malloc.cpp'
        ]
packed_tests = [
        'unit/types/packed.cpp',
        'unit/types/padding4.cpp',
        'unit/types/padding5.cpp',
        'unit/types/padding6.cpp',
        ]
test_list = []

selected_tests = set()
select_all = True

# Determine if we want to run a select number of test, or all tests.
if args[2:]:
    selected_tests = set(args[2:])
    select_all = False

def addToTestListIfMatch(someTest):
    if select_all or (someTest.name in selected_tests):
        test_list.append(someTest)

for name in set(pre_executer_tests):
    addToTestListIfMatch(Test.preexecutable(name))
for name in set(common_tests):
    addToTestListIfMatch(Test.common(name))
for name in set(genericjs_only_tests):
    addToTestListIfMatch(Test.genericjsOnly(name))
for name in set(asmjs_only_tests):
    addToTestListIfMatch(Test.linearOnly(name))
for name in set(packed_tests):
    addToTestListIfMatch(Test.wasmOnly(name))

addToTestListIfMatch(Test.common('unit/client/globals.cpp', [['-cheerp-make-module=commonjs'], ['-cheerp-make-module=es6']]))
addToTestListIfMatch(Test.common('unit/cli/env.cpp', [['-cheerp-make-module=es6']]))
addToTestListIfMatch(Test.common('unit/cli/argv.cpp', [['-cheerp-make-module=es6']]))
addToTestListIfMatch(Test.common('unit/client/_delete.cpp', [['-cheerp-make-module=commonjs'], ['-cheerp-make-module=es6']]))
addToTestListIfMatch(Test.common('unit/codegen/unsignedTrunc.cpp', [['-cheerp-make-module=es6']]))
addToTestListIfMatch(Test.preexecutable('unit/codegen/abs.cpp', [[], ['-cheerp-use-bigints']]))
addToTestListIfMatch(Test.preexecutable('unit/codegen/test21.cpp', [[], ['-cheerp-use-bigints']]))
addToTestListIfMatch(Test.linearOnly('unit/ffi/i64.cpp', [[], ['-cheerp-use-bigints']]))
addToTestListIfMatch(Test.preexecutable('unit/randomcfg/operationsOnInt64.cpp', [[], ['-cheerp-use-bigints']]))
addToTestListIfMatch(Test.wasmOnly('unit/anyref/args.cpp', [['-cheerp-wasm-enable=externref']]))
addToTestListIfMatch(Test.common('unit/jsexport/cheerp_pimpl_mod.cpp', [[], ['-cheerp-make-module=closure'],['-cheerp-make-module=commonjs'],['-cheerp-make-module=es6']]))
addToTestListIfMatch(Test.common('unit/jsexport/array_of_structs.cpp', [[], ['-cheerp-make-module=closure'],['-cheerp-make-module=commonjs'],['-cheerp-make-module=es6']]))
addToTestListIfMatch(Test.common('unit/jsexport/compare_pointers.cpp', [[], ['-cheerp-make-module=closure'],['-cheerp-make-module=commonjs'],['-cheerp-make-module=es6']]))
addToTestListIfMatch(Test.common('unit/jsexport/cat.cpp', [[], ['-cheerp-make-module=closure'], ['-cheerp-make-module=commonjs'],['-cheerp-make-module=es6']]))
addToTestListIfMatch(Test.common('unit/jsexport/global_variables.cpp', [['-cheerp-make-module=closure'], ['-cheerp-make-module=commonjs'],['-cheerp-make-module=es6']]))
addToTestListIfMatch(Test.common('unit/jsexport/nested_variables.cpp', [[], ['-cheerp-make-module=closure'], ['-cheerp-make-module=commonjs'],['-cheerp-make-module=es6']]))
addToTestListIfMatch(Test.common('unit/jsexport/static_variables.cpp', [[], ['-cheerp-make-module=closure'], ['-cheerp-make-module=commonjs'],['-cheerp-make-module=es6']]))
addToTestListIfMatch(Test.common('unit/jsexport/member_variables.cpp', [[], ['-cheerp-make-module=closure'], ['-cheerp-make-module=commonjs'],['-cheerp-make-module=es6']]))
addToTestListIfMatch(Test.common('unit/jsexport/empty_class.cpp', [[], ['-cheerp-make-module=closure'], ['-cheerp-make-module=commonjs'],['-cheerp-make-module=es6']]))
addToTestListIfMatch(Test.common('unit/jsexport/inheritance.cpp', [[], ['-cheerp-make-module=closure'], ['-cheerp-make-module=commonjs'],['-cheerp-make-module=es6']]))
addToTestListIfMatch(Test.common('unit/jsexport/qualifiers.cpp', [[], ['-cheerp-make-module=closure'], ['-cheerp-make-module=commonjs'],['-cheerp-make-module=es6']]))
addToTestListIfMatch(Test.genericjsOnly('unit/coroutines/test1.cpp', [['-std=c++20']]))
addToTestListIfMatch(Test.genericjsOnly('unit/coroutines/cast-promise.cpp', [['-std=c++20']]))
addToTestListIfMatch(Test.common('unit/exceptions/test1.cpp', [['-fexceptions']]))
addToTestListIfMatch(Test.linearOnly('unit/exceptions/test2.cpp', [['-fexceptions']]))
addToTestListIfMatch(Test.common('unit/types/funccasts.cpp', [['-cheerp-fix-wrong-func-casts']]))
addToTestListIfMatch(Test.common('unit/threading/atomic_lowering1.cpp', [[]]))
addToTestListIfMatch(Test.linearOnly('unit/threading/atomic_lowering2.cpp', [[]]))
addToTestListIfMatch(Test.common('unit/threading/atomic_lowering3.cpp', [[]]))
addToTestListIfMatch(Test.wasmOnly('unit/threading/atomic1.cpp', [['-pthread'], ['-pthread','-cheerp-make-module=es6'], ['-pthread','-cheerp-make-module=commonjs'], ['-pthread', '-cheerp-make-module=closure']]))
addToTestListIfMatch(Test.wasmOnly('unit/threading/atomic2.cpp', [['-pthread'], ['-pthread','-cheerp-make-module=es6'], ['-pthread','-cheerp-make-module=commonjs'], ['-pthread', '-cheerp-make-module=closure']]))
addToTestListIfMatch(Test.wasmOnly('unit/threading/atomic3.cpp', [['-pthread'], ['-pthread','-cheerp-make-module=es6'], ['-pthread','-cheerp-make-module=commonjs'], ['-pthread', '-cheerp-make-module=closure']]))
addToTestListIfMatch(Test.wasmOnly('unit/threading/atomic4.cpp', [['-pthread'], ['-pthread','-cheerp-make-module=es6'], ['-pthread','-cheerp-make-module=commonjs'], ['-pthread', '-cheerp-make-module=closure']]))
addToTestListIfMatch(Test.wasmOnly('unit/threading/thread_setup.cpp', [['-pthread'], ['-pthread','-cheerp-make-module=es6'], ['-pthread','-cheerp-make-module=commonjs'], ['-pthread', '-cheerp-make-module=closure']]))
addToTestListIfMatch(Test.common('unit/exceptions/exitexception1.cpp', [['-fexceptions','-cheerp-make-module=es6'], ['-fexceptions','-cheerp-make-module=commonjs']]))
addToTestListIfMatch(Test.common('unit/exceptions/exitexception2.cpp', [['-fexceptions','-cheerp-make-module=es6'], ['-fexceptions','-cheerp-make-module=commonjs']]))

selected_tests = sorted(list(test_list))

def computeHash(code):
    return hashlib.md5(code.encode()).hexdigest()

class determinismDictionary:
    def __init__(self):
        self.dictionary = {}

    def addValue(self, testCase, computedHash):
        if testCase in self.dictionary:
            if self.dictionary[testCase] != computedHash:
                return False
        self.dictionary[testCase] = computedHash
        return True
    def at(self, testCase):
        assert (testCase in self.dictionary)
        return self.dictionary[testCase]
    def clear_me(self):
        self.dictionary.clear()

def compileCommandPreExecuter(compiler, mode, testName, extraFlags):
    flags = ['-cheerp-pretty-code'] if option.pretty_code else []
    if mode in ["wasm", "asmjs"]:
        flags += ["-target","cheerp-wasm"]
        if mode == "asmjs":
            flags += ["-cheerp-linear-output=asmjs"]
    else:
        assert mode == "genericjs"
        flags += ["-target","cheerp"]

    return [compiler, "-O"+str(optlevel),
        "-frtti", "-Iunit", "-cheerp-preexecute", "-mllvm","-cheerp-preexecute-main",
        "-DPRE_EXECUTE_TEST",
        testName] + flags + extraFlags

def emitError(testReport, kind, log):
    testReport.write('<failure type="')
    testReport.write(kind)
    testReport.write('">')
    log.seek(0)
    testReport.write(log.read())
    testReport.write('</failure>')


def preExecuteTest(command, testOptions, testName, testReport, testErrs ):
    testReport.write('<testcase classname="preexecution-%s" name="%s">' % (testOptions.mode, testName))
    startTime = time.time()
    p=subprocess.Popen(command + ["-o", testOptions.primaryFile]
            ,stderr=subprocess.PIPE)
    _, errs = p.communicate()
    error = False
    if option.determinism:
        A = computeHash(testOptions.primaryFile)
        B = "" + testOptions.mode + "_" + testName
        if not preExecuteTest.dictionary.addValue(B, A):
            sys.stdout.write("%s\t%s\t\tDeterminsm failure on output preexecuter\n" % (testOptions.mode, testName))
            emitError(testReport, "Determinism failure on PreExecution", testErrs)
            error = True

    testErrs.write(errs.decode("utf-8"))
    if p.returncode != 0 or b"Tried to execute an unknown external function" in errs:
        emitError(testReport, "PreExecution error", testErrs)
        error = True
    testReport.write('</testcase>')
    timeTaken = time.time() - startTime
    return [error, timeTaken]

preExecuteTest.dictionary=determinismDictionary()

def compileCommand(compiler, mode, testName, extraFlags):
    flags = [
        "-O"+str(optlevel),
        "-frtti",
        "-Iunit",
        "-cheerp-bounds-check",
        "-cheerp-fix-wrong-func-casts",
    ] + extraFlags

    if option.pretty_code:
        flags += ['-cheerp-pretty-code','-cheerp-asmjs-symbolic-globals']

    if option.no_lto:
        flags += ['-cheerp-no-lto']

    if option.typescript:
        flags += ['-cheerp-make-dts']

    if mode in ["wasm", "asmjs"]:
        flags += ["-target","cheerp-wasm"]
        if option.test_asan:
            flags += ["-fsanitize=address"]
        if option.himem:
            flags += ["-cheerp-linear-stack-size=2048", "-cheerp-linear-heap-size=2112"]
        if mode == "asmjs":
            flags += ["-cheerp-linear-output=asmjs"]
    else:
        assert mode == "genericjs"
        flags += ["-target","cheerp"]

    return [compiler] + [testName] + flags

def selectRandomPasses(passes, seed):
    assert(option.determinism != 0)
    #Collect the passes to select
    if option.determinism == -1:
        #-1 is a special value that means: test all passes
        return " -print-after-all"

    #Select them. Note that the choice should be deterministic, so we use this sort-of-working solution, otherwise different passes would be chosen for different runs
    num = option.determinism - 1
    assert(num > 0)
    res = ""
    for i in range(num):
        res += " -print-after=" + passes[(seed+i)%len(passes)]
    return res

def printAfter(seed):
    cheerp_passes = ["StructMemFuncLowering", "FreeAndDeleteRemoval", "GlobalDepsAnalyzer", "FixIrreducibleControlFlow", "IdenticalCodeFolding",
        "GEPOptimizer", "Registerize", "PointerAnalyzer", "DelayInsts", "AllocaMerging", "AllocaArrays", "AllocaStoresExtractor",
        "TypeOptimizer", "PreExecute", "ExpandStructRegs", "CheerpLowerSwitch"]
    return selectRandomPasses(cheerp_passes, seed)

def produceReport(command, printAfterCommand):
    #Here we obtain the separate compilation commands
    p2=subprocess.Popen(command + ['-save-temps=obj', '-###'],
        stderr=subprocess.PIPE)
    _, errs = p2.communicate()
    lines = str(errs).split("\\n")
    lines_to_execute = list()

    #Here we filter out some additional informations (version/folders) given back by -###
    last_lines = False
    for line in lines:
        if last_lines and len(line) > 1 and line != " (in-process)":
            lines_to_execute.append(line)
        if "InstalledDir" in line[:14]:
            last_lines = True

    #Here we execute the commands one at a time, adding the print-after commands when needed (opt & llc)
    ret = 0
    output = list()
    for i in range(len(lines_to_execute)):
        line = lines_to_execute[i]
        if i >= 4:
            #The first four lines invoke clang++ and llvm-link
            line += printAfterCommand
        p=subprocess.Popen(line, shell=True,
            stderr=subprocess.PIPE)
        _, errs = p.communicate()
        ret += p.returncode
        if str("Cannot find") in str(errs):
            print(errs)
            assert False
        for l in errs.splitlines(True):
            output.append(str(l))

    tot = ""
    for line in output:
        #"ModuleID" is followed by the temporary file used, that could change between compilations, so has to be stripped out
        indexModuleID = line.find("ModuleID")
        tot += line[0:indexModuleID] + "\n"
    return tot

def removeIfPresent(fileToRemove):
    if os.path.exists(fileToRemove):
        os.remove(fileToRemove)

def determinismTest(command, printAfter, string, outFile, testReport, testOut, reportFileA, reportFileB, isFirst):
    if isFirst:
        determinismTest.dictionary.clear_me()
    assert option.determinism != 0

    command_with_file = command + ["-o", outFile]

    report = produceReport(command_with_file, printAfter)
    current_hash = computeHash(str(report))
    if not determinismTest.dictionary.addValue(string, current_hash):
        sys.stdout.write("%s\t\tDeterminsm failure on print after\n" % string)
        reportFileA.write(determinismTest.dictionaryReport.at(string))
        reportFileB.write(report)
        return True

    determinismTest.dictionaryReport.addValue(string, report)

    if outFile[-3:] == ".js":
        fileToRemove=outFile[:-3]
    else:
        fileToRemove=outFile[:-4]

    #.bc file may be already deleted by llc, so we need to check for his existence
    removeIfPresent(fileToRemove + ".bc")
    removeIfPresent(fileToRemove + ".ii")

    return False

determinismTest.dictionary = determinismDictionary()
determinismTest.dictionaryReport = determinismDictionary()

def compileTest(command, testOptions, testName, testReport, testOut):
    testReport.write('<testcase classname="compilation-%s" name="%s">' % (testOptions.mode, testName))
    startTime = time.time()

    if (option.print_cmd):
        print(" ".join(command + ["-o", testOptions.primaryFile]))
    ret=subprocess.call(command + ["-o", testOptions.primaryFile],
        stderr=subprocess.STDOUT, stdout=testOut)
    timeTaken = time.time() - startTime

    if option.typescript:
        proc = subprocess.run(["node", "check_dts", testOptions.dtsFile], stdout=subprocess.PIPE)

        if int(proc.stdout) != 0:
            emitError(testReport, "Typescript error", testOut)

    if option.determinism != 0:
        A = computeHash(testOptions.primaryFile)
        if testOptions.mode == "wasm":
            #If the file to execute is different from the original, it's a wasm loader, and we can test also his determinism
            A += computeHash(testOptions.secondaryFile)
        B = getSignature(testName, testOptions)
        if not compileTest.dictionary.addValue(B, A):
            sys.stdout.write("%s\t%s\t\tDeterminsm failure on compilation\n" % (testOptions.mode, testName))
            emitError(testReport, "Determinism detected on compileTest", testOut)

    if ret != 0:
        emitError(testReport, "Compilation error", testOut)
    testReport.write('</testcase>')
    return [ret, timeTaken]

compileTest.dictionary = determinismDictionary()

def runTest(engine, testOptions, testName, testReport, testOut):
    failure = False
    testingFile = testOptions.basePath + '.testing.js'
    driverFile = testOptions.primaryFile
    polyfillFile = 'import-polyfills.js'
    polyfillFileRead = open(polyfillFile, "r")
    if os.path.exists(testingFile) == False:
        driverFile += ''
        # nothing to be done
    elif testOptions.module == 'es6':
        driverFile += '.es6driver.mjs'
        file = open(driverFile, "w")
        driverFileRead = open(testingFile, "r")
        file.write("import module from './" + os.path.basename(testOptions.basePath) + ".mjs'\nimport { createRequire } from 'node:module';\nconst require = createRequire(import.meta.url);\n" + polyfillFileRead.read() + driverFileRead.read() + "\nmodule({relativePath:'" + "', argv: typeof argv == 'undefined' ? [] : argv, env: typeof env == 'undefined' ? [] : env}).then(_ => {onInstantiation(_)}).catch(err => {onError(err)})")
        file.close()
    elif testOptions.module == 'commonjs':
        driverFile += '.commonjsdriver.js'
        file = open(driverFile, "w")
        driverFileRead = open(testingFile, "r")
        file.write(polyfillFileRead.read() + driverFileRead.read() + "\nrequire('./" + os.path.basename(testOptions.basePath) + "').then(_ => {onInstantiation(_)}).catch(err => {onError(err)})")
        file.close()
    elif testOptions.module == 'closure':
        driverFile += '.closure.js'
        file = open(driverFile, "w")
        compiledFileRead = open(testOptions.primaryFile, "r")
        driverFileRead = open(testingFile, "r")
        file.write(compiledFileRead.read() + "\n")
        if testOptions.pthread == True:
          file.write("if (typeof require==='function'){\n")
        file.write(polyfillFileRead.read() + driverFileRead.read() + "\ngetPromise(global).then(_=>{onInstantiation(global)}).catch(err => {onError(err)})\n")
        if testOptions.pthread == True:
          file.write("}")
        file.close()
    else:
        driverFile += '.vanilla.js'
        file = open(driverFile, "w")
        compiledFileRead = open(testOptions.primaryFile, "r")
        driverFileRead = open(testingFile, "r")
        file.write(compiledFileRead.read() + "\n")
        if testOptions.pthread == True:
          file.write("if (typeof require === 'function'){\n")
        file.write(polyfillFileRead.read() + driverFileRead.read() + "\nvar EXPORTS = getExports()\ngetPromise(EXPORTS).then(_=>{onInstantiation(getExports())}).catch(err => {onError(err)})\n")
        if testOptions.pthread == True:
          file.write("}")
        file.close()

    startTime = time.time();
    ret=subprocess.call(engine + [driverFile], stderr=testReport,
        stdout=testOut)
    timeTaken = time.time() - startTime;

    # Reset the read position to the beginning of the output. Otherwise
    # it's not possible to check if there are errors in the output lines.
    testOut.seek(0)

    testReport.seek(0)
    if ret == 0:
        for testLine in testOut:
            match = re.match("^(.*) : (.*)",testLine)
            if match:
                checkName = match.group(1)
                result = match.group(2)
                testReport.write('<testcase classname="check" name="%s">' % escape(checkName))
                if result!="SUCCESS":
                    testReport.write('<failure type="Self check error">%s</failure>' % testLine)
                    failure = True
                testReport.write('</testcase>')

            match = re.search("error|fail|invalid", testLine, re.IGNORECASE)
            failure |= bool(match)
        for testLineErr in testReport:
            match = re.search("error|fail|invalid", testLineErr, re.IGNORECASE)
            if (testOptions.allowSABwarning and match):
                match = not re.search("Invalid heap type: SharedArrayBuffer", testLineErr)
            failure |= bool(match)
    else:
        failure = True

    testReport.write('<testcase classname="run-%s" name="%s">' % (testOptions.mode,testName))
    if failure:
        emitError(testReport, "Runtime error", testOut)
    testReport.write('</testcase>')

    return [failure, timeTaken]

def shouldTestDeterminism():
    if option.determinism == 0:
        return False
    if random.random() < probability_determinism:
        return True
    return False

class TestOptions:
    def __init__(self, mode, basePath, extraFlags):
        self.mode = mode
        if (mode == "wasm"):
            self.secondaryFile = basePath + ".wasm"
        self.module = 'none'
        self.pthread = False
        self.allowSABwarning = False
        for f in extraFlags:
            if f == '-cheerp-make-module=es6':
                self.module = 'es6'
            if f == '-cheerp-make-module=closure':
                self.module = 'closure'
            if f == '-cheerp-make-module=commonjs':
                self.module = 'commonjs'
            if f == '-pthread':
                self.pthread = True
                self.allowSABwarning = True
        self.primaryFile = basePath + ".js"
        if (self.module == 'es6'):
            self.primaryFile = basePath + ".mjs"
        self.dtsFile = basePath + ".d.ts"
        self.basePath = basePath

def getSignature(name, options):
    return options.mode + "_" + options.module + "_" + name

def do_test(test):
    status = "pass"
    compileTimeTotal = 0
    runTimeTotal = 0

    head, tail = os.path.split(test.name)
    name, _ = os.path.splitext(tail)

    stdoutLog = open("%s.log" % test.name,"w+")
    stdrepLog = open("%s_testreport" % test.name,"w+")
    reportA = open("%s.reportA" % test.name,"w+")
    reportB = open("%s.reportB" % test.name,"w+")

    test_runs = [
        (option.preexecute, "genericjs", not test.preexecutable,
            preExecuteTest, None, []),
        (option.preexecute_asmjs, "asmjs", not test.preexecutable,
            preExecuteTest, None, []),
    ]
    for flags in test.flags:
        test_runs += [(option.genericjs, "genericjs", not test.genericjs,
                compileTest, runTest, flags)]
        test_runs += [(option.asmjs, "asmjs", not test.asmjs,
                compileTest, runTest, flags)]
        test_runs += [(option.wasm, "wasm", not test.wasm,
                compileTest, runTest, flags)]

    for enabled, mode, skip, compile_mode, run, extraFlags in test_runs:
        if not enabled or skip:
            continue

        if prefix:
            basePath = os.path.join(head, prefix + "_" + name)
        else:
            basePath = os.path.join(head, name)

        testOptions = TestOptions(mode,  basePath, extraFlags)

        if (compile_mode is compileTest):
            command = compileCommand
        elif (compile_mode is preExecuteTest):
            command = compileCommandPreExecuter
        else:
            command = None

        assert command
        possible_commands = list()
        possible_commands.append(command(clang, mode, test.name, extraFlags))

        if option.valgrind:
            possible_commands.append(["valgrind", "-q"] + possible_commands[0])

        signature = getSignature(test.name, testOptions)
        if compile_mode is preExecuteTest:
            signature += "_preexecuted"

        def get_next_command(commands = possible_commands):
            #Rotate the list of commands, and return the first
            commands.insert(0, commands.pop())
            return commands[0]

        # TODO: put the "extra" in the classname, not the name of the test
        test_id = test.name
        if len(extraFlags) > 0:
            test_id += ".extra"
        compileResult, timeTaken = compile_mode(get_next_command(), testOptions, test_id, stdrepLog, stdoutLog)
        compileTimeTotal += timeTaken
        if compileResult:
            status = "error"
        elif shouldTestDeterminism():
            if option.determinism != 1:
                #Compute the seed for a given outFile, and use it to select some passes to call -print-after-all on
                seed = int(computeHash(str(testOptions.primaryFile)), 16)
                addPrintAfter = printAfter(seed)
                compile_command = get_next_command()
                determinismTest(compile_command, str(addPrintAfter), signature, testOptions.primaryFile, stdrepLog, stdoutLog, reportA, reportB, True)
                for _ in range(2):
                    if determinismTest(compile_command, str(addPrintAfter), signature, testOptions.primaryFile, stdrepLog, stdoutLog, reportA, reportB, False):
                        status = "determinism_error"
                        break
        if status == "pass" and run:
            runResult, timeTaken = run(jsEngine, testOptions, test_id, stdrepLog, stdoutLog)
            runTimeTotal += timeTaken
            if runResult:
                status = "assertion"

    stdoutLog.close()
    stdrepLog.close()
    reportA.close()
    reportB.close()

    if option.print_stats:
        stats.record(status)
    return [status, compileTimeTotal, runTimeTotal]


executor = concurrent.futures.ThreadPoolExecutor(jobs)
futures = [executor.submit(do_test, test) for test in selected_tests]

progress = 0
exitValue = 0
for test, future in zip(selected_tests, futures):
    # Re-raise any error that is thrown while running the tests.
    status, compileTimeTotal, runTimeTotal = future.result()
    if status != "pass":
        exitValue = 1

    progress += 1
    done = progress * 100 / len(selected_tests)
    if option.time_tests:
        sys.stdout.write("[%3d%%] %-36s %s %7.2f %7.2f\n" % (done, test.name, status, compileTimeTotal, runTimeTotal))
    else:
        sys.stdout.write("[%3d%%] %-36s %s\n" % (done, test.name, status))

# Build back the testReport, testErrs and testOut files
testReport = open("testReport.test", "w")
testOut = open("testOut.out", "w+")
reportA = open("testDeterminism.A", "w")
reportB = open("testDeterminism.B", "w")

testReport.write('<testsuite>')

def writeLinesAndRemove(destination, source):
    lines = open(source, "r")
    for line in lines:
        destination.write(line)
    lines.close()
    if not option.keep_logs:
        os.remove(source)

for t in selected_tests:
    writeLinesAndRemove(testReport, "%s_testreport" % t.name)
    writeLinesAndRemove(testOut, "%s.log" % t.name)
    writeLinesAndRemove(reportA, "%s.reportA" % t.name)
    writeLinesAndRemove(reportB, "%s.reportB" % t.name)

testReport.write('</testsuite>')

testReport.close()
reportA.close()
reportB.close()

if option.print_stats:
    stats.report()

exit(exitValue)
