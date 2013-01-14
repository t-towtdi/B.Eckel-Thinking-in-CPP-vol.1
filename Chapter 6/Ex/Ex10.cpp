//: EX06:Ex10.cpp
// Создайте класс без конструкторов и убедитесь в том, что в программе можно
// создавать объекты конструктором по умолчанию. Затем определите для класса
// конструктор, которому при вызове передается аргумент, и попробуйте снова 
// откомпилировать программу. Объясните, что происходит.
#include <iostream>
using namespace std;

class A {
	int a;
public:
	A(int value);
	void seta(int value);
	void print();
};

A::A(int value) {
	a = value;
}

void A::seta(int value) {
	a = value;
}

void A::print() {
	cout << a << endl;
}

int main() {
	A a;
	a.seta(5);
	a.print();
} ///:~
