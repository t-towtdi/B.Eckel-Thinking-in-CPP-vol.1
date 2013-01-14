//: EX04:Ex06.cpp
// Создайте класс, который бы при обращениях к своим переменным и вызове
// функций-членов использовал указатель this (избыточный), ссылающийся
// на адрес текущего объекта.
#include <iostream>

struct ex06 {
	int a;
	void func1(int value);
	void func2();
};

void 
ex06::func1(int value) {
	this->a = value;
}

void 
ex06::func2() {
	std::cout << "value is " << this->a << std::endl;
}

int main() {
	ex06 ex;
	ex.func1(134);
	ex.func2();
}