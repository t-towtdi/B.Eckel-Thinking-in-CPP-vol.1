//: EX04:Ex17.cpp
// С испоьзованием оператора new выполните динамическое выделение
// памяти для следующих типов: int, long, массив из 100 символов (char), массив
// из 100 чисел float. Выведите адреса созданных объектов и освободите память
// оператором delete.
#include <iostream>
using namespace std;

int main() {
	int* i_ptr = new int;
	long* l_ptr = new long;
	char* array = new char[100];
	
	cout << "Address i_ptr: " << static_cast<void*>(i_ptr) << endl;
	cout << "Address l_ptr: " << static_cast<void*>(l_ptr) << endl;
	for (int i = 0; i < 100; i++)
		cout << "Address array[" << i << "]: " << static_cast<void*>(&array[i]) << endl;
	
	delete i_ptr;
	delete l_ptr;
	delete[] array;
}