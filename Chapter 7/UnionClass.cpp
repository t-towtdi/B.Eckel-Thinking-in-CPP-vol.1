//: C07:UnionClass.cpp
// Объединение с конструктором и функциями
#include <iostream>
using namespace std;

union U {
private:	// Управление доступом тоже поддерживается!
	int i;
	float f;
public:
	U(int a);
	U(float b);
	~U();
	int read_int();
	float read_float();
};

U::U(int a) { i = a; }
U::U(float b) { f = b; }
U::~U() { cout << "U::~U()\n"; }
int U::read_int() { return i; }
float U::read_float() { return f; }
int main() {
	U X(12), Y(1.9F);
	cout << X.read_int() << endl;
	cout << Y.read_float() << endl;
} ///:~
