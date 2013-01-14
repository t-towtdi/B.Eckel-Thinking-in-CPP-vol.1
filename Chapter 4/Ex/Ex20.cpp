//: EX04:Ex20.cpp
// Сколько памяти занимает структура? Напишите фрагмент программы,
// в котором бы выводились размеры разных структур. Создайте структуры,
// содержащие только переменные, а также структуры, содержащие переменные
// и функции. Создайте пустую структуру вообще без членов. Выведите размеры
// этих структур. Объясните результат для случая пустой структуры.
#include <iostream>
using namespace std;

struct Struct1 {
};

struct Struct2 {
	int i;
	long l;
	double d;
};

struct Struct3 {
	int i;
	long l;
	double d;
	void func1();
	void func2();
};

void Struct3::func1() {}
void Struct3::func2() {}

struct Struct4 {
	void func1();
	void func2();
};

void Struct4::func1() {}
void Struct4::func2() {}

int main() {
	cout << "sizeof(Struct1) = " << sizeof(Struct1) << endl;
	cout << "sizeof(Struct2) = " << sizeof(Struct2) << endl;
	cout << "sizeof(Struct3) = " << sizeof(Struct3) << endl;
	cout << "sizeof(Struct4) = " << sizeof(Struct4) << endl;
} ///:~