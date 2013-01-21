//: EX08:Ex22.cpp
// В примере ConstMember.cpp удалите модификатор const в определении функции
// класса, но оставьте его в объявлении. Посмотрите, какое сообщение выдаст
// компилятор.
class X {
	int i;
public:
	X(int ii);
	int f() const;
};

X::X(int ii) : i(ii) {}
// Ex22.cpp:14: error: prototype for `int X::f()' does not match any in class `X'
// Ex22.cpp:9: error: candidate is: int X::f() const
int X::f() { return i; }

int main() {
	X x1(10);
	const X x2(20);
	x1.f();
	x2.f();
} ///:~
