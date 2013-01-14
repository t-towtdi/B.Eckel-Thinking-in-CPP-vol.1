//: EX03:Ex26.cpp
// Определите массив типа int. Получите начальный адрес массива и приведите
// его к типу void* при помощи оператора static_cast. Напишите функцию,
// в аргументах которой передаются void*, число (количество байтов)
// и значение. Фукнция должна присваивать передаваемое значение каждому 
// байту в заданном интервале. Протестируйте работу функции на массиве int.
#include "../printBinary.h"
#include <iostream>
using namespace std;

void set_bytes(void* array, int range, unsigned char value) {
	char* uchar_array_ptr = reinterpret_cast<char*>(array);
	for (int i = 0; i < range; i++, uchar_array_ptr++) {
		*uchar_array_ptr = 0;
		*uchar_array_ptr ^= value;
		printBinary(*uchar_array_ptr); cout << " ";
	}
}

int main() {
	int a[2];
	void* array_ptr = static_cast<void*>(a);
	
	set_bytes(array_ptr, sizeof(a), 1);
	
	cout << "Result array: " << endl;
	for (int i = 0; i < 2; i++)
		cout << a[i] << " ";
} ///:~