//: EX05:Ex04.cpp
// Напишите два класса, в каждом из которых имеется функция, получающая
// указатель на объект другого класса. Создайте экземпляры обоих классов
// в main() и вызовите упомянутые функции в каждом классе.
#include <iostream>
using namespace std;

class B;

class A {
	string a;
public:
	void seta(string x);
	void print(B* b);
	friend class B;// А вот так вот не работает void B::print(A* a);
};

class B {
	string b;
public:
	void setb(string x);
	void print(A* a);
	friend void A::print(B* b);
};

void A::seta(string x) {
	a = x;
}

void A::print(B* b) {
	cout << "B.b = " << b->b << endl;
}

void B::setb(string x) {
	b = x;
}

void B::print(A* a) {
	cout << "A.a = " << a->a << endl;
}

int main() {
	A a;
	B b;
	a.seta("Hello ");
	b.setb("world.");
	a.print(&b);
	b.print(&a);
}
