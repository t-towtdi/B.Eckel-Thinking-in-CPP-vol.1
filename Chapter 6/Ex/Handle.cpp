//: C05:Handle.cpp {0}
// Реализация класса-манипулятора
#include "Handle.h"
#include "../../require.h"
#include <iostream>

// Определение реализации Handle;
struct Handle::Cheshire {
	Cheshire();
	~Cheshire();
	int i;
};

Handle::Cheshire::Cheshire() {
	std::cout << "Handle::Cheshire::Cheshire()" << std::endl;
}

Handle::Cheshire::~Cheshire() {
	std::cout << "Handle::Cheshire::~Cheshire()" << std::endl;
}

Handle::Handle() {
	std::cout << "Handle::Handle()" << std::endl;
}

Handle::~Handle() {
	std::cout << "Handle::~Handle()" << std::endl;
}

void Handle::initialize() {
	smile = new Cheshire;
	smile->i = 0;
}

void Handle::cleanup() {
	delete smile;
}

int Handle::read() {
	return smile->i;
}

void Handle::change(int x) {
	smile->i = x;
} ///:~
