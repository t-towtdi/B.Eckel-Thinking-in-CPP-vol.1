//: C08:BuiltInTypeConstructors.cpp
#include <iostream>
using namespace std;

class B {
	int i;
public:
	B(int ii);
	void print();
};

B::B(int ii) : i(ii) {}
void B::print() {cout << i << endl; }

int main() {
	B a(10), b(2);
	float pi(3.14159);
	a.print(), b.print();
	cout << pi << endl;
} ///:~
