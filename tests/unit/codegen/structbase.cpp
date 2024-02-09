#include <tests.h>

struct a {
	short b;
	unsigned int c;
	int d;
};
struct {
	struct a b;
} e = {9, 8};
int *f = &e.b.d;
void g() { *f = 234; }

int main() {
	g();
	assertEqual(e.b.c, 8u, "expected to be equal");
}
