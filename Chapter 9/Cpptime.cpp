//: Cpptime.cpp
// Тестирование простого класса для работы со временем
#include "Cpptime.h"
#include <iostream>
using namespace std;
int main() {
	Time start;
	for (int i = 1; i < 1000; i++) {
		cout << i << ' ';
		if (i % 10 == 0) cout << endl;
	}
	Time end;
	cout << endl;
	cout << "start = " << start.ascii();
	cout << "end = " << end.ascii();
	cout << "delta = " << end.delta(&start);
} ///:~
