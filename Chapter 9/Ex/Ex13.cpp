//: EX09:Ex13.cpp
// Создайте класс с двумя подставляемыми функциями. Первая функция должна вызывать
// вторую функцию без опережающего объявления. Напишите функцию main(), которая 
// создает объект класса и вызвает первую функцию.
#include <iostream>

class X {
public:
	inline void f1() {
		f2();
		std::cout << "f1.f2() call" << std::endl;
	}
	inline void f2() {
		std::cout << "f2() call" << std::endl;
	}
};

int main() {
	X x;
	x.f1();
}
