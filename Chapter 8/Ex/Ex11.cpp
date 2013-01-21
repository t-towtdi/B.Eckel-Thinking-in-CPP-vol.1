//: C08:Ex11.cpp
// Уберите комментарий в ошибочной строке примера PointerAssignment.cpp
// и посмотрите, какую ошибку выдаст ваш компилятор
int d = 1;
const int e = 2;
int* u = &d;		// Можно -- d не является константой
// Ex11.cpp:7: error: invalid conversion from `const int*' to `int*'
//!	int* v = &e;	// Нельзя -- е является константой
int* w = (int*)&e;	// Можно, но это плохой стиль
int main() {} ///:~
