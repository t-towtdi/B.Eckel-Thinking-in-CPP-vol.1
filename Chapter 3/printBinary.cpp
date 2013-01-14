//: C03:printBinary.cpp {0}
#include <iostream>
void printBinary(const unsigned char val) {
	for (int i = 7; i >= 0; i--)
		if (val & (1 << i))
			std::cout << "1";
		else
			std::cout << "0";
} ///:~