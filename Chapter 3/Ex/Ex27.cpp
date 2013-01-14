//: EX03:Ex27.cpp
// Создайте const-массив double и volatile-массив double. Переберите 
// эелементы каждого массива в цикле, при помощи оператора const_cast отмените
// для каждого элемента атрибуты const и volatile и присвойте ему значение
#include <iostream>
using namespace std;

int main() {
	const int size = 5;
	const double d1[] = {1.1, 1.2, 1.3, 1.4, 1.5};
	volatile double d2[] = {2.1, 2.2, 2.3, 2.4, 2.5};
	
	for (int i = 0; i < size; i++) {
		double* d = const_cast<double*>(&d1[i]);
		*d = 5.5;
		d = const_cast<double*>(&d2[i]);
		*d = 6.6;
	}
	
	cout << "After change array d1: " << endl;
	for (int i = 0; i < size; i++) {
		cout << d1[i] << ", " << endl;
	}
	
	cout << "After change array d2: " << endl;
	for (int i = 0; i < size; i++) {
		cout << d2[i] << ", " << endl;
	}
	
} ///:~