//: EX04:Ex07.cpp
// —оздайте структуру Stash дл€ хранени€ данных типа double. «аполните ее
// 25 значени€ми double и выведите их на консоль
#include "../CppLib.h"
#include <iostream>
using namespace std;

int main() {
	Stash s;
	s.initialize(sizeof(double));
	for (int i = 0; i < 25; i++) {
		double d = i * 0.91;
		s.add(&d);
	}
	for (int i = 0; i < 25; i++)
		cout << "s[" << i << "]=" << *(double*)s.fetch(i) << endl;
}
