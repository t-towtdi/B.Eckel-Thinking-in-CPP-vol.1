//: C08:ConstMember:cpp
class X {
	int i;
public:
	X(int ii);
	int f() const;
};

X::X(int ii) : i(ii) {}
int X::f() const { return i; }

int main() {
	X x1(10);
	const X x2(20);
	x1.f();
	x2.f();
} ///:~
