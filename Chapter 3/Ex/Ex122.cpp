//: EX03:Ex122.cpp
#include <iostream>
using namespace std;

int main() {
	int i, j;
	cout << "Enter an integer: ";
	cin >> i;
	cout << "Enter another integer: ";
	cin >> j;
	cout << "i > j is " << (i > j) << endl;
	cout << "i < j is " << (i < j) << endl;
	cout << "i >= j is " << (i >= j) << endl;
	cout << "i <= j is " << (i <= j) << endl;
	cout << "i == j is " << (i == j) << endl;
	cout << "i != j is " << (i != j) << endl;
	cout << "i && j is " << (i and j) << endl;
	cout << "i || j is " << (i or j) << endl;
	cout << " (i < 10) && (j < 10) is "
	<< ((i < 10) and (j < 10)) << endl;
} ///:~