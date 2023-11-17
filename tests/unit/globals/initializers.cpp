//===---------------------------------------------------------------------===//
//	Copyright 2022 Leaning Technologies
//===----------------------------------------------------------------------===//
#include <tests.h>
#include <stdlib.h>

int* p1 = (int*) malloc(900);
int* p2 = (int*) calloc(1, 900);
int* p3 = (int*) realloc((int*) 0, 900);

int main() {
	assertEqual(p1!=0, true, "expected p1 memory to be allocated");
	assertEqual(p2!=0, true, "expected p2 memory to be allocated");
	assertEqual(p3!=0, true, "expected p3 memory to be allocated");
}
