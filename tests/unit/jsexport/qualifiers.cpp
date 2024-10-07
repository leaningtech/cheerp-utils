#include <cheerp/clientlib.h>

// No asserts here, just make sure it compiles.

[[cheerp::jsexport]] [[cheerp::genericjs]]
void foo(const int, const client::String&, const client::String*) {}
