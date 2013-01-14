//: C03:Union.cpp
// Размер простейшее испоьзование объединения
#include <iostream>
using namespace std;

union Packed {	// Объявление выглядит почти так же, как для структуры
	char i;
	short j;
	int k;
	long l;
	float f;
	double d;
	// Размер объединения равен размеру double.
	// поскольку элемент этого типа является наибольшим.
}; // Объединение, как и структура, завершается символом ";"

int main() {
	cout << "sizeof(Packed) = "
	<< sizeof(Packed) << endl;
	Packed x;
	x.i = 'c';
	cout << x.i << endl;
	x.d = 3.14159;
	cout << x.d << endl;
} ///:~