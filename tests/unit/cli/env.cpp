//===---------------------------------------------------------------------===//
//	Copyright 2024 Leaning Technologies
//===----------------------------------------------------------------------===//
#include <tests.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

extern char **environ;

int main(int argc, char **argv, char **env) {
  assertEqual(strcmp(getenv("TEST"), "1")==0, true, "expected TEST environment variable to be 1");
  assertEqual(strcmp(env[0], "TEST=1")==0, true, "expected environ to be passed to main");
  assertEqual(env[1]==nullptr, true, "expected only one environment variable");
}
