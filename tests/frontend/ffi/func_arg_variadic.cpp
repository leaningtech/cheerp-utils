// first call is ok, second error

int foo(int i, ...) {
	return i;
} 

[[cheerp::genericjs]]
int main() {
	foo(1,1);
	foo(1,1LL);
	return 0;
}
