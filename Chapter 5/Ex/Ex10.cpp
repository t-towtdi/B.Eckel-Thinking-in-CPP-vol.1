//: EX05:Ex10.cpp
// Поместите объекты класса Hen из упражнения 6 в структуру Stash. Прочитайте
// и выведите эти объекты (добавьте функцию Hen::print(), если это не было 
// сделано ранее).
#include "Stash.h"
#include "Hen.h"
#include <iostream>
using namespace std;

int main() {
	Stash henStash;
	henStash.initialize(sizeof(Hen));
	Hen* hen;
	for (int i = 0; i < 5; i++) {
		hen = new Hen();
		henStash.add(hen);
	}
	for (int j = 0; j < henStash.count(); j++) {
		hen = (Hen*)henStash.fetch(j);
		cout << "henStash.fetch(" << j << "): " << endl;
		hen->print();
		cout << endl;
		delete hen;
	}
	henStash.cleanup();
} ///:~
