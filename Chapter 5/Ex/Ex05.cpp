//: EX05:Ex05.cpp
// Создайте три класса. Первый класс должен содержать закрытые данные, но
// предоставлять дружественный доступ всему второму классу и одной из фукнций
// третьего класса. Покажите в функции main(), что все три класса работают 
// правильно.
#include <iostream>
using namespace std;

class A;

class C {
public:
	void seta(A* a, int value);
};

class A {
	int a;
	friend class B;
	friend void C::seta(A* a, int value);
public:
	void print();
};

class B {
public:
	void fooA();
};

void A::print() {
	cout << "A.a = " << a << endl;
}

void B::fooA() {
	A a;
	C c;
	c.seta(&a, 5);
	a.print();
}

void C::seta(A* a, int value) {
	a->a = value;
}



int main() {
	B b;
	b.fooA();
} ///:~
