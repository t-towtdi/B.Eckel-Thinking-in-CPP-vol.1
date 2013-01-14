//: C03:StringizingExpressions.cpp
#include <iostream>
using namespace std;

#ifndef DEBUG
#define P(A) cout << #A << ": " << (A) << endl;
#endif // DEBUG

int main() {
	int a = 1, b = 2, c = 3;
	P(a); P(b); P(c);
	P(a + b);
	P((c - a) / b);
} ///:~