//: C05:UseHandle.cpp
//{L} Handle
// Использование класса Handle
#include "Handle.h"

int main() {
	Handle u;
	u.initialize();
	u.read();
	u.change(1);
	u.cleanup();
} ///:~
