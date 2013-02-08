//: EX09:Ex15.cpp
// Создайте большое количество объектов из предыдущего упражнения. При помощи класса
// Time измерьте различия во времени работы подставляемых и неподставляемых 
// конструкторов (если у вас имеется профайлер, попробуйте также воспользоваться им).
#include <iostream>

class A {
public:
	A() { std::cout << "A::A() call" << std::endl; } 
	A(int i);
};

class B {
	A* a;
public:
	B() { a = new A(); std::cout << "B::B() call" << std::endl; }
	B(int i);
};

A::A(int i) {
	std::cout << "A::A() call and i = " << i << std::endl;
}

B::B(int i) {
	a = new A(i);
	std::cout << "B::B() call and i = " << i <<  std::endl;
}

int main() {
	clock_t start_inline = clock();
	for (int i = 0; i < 1000; i++) {
		B b;
	}
	clock_t end_inline = clock();
	
	clock_t start = clock();
	for (int i = 0; i < 1000; i++) {
		B b(i);
	}
	clock_t end = clock();
	
	std::cout << "inline time: " << (double)(end_inline - start_inline)/CLOCKS_PER_SEC << std::endl;
	std::cout << "not inline time: " << (double)(end - start)/CLOCKS_PER_SEC << std::endl;
	B b[10];
}
