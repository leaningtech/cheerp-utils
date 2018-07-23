// first call should be ok, second error
int foo(int(*bar)()) {
	return bar();
}
int bar() {
	return 10;
}

[[cheerp::genericjs]]
int main() {

	foo(bar);
	foo(&bar);
	return 0;
}
