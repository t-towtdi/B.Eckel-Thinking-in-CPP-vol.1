//: EX04:Ex08.cpp
// Повторите упражнение 7 для структуры Stack
#include "..\Stack.h"
#include <iostream>
using namespace std;

int main() {
	Stack s;
	s.initialize();
	for (int i = 0; i < 25; i++) {
		double* d = new double(i * 0.435);
		s.push(d);
	}
	double* d;
	while ((d = (double*)s.pop()) != 0) {
		cout <<  *d << endl;
		delete d;
	}
		
	s.cleanup();
}
