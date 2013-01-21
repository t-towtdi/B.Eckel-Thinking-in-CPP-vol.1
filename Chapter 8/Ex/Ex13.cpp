//: EX08:Ex13.cpp
// Напишите функцию, которая получает по значению константный аргумент;
// попробуйте изменить этот аргумент в теле функции.
#include <iostream>

void print(const int value) {
//	Ex13.cpp:7: error: assignment of read-only parameter `value'
//!	value = 7;
	std::cout << "Value is " << value << std::endl;
}

int main() {
	print(5);
} ///:~
