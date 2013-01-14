//: EX05:Ex08.cpp
// Создайте класс с переменными, распределенными по нескольким секциям
// public, private и protected. Добавьте функцию showMap() для вывода всех
// переменных и их адресов. По возможности откомпилируйте и протестируйте 
// программу с разными компьютерами и/или компиляторами и/или операционными 
// системами. Проверьте, существуют ли различия в формате представления
// объекта.
#include <iostream>
using namespace std;

class A {
	int private_variable1;
protected:
	int protected_variable1;
public:
	int public_variable1;
private:
	int private_variable2;
protected:
	int protected_variable2;
public:
	int public_variable2;
public:	
	void setPrivate(int a, int b);
	void setProtected(int a, int b);
	void setPublic(int a, int b);
	
	
	void showMap();
};

void A::setPrivate(int a, int b) {
	private_variable1 = a; private_variable2 = b;
}

void A::setProtected(int a, int b) {
	protected_variable1 = a; protected_variable2 = b;
}

void A::setPublic(int a, int b) {
	public_variable1 = a; public_variable2 = b;
}

void A::showMap() {
	cout << "private_variable1: " << private_variable1 << " : " << (long)&private_variable1 << endl;
	cout << "private_variable2: " << private_variable2 << " : " << (long)&private_variable2 << endl;
	
	cout << "protected_variable1: " << protected_variable1 << " : " << (long)&protected_variable1 << endl;
	cout << "protected_variable2: " << protected_variable2 << " : " << (long)&protected_variable2 << endl;
	
	cout << "public_variable1: " << public_variable1 << " : " << (long)&public_variable1 << endl;
	cout << "public_variable2: " << public_variable2 << " : " << (long)&public_variable2 << endl;
}

int main() {
	A a;
	a.setPrivate(1, 2);
	a.setProtected(3, 4);
	a.setPublic(5, 6);
	a.showMap();
} ///:~
