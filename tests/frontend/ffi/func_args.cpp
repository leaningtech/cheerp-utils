// All calls should emit an error

int foo(long long a) {
	return a+1;
}
struct Foo {
	Foo(long long a) {
	}
	int foo(long long a) {
		return ::foo(a);
	}
	int operator()(long long a) {
		return foo(a);
	}
	int operator[](long long a) {
		return foo(a);
	}
	static int foos(long long a) {
		return ::foo(a);
	}
};
[[cheerp::genericjs]]
int main() {
	long long a = 1LL<<33;
	Foo f(a);
	foo(a);
	f.foo(a);
	f(a);
	f[a];
	Foo::foos(a);
	return 0;
}
