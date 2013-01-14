//: EX06:Ex07.cpp
// Создайте массив типа double с использованием агрегатной инициализации.
// Размер массива должен быть задан, но количество инициализирующих значений
// в ссписке должно быть меньше количества элементов. Выведите содержимое
// массива, определив его размер при помощи оператора sizeof. Затем создайте
// массив double с использованием агрегатной инициализации и автоматическим
// подсчетом элементов. Выведите содержимое массива.
#include <iostream>
using namespace std;

int main() {
	double array_of_doubles[6] = {1.1, 2.2, 3.3};
	
	for (int i = 0; i < sizeof(array_of_doubles) / sizeof(*array_of_doubles); i++)
		cout << array_of_doubles[i] << endl;
		
	double another_array[] = {1.1, 2.2, 3.3, 4.4, 5.5, .6, .7, 0.3, 3.2};
	
	for (int i = 0; i < sizeof(another_array) / sizeof(*another_array); i++)
		cout << another_array[i] << endl;
	
	} ///:~
	
	