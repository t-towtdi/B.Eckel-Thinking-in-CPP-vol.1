//: EX03:Ex13.cpp
// Измените программу Bitwise.cpp так, чтобы в ней использовались функции
// из программы Rotate.cpp. Представление результатов должно четко и наглядно
// показывать, что происходит при циклическом сдвиге.
#include "../printBinary.h"
#include "../Rotation.h"
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
	PR("a | b = ", a | b);
	PR("a & b = ", a & b);
	PR("a ^ b = ", a ^ b);
	PR("~a = ", ~a);
	PR("~b = ", ~b);
	PR("ror(a) = ", ror(a));
	PR("ror(b) = ", ror(b));
	PR("rol(a) = ", rol(a));
	PR("rol(b) = ", rol(b));
	// Интересная битовая маска
	unsigned char c = 0x5A;
	PR("c in binary: ", c);
	a |= c;
	PR("a | c: a = ", a);
	b &= c;
	PR("b &= c; b = ", b);
	b ^= a;
	PR("b ^= a: b = ", b);
} ///:~