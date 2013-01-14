//: EX03:Ex19.cpp
// Измените программу ArrayAddress.cpp так, чтобы она работала с данными
// типов char, long, int, float и double
#include <iostream>
using namespace std;

int main() {
	char a[10];
	cout << "sizeof(int) = " << sizeof(int) << endl;
	for (int i = 0; i < 10; i++)
		cout << "&a[" << i << "] = "
		<< (long)&a[i] << endl;
} ///:~