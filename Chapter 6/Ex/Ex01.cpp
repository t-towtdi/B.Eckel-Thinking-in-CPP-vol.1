//: EX06:Ex01.cpp
// Напишите простой класс Simple с конструктором, который должен выводить
// сообщение о вызове. Создайте в функции main() объект этого класса.
#include <iostream>
using namespace std;

class Simple {
	int i;
public:
	Simple();
	Simple(int value);
	void print();
};

Simple::Simple() {
	cout << "Simple::Simple()" << endl;
}

Simple::Simple(int value) {
	i = value;
	cout << "Simple::Simple(int i)" << endl;
}

void Simple::print() {
	cout << "Class Simple hidden value is " << i << endl;
}

int main() {
	Simple s;
} ///:~
