//: EX03:Ex05.cpp
// Напишите программу для вычислений значений двух выражений из подраздела
// "Приоритет" в разделе "Знакомство с операторами"
#include <iostream>
using namespace std;

int main() {
	int X, Y, Z;
	cout << "Enter X: "; cin >> X;
	cout << "Enter Y: "; cin >> Y;
	cout << "Enter Z: "; cin >> Z;
	
	cout << "Result for first expression: " << X + Y - 2 / 2 + Z << endl;
	cout << "Result for second expression: " << X + (Y - 2) / (2 + Z) << endl;
} ///:~