//: C07:Mem.cpp {0}
#include "Mem2.h"
#include <cstring>
using namespace std;

Mem::Mem(int sz) {
	prev_mem = mem = 0;
	size = 0;
	ensureMinSize(sz);
}

Mem::~Mem() { delete []mem; }

int Mem::msize() { return size; }

void Mem::ensureMinSize(int minSize) {
	if (size < minSize) {
		byte* newmem = new byte[minSize];
		memset(newmem + size, 0, minSize - size);
		memcpy(newmem, mem, size);
		prev_mem = mem;
		delete []mem;
		mem = newmem;
		size = minSize;
	}
}

bool Mem::moved() {
	bool moved = pointer() != prev_mem;
	prev_mem = mem;
	return moved;
}

byte* Mem::pointer() { return mem; }

byte* Mem::pointer(int minSize) {
	ensureMinSize(minSize);
	return mem;
} ///:~
