// first call should be ok, second error
int foo(const char* c) {
	return c[0];
}
[[cheerp::genericjs]]
int main() {
	foo("test");
	const char* a = "test";
	foo(a);
	return 0;
}
