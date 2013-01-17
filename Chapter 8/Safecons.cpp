//: C08:Safecons.cpp
// Использование const для защиты данных
#include <iostream>
using namespace std;

const int i = 100;		// Типичная константа
const int j = i + 10;	// Значение константного выражения
long address = (long)&j;// Требует выделения памяти
char buf[j + 10];		// Также константное выражение

int main() {
	cout << "type a character & CR:";
	const char c = cin.get();	// Изменение невозможно
	const char c2 = c + 'a';
	cout << c2;
	//...
} ///:~
