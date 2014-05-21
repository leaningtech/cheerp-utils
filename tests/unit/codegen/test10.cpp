//===---------------------------------------------------------------------===//
//      Copyright 2014 Leaning Technlogies
//===----------------------------------------------------------------------===//

// Test circular dependency between global variables initializers.

#include <tests.h>

struct foo
{
  foo * next;
};

extern foo c;

foo a = { &c };
foo b = { &a };
foo c = { &b };


void webMain()
{
 assertEqual(a.next,&c,"Circular dependency in global variable initializer");
 assertEqual(b.next,&a,"Circular dependency in global variable initializer");
 assertEqual(c.next,&b,"Circular dependency in global variable initializer");
}



