//: EX04:Ex16.cpp
// Имзмените структуру Stash, чтобы данные хранились в объекте типа
// vector<char>
#include "Stash.h"
#include <iostream>
using namespace std;

int main() {
	Stash s;
	double d1 = 23.23, d2 = 435.234, d3 = 2.23;
	s.initialize(sizeof(double));
	s.add(&d1);
	s.add(&d2);
	s.add(&d3);
	
	cout << "Values: " << endl;

	for (int i = 0; i < s.count(); i++)
		cout << *(double *)s.fetch(i) << endl;
	cout << endl;
}