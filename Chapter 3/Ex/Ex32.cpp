//: EX30:Ex32.cpp
// Определите функцию, которая получает аргумент типа double и возвращает
// int. Создайте и инициализируйте указатель на эту функцию, затем вызовите
// ее через указатель.
#include <iostream>
using namespace std;

int func(double d) {
	cout << "Double variable with value: " << d << endl;
	return 0;
}

int main() {
	int (*f_ptr)(double);
	f_ptr = func;
	int returned_value = (*f_ptr)(23.23);
	cout << "Returned value is " << returned_value << endl;
} ///:~
