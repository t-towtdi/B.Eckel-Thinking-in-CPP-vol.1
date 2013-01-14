//: EX04:Ex15.cpp
// Напишите программу, которая бы выводила размеры всех встроенных типов 
// данных на вашем компьютере с использование оператора sizeof
#include <iostream>
using namespace std;

int main() {
	cout << "sizeof(unsigned char): " << sizeof(unsigned char) << endl;
	cout << "sizeof(signed char): " << sizeof(signed char) << endl;
	cout << "sizeof(unsigned short int): " << sizeof(unsigned short int) << endl;
	cout << "sizeof(unsigned long int): " << sizeof(unsigned long int) << endl;
	cout << "sizeof(signed short int): " << sizeof(signed short int) << endl;
	cout << "sizeof(signed long int): " << sizeof(signed long int) << endl;
	cout << "sizeof(unsigned long long): " << sizeof(unsigned long long) << endl;
	cout << "sizeof(signed long long): " << sizeof(signed long long) << endl;
	cout << "sizeof(double): " << sizeof(double) << endl;
	cout << "sizeof(long double): " << sizeof(long double) << endl;
	cout << "sizeof(float): " << sizeof(float) << endl;
}