//: C07:SuperVar.cpp
// Универсальная переменная
#include <iostream>
using namespace std;

class SuperVar {
	enum {
		character,
		integer,
		floating_point
	} vartype;	// Определение типа
	union {		// Анонимное объединение
		char c;
		int i;
		float f;
	};
public:
	SuperVar(char ch);
	SuperVar(int ii);
	SuperVar(float ff);
	void print();
};

SuperVar::SuperVar(char ch) {
	vartype = character;
	c = ch;
}

SuperVar::SuperVar(int ii) {
	vartype = integer;
	i = ii;
}

SuperVar::SuperVar(float ff) {
	vartype = floating_point;
	f = ff;
}

void SuperVar::print() {
	switch (vartype) {
	case character:
		cout << "character: " << c << endl;
		break;
	case integer:
		cout << "integer: " << i << endl;
		break;
	case floating_point:
		cout << "float: " << f << endl;
		break;
	}
}

int main() {
	SuperVar A('c'), B(12), C(1.44F);
	A.print();
	B.print();
	C.print();
} ///:~
