//: EX03:Ex18.cpp
// Ќапишите программу, в которой сразу же друг за другом определ€ютс€
// два массива int. —местите индекс от конца первого массива во второй массив
// и выполните присваивание. ¬ыведите содержимое второго массива и убедитесь
// в том, что оно изменилось. ѕопробуйте определить переменную типа char между
// двум€ определени€ми массивов и повторите эксперимент. ¬еро€тно, дл€ простоты
// стоит создать вспомогательную функцию вывода массива.
#include <iostream>
using namespace std;

void show_array(int* array_to_show, int size) {
	cout << "Array elements are: " << endl;
	for (int i = 0; i < size; i++, array_to_show++)
		cout << *array_to_show << " ";
	cout << endl;
}

void show_addresses(int* array_to_show, int size) {
	cout << "Array addresses is following: " << endl;
	for (int i = 0; i < size; i++, array_to_show++)
		cout << (long)array_to_show << " ";
}

int main() {
	int a[10];
	char var = 'c';
	int b[10];
	
	for (int i = 0; i < 20; i++)
		b[i] = i;
	
	show_addresses(a, 10);
	show_addresses(b, 10);
	
	show_array(a, 10);
	show_array(b, 10);
	
	cout << "&a[9] : " << &a[9] << endl;
	cout << "char var address : " << (int)&var << endl;
} ///:~