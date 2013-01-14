//: EX03:Ex02.cpp
// Напишите программу, которая при помощи двух влженных циклов for
// и оператора вычисления остатка (%) находит и выводит простые числа (то
// есть целые числа, которые нацело делятся только на себя и на 1).
#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i <= 1000; i++)
		for (int j = 2; j <= i; j++)
			if (i % j == 0 && i != j) break;
			else if (i % j == 0 && i == j)
				cout << i << " is prime number" << endl;
}