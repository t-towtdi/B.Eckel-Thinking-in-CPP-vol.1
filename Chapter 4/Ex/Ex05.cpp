//: EX04:Ex05.cpp
// Повторите упражнение 4, но переопределите функции так, чтобы они были
// членами структуры. Повторите тестирование.
#include <iostream>

struct ex04 {
	int a;
	void func1(int value);
	void func2();
};

void 
ex04::func1(int value) {
	a = value;
}

void 
ex04::func2() {
	std::cout << "value is " << a << std::endl;
}

int main() {
	ex04 ex;
	ex.func1(134);
	ex.func2();
}