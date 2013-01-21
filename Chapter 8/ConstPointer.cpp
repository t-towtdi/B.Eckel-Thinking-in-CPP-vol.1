//: C08:ConstPointer.cpp
// Передача указателей на константы
// в аргументах и возвращаемых значениях

void t(int*) {}

void u(const int* cip) {
//!	*cip = 2;	// Нельзя -- модификация значения
	int i = *cip;	// Можно -- копирование значения
//! int* ip2 = cip	// Нельзя -- не константа
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
//!	t(cip);	// Нельзя
	u(ip);	// Можно
	u(cip);	// Тоже можно
//! char* cp = v();	// Нельзя
	const char* ccp = v();	// Можно
//! int* ip2 = w();	// Нельзя
	const int* const ccip = w();	// Можно
	const int* cip2 = w();	// Можно
}

//! *w() = 1;	// Нельзя