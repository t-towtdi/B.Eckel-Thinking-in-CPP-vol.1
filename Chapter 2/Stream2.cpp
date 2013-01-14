//: C02:Stream2.cpp
// ƒополнительные возможности потоков
#include <iostream>
using namespace std;

int main() {
	// ќпределение формата при помощи манипул€торов:
	cout << "a number in decimal: "
	     << dec << 15 << endl;
	cout << "in octal: " << oct << 15 << endl;
	cout << "in hex: " << hex << 15 << endl;
	cout << "a floating-point number: "
	     << 3.14159 << endl;
	cout << "non-printing char (escape): "
		 << char(27) << endl;
} ///:~