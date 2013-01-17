//: C08:ConstInitialization.cpp
// Инициализация констант в классах
#include <iostream>
using namespace std;

class Fred {
	const int size;
public:
	Fred(int sz);
	void print();
};

Fred::Fred(int sz) : size(sz) {}
void Fred::print() { cout << size << endl; }

int main() {
	Fred a(1), b(2), c(3);
	a.print(), b.print(), c.print();
} ///:~
