//: EX06:Ex03.cpp
// ƒобавьте в класс из упражнени€ 2 переменную типа int. »змените конструктор
// так, чтобы при вызове ему передавалс€ аргумент int, значение которого
// должно сохран€тьс€ в переменной класса. » конструктор, и деструктор
// должны выводить значение int в своих сообщени€х; это позволит отслеживать
// моменты создани€ и уничтожени€ объектов.
#include <iostream>
using namespace std;

class Simple {
	int i;
public:
	Simple();
	Simple(int value);
	void print();
	~Simple();
};

Simple::Simple() {
	cout << "Simple::Simple()" << endl;
	cout << "i value is " << i << endl;
}

Simple::Simple(int value) {
	i = value;
	cout << "Simple::Simple(int i)" << endl;
	cout << "i value is " << i << endl;
}

void Simple::print() {
	cout << "Class Simple hidden value is " << i << endl;
}

Simple::~Simple() {
	cout << "Simple::~Simple()" << endl;
	cout << "i value is " << i << endl;
}

int main() {
	Simple s;
} ///:~
