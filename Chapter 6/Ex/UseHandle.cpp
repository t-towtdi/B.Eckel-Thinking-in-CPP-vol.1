//: EX06:UseHandle.cpp
// Измените фалы Handle.h, Handle.cpp и UseHandle.cpp (см. конец главы 5) так,
// чтобы в них испоьзовались конструкторы и деструкторы.
#include "Handle.h"

int main() {
	Handle u;
	u.initialize();
	u.read();
	u.change(1);
	u.cleanup();
} ///:~
