//: C03:Charlist.cpp
// Вывод всех символов ASCII
// Демонстрация цикла "for"
#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i< 128; i = i + 1)
		if (i != 16)	// Очистка экрана на терминалах ANSI
			cout << " value: " << i
				 << " character: "
				 << char(i)	// Приведение типа
				 << endl;
} ///:~