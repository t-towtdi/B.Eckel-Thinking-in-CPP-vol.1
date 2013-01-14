//: EX06:Ex09.cpp
// Продемонстрируйте механизмы автоматического подсчета элементов и агрегатной
// инициализации на примере массива объектов из упражнения 3. Включите в этот
// класс функцию для вывода сообщения. Вычислите размер массива и переберите его
// элементы, вызывая новую функцию.
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
	Simple a_simple[] = { Simple(1), Simple(2), Simple(3), Simple(4), Simple(5) };
	
	for (int i = 0; i < sizeof(a_simple) / sizeof(*a_simple); i++)
		a_simple[i].print();
} ///:~
