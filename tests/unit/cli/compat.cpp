//===---------------------------------------------------------------------===//
//	Copyright 2024 Leaning Technologies
//===----------------------------------------------------------------------===//
#include <tests.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

[[cheerp::genericjs]]
int main(int argc, char **argv, char **env) {
  assertEqual(argc==0, true, "expected no arguments");
  assertEqual(argv==nullptr, true, "expected argv to be null");
  assertEqual(env[0]==nullptr, true, "expected env[0] to be null");
}
