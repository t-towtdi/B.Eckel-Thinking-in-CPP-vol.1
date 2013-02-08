//: EX09:Ex01.cpp
// Напишите программу с использованием макроса F(), приведенного в начале
// главы. Программа должна демонстрировать ошибки расширения макроса,
// описанные в тексе. Исправьте макрос и докажите, что в новой версии он
// работает  правильно.
#include <iostream>

// Ex01.cpp: In function `int main()':
// Ex01.cpp:11: error: `x' undeclared (first use this function)
// Ex01.cpp:11: error: (Each undeclared identifier is reported only once for 
// each function it appears in.)
// #define F (x) (x+1)
#define F(x) (x+1)

int main() {
	std::cout << F(1) << std::endl;
} ///:~
