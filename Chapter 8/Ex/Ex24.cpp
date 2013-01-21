//: EX08:Ex24.cpp
// Создайте класс, содержащий константные и неконстантные функции. Попробуйте
// вызвать неконстантную функцию из константной функции и посмотрите, какое 
// сообщение об ошибке будет выдано компилятором.
#include <iostream>

class Arifmetic {
	int a, b;
public:
	Arifmetic();
	Arifmetic(int A, int B);
	long sum() const;
	long difference() const;
	double div() const;
	long mult() const;
	void changeSign();
	void print() const;
	int getA() const;
	void setA(int A);
	int getB() const;
	void setB(int B);
};

Arifmetic::Arifmetic() : a(0), b(0) {}

Arifmetic::Arifmetic(int A, int B) {
	a = A; b = B;
}

long Arifmetic::sum() const {
	return a + b;
}

long Arifmetic::difference() const {
	return a - b;
}

double Arifmetic::div() const {
	return a / b;
}

long Arifmetic::mult() const {
	return a * b;
}
	
void Arifmetic::changeSign() {
	a *= -1;
	b *= -1;
}
	
void Arifmetic::print() const {
	// Ex24.cpp:52: error: passing `const Arifmetic' as `this' argument of 
	// `void Arifmetic::setA(int)' discards qualifiers
//!	setA(666);
	std::cout << "A is " << a << "; B is " << b << ";" << std::endl;
}
	
int Arifmetic::getA() const {
	return a;
}
	
void Arifmetic::setA(int A) {
	a = A;
}

int Arifmetic::getB() const {
	return b;
}
void Arifmetic::setB(int B) {
	b = B;
}

int main() {
	Arifmetic a12;
	const Arifmetic ca12(23, 12);
	a12.print();
	a12.setA(4);
	a12.setB(5);
	std::cout << a12.sum() << std::endl;
	std::cout << ca12.sum() << std::endl;
	ca12.print();
} ///:~
