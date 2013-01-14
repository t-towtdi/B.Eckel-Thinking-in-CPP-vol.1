//: EX03:Ex121.cpp
//{L} printBinary
// Демонстрация поразрядных опреаций
#include "../printBinary.h"
#include <iostream>
using namespace std;

// Вспомогательный макрос:
#define PR(STR, EXPR) \
cout << STR; printBinary(EXPR); cout << endl;

int main() {
	unsigned int getval;
	unsigned char a, b;
	cout << "Enter a number between 0 and 255: ";
	cin >> getval; a = getval;
	PR("a in binary: ", a);
	cout << "Enter a number between 0 and 255: ";
	cin >> getval; b = getval;
	PR("b in binary: ", b);
	PR("a | b = ", a bitor b);
	PR("a & b = ", a bitand b);
	PR("a ^ b = ", a xor b);
	PR("~a = ", compl a);
	PR("~b = ", compl b);
	// Интересная битовая маска
	unsigned char c = 0x5A;
	PR("c in binary: ", c);
	a or_eq c;
	PR("a | c: a = ", a);
	b and_eq c;
	PR("b &= c; b = ", b);
	b xor_eq a;
	PR("b ^= a: b = ", b);
} ///:~