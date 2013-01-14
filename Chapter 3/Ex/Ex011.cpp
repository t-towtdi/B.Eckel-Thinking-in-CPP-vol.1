//: EX03:Ex011.cpp
#include "Ex011.h"
#include <iostream>
using namespace std;

void a(char b) {
	cout << "function a(char b); parameter b: " << b << endl;
}

char b(int c) {
	cout << "function b(int c); parameter c: " << c << endl;
	return 'c';
}

int c(float d) {
	cout << "function c(int d); parameter d: " << d << endl;
	return 3;
}

float d(void) {
	cout << "function d(void); no parameters there " << endl;
	return 3.3;
}