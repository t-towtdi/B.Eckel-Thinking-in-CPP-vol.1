//: EX08:Ex17.cpp
// Создайте ноую версию программы ConstPointer.cpp (назовите ее ConstReference.cpp)
// со ссылками вместо указателей. Возможно, для этого вам придется познакомится
// с материалом главы 11.
void t(int&) {}

void u(const int& cip) {
//! cip = 2;	// Нельзя -- модификация значения
	int i = cip;	// Можно -- копирование значения
//!	int& ip2 = cip;	// Нельзя -- не константа
}

const char& v() {
	// Возвращение адреса статического символьного массива:
	return *"result of function v()";
}

const int& w() {
	static int i;
	return i;
}

int main() {
	int x = 0;
	int& ip = x;
	const int& cip = x;
	t(ip);	// Можно
//!	t(cip);	// Нельзя
	u(ip);	// Можно
	u(cip);	// Тоже можно
//! char& cp = v();	// Нельзя
	const char& ccp = v();	// Можно
//!	int& ip2 = w();	// Нельзя
	const int& ccip = w();	// Можно
	const int& cip2 = w();	// Можно
//!	*w() = 1;	// Нельзя
} ///:~
