//: EX03:Ex33.cpp
// ќбъ€вите указатель на функцию, котора€ получает аргумент типа int и возвращает
// указатель на функцию с аргументом типа char и возвращаемым значением float
#include <iostream>
using namespace std;

float f2(char) {
	cout << "Function f2" << endl;
	return 32.23;
}

float (*(f1(int)))(char) {
	cout << "Function f1" << endl;
	return f2; 
}

int main() {
	float (*(*f1_ptr)(int))(char);
	f1_ptr = f1;
	;
	float (*f2_ptr)(char);
	f2_ptr = (*f1_ptr)(1212);
	(*f2_ptr)('a');
} ///:~