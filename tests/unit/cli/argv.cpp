//===---------------------------------------------------------------------===//
//	Copyright 2024 Leaning Technologies
//===----------------------------------------------------------------------===//
#include <tests.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

extern char **environ;

int main(int argc, char **argv) {
  assertEqual(argc, 1, "expected one argument");
  assertEqual(argv!=nullptr, true, "expected argv to not be a nullptr");
  assertEqual(strcmp(argv[0], "argv.cpp"), 0, "expected argument 0 to be the filename");
}
