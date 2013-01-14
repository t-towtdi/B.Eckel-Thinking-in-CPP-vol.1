//: C03:PassReference.cpp
#include <iostream>
using namespace std;

void f(int& r) {
	cout << "r = " << r << endl;
	cout << "&r = " << &r << endl;
	r = 5;
	cout << "r = " << r << endl;
}

int main() {
	int x = 47;
	cout << "x = " << x << endl;
	cout << "&x = " << &x << endl;
	f(x);	// ¬ыгл€дит как передача по значению,
			// но в действительности аргумент передаетс€ по ссылке
	cout << "x = " << x << endl;
} ///:~