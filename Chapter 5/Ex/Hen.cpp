#include "Hen.h"
#include <iostream>

void Hen::display(Hen::Nest& n, Hen::Nest::Egg& e) {
	n.display(e);
	std::cout << "Hen.display()" << std::endl;
}

void Hen::print() {
	Hen::Nest n;
	Hen::Nest::Egg e;
	
	display(n, e);
}

void Hen::Nest::display(Hen::Nest::Egg& e) {
	e.display();
	std::cout << "Hen.Nest.display()" << std::endl;
}

void Hen::Nest::Egg::display() {
	std::cout << "Hen::Nest::Egg::display()" << std::endl;
}
