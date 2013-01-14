//: EX05:Ex12.cpp
// Поместите объекты класса Hen из упражнения 6 в структуру Stack. Прочитайте
// и выведите эти объекты (добавьте функцию Hen::print(), если это не было
// сделано ранее).
#include "Stack2.h"
#include "Hen.h"
#include <iostream>
using namespace std;

int main() {
	Stack stack;
	Hen* hen;
	
	stack.initialize();
	for (int i = 0; i < 5; i++)
		stack.push(new Hen());
	
	while ((hen = (Hen*)stack.pop()) != 0) {
		hen->print();
		delete hen;
	}
	stack.cleanup();
} ///:~
