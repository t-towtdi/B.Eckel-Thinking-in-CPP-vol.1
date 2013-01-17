//: C08:PointerAssignment.cpp
int d = 1;
const int e = 2;
int* u = &d;		// Можно -- d не является константой
//! int* v = &e;	// Нельзя -- е является константой
int* w = (int*)&e;	// Можно, но это плохой стиль
int main() {} ///:~
