//: C05:Handle.cpp {0}
// Реализация класса-манипулятора
#include "Handle.h"
#include "../../require.h"

// Определение реализации Handle;
struct Handle::Cheshire {
	int i;
	int j;
};

void Handle::initialize() {
	smile = new Cheshire;
	smile->i = 0;
	smile->j = 14;
}

void Handle::cleanup() {
	delete smile;
}

int Handle::read() {
	return smile->i + smile->j;
}

void Handle::change(int x) {
	smile->i = x;
} ///:~
