//: C03:AutoIncrement.cpp
// Использование операторов инкремента и декремента
#include <iostream>
using namespace std;

int main() {
	int i = 0;
	int j = 0;
	cout << ++i << endl;	// Префиксное увеличение
	cout << j++ << endl;	// Постфиксное увеличение
	cout << --i << endl;	// Префиксное уменьшение
	cout << j-- << endl;	// Постфиксное уменьшение
} ///:~