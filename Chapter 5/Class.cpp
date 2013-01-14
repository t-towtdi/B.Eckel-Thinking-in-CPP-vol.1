//: C05:Class.cpp
// —ходство между классами и структурами

struct A {
private:
	int i, j, k;
public:
	int f();
	void g();
};

int A::f() {
	return i + j + k;
}

void A::g() {
	i = j = k = 0;
}

class B {
	int i, j, k;
public:
	int f();
	void g();
};

int B::f() {
	return i + j + k;
}

void B::g() {
	i = j = k = 0;
}

int main() {
	A a;
	B b;
	a.f(); a.g();
	b.f(); b.g();
} ///:~
