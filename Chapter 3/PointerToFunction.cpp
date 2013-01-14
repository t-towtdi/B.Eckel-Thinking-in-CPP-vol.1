//: C03:PointerToFunction.cpp
// Определение и использование указателя на функцию
#include <iostream>
using namespace std;

void func() {
	cout << "func() called..." << endl;
}

int main() {
	void (*fp)();	// Определение указателя на функцию
	fp = func;		// Инициализация
	(*fp)();		// Разыменование означает вызов функции
	void (*fp2)() = func;	// Определение и инициализация
	(*fp2)();
} ///:~