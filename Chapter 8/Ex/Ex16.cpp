//: EX08:Ex16.cpp
// В программе ConstPointer.cpp последовательно удаляйте комментарии в строках,
// содержащих ошибки. Посмотрите, какие сообщения выдает компилятор.

void t(int*) {}

void u(const int* cip) {
//  Ex16.cpp:8: error: assignment of read-only location
//!	*cip = 2;	// Нельзя -- модификация значения
	int i = *cip;	// Можно -- копирование значения
//  Ex16.cpp:11: error: invalid conversion from `const int*' to `int*'
//! int* ip2 = cip;	// Нельзя -- не константа
}

const char* v() {
	// Возвращение адреса статического символьного массива:
	return "result of function v()";
}

const int* const w() {
	static int i;
	return &i;
}

int main() {
	int x = 0;
	int* ip = &x;
	const int* cip = &x;
	t(ip);	// Можно
//  Ex16.cpp:30: error: invalid conversion from `const int*' to `int*'
//	Ex16.cpp:30: error:   initializing argument 1 of `void t(int*)'
//!	t(cip);	// Нельзя
	u(ip);	// Можно
	u(cip);	// Тоже можно
//  Ex16.cpp:35: error: invalid conversion from `const char*' to `char*'
//! char* cp = v();	// Нельзя
	const char* ccp = v();	// Можно
//  Ex16.cpp:38: error: invalid conversion from `const int* const' to `int*'
//!	int* ip2 = w();	// Нельзя
	const int* const ccip = w();	// Можно
	const int* cip2 = w();	// Можно
//	Ex16.cpp:42: error: assignment of read-only location
//!	*w() = 1;	// Нельзя
} ///:~
