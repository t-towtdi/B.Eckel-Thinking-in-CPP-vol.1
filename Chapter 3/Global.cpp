//: C03:Global.cpp
//{L} Global2
// Использование глобальных переменных
#include <iostream>
using namespace std;

int globe;
void func();
int main() {
	globe = 12;
	cout << globe << endl;
	func();	// Модификация globe
	cout << globe << endl;
} ///:~