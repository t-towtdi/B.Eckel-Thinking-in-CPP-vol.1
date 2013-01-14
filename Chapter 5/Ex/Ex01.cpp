//: EX05:Ex01.cpp
// Создайте класс с открытыми (public), закрытыми (private) и защищенными
// (protected) переменными и функциями. Создайте объект класса и посмотрите,
// какие сообщения выводятся компилятором при попытках обращения ко всем
// категориям членов класса.
#include <iostream>
using namespace std;

class A {
	int a;
	void exchangeAB();
protected:
	int b;
	void setB(int x);
	int getB();
public:	
	int c;
	void setA(int x);
	int getA();
};

void A::exchangeAB() {
	int x = a;
	a = b;
	b = x;
}

void A::setB(int x) {
	b = x;
}

int A::getB() {
	return b;
}

void A::setA(int x) {
	a = x;
}

int A::getA() {
	return a;
}

int main() {
	A a;
	a.c = 0;
	a.setA(0);
	cout << "A.a = " << a.getA() << endl;
	a.setB(0);
	cout << "A.b = " << a.getB() << endl;
	a.exchangeAB();
	cout << "A.a = " << a.getA() << endl;
	cout << "A.b = " << a.getB() << endl;
	cout << "A.a = " << a.a << " A.b = " << a.b << " A.c = " << a.c << endl;
} ///:~
