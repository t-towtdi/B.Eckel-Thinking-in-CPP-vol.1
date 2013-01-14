//: EX03:Ex28.cpp
// Напишите функцию, которая получает указатель на массив double и размер
// этого массива; функция должна выводить значения всех элементов массива.
// Создайте массив double, проинициализируйте все элементы нулями и выведите массив 
// при помощи функции. При помощи оператора reinterpret_cast преобразуйте 
// начальный адрес массива в unsigned char* и присвойте каждому байту массива
// значение 1 (количество байтов в double должно определяться оператором sizeof).
// Снова вывведите содержимое массива. Как вы думаете, почему элементам не было 
// присвоено значение 1.0?
#include <iostream>
using namespace std;

void printArray(double* array, int array_size) {
	cout << "Array: ";
	for (int i = 0; i < array_size; i++)
		cout << array[i] << " ";
	cout << endl;
}

int main() {
	double d[] = {0, 0, 0, 0, 0};
	unsigned char* uchar_ptr = reinterpret_cast<unsigned char*>(d);
	printArray(d, 5);
	
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < sizeof(double); j++)
			uchar_ptr[i * sizeof(double) + j] = 1;
			
	printArray(d, 5);
} ///:~