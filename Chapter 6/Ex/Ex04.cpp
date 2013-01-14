//: EX06:Ex04.cpp
// Докажите, что деструкторы вызываются даже при выходе из цикла с помощью 
// команды goto
#include <iostream>
using namespace std;

class Simple {
	int i;
public:
	Simple();
	Simple(int value);
	void print();
	~Simple();
};

Simple::Simple() {
	cout << "Simple::Simple()" << endl;
	cout << "i value is " << i << endl;
}

Simple::Simple(int value) {
	i = value;
	cout << "Simple::Simple(int i)" << endl;
	cout << "i value is " << i << endl;
}

void Simple::print() {
	cout << "Class Simple hidden value is " << i << endl;
}

Simple::~Simple() {
	cout << "Simple::~Simple()" << endl;
	cout << "i value is " << i << endl;
}

int main() {
	for (int i = 0; i < 5; i++) {
		Simple s(i);
		if (i == 3) goto exit;
	}
	exit:
	cout << "Proved!" << endl;
} ///:~
