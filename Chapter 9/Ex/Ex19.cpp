//: EX09:Ex19.cpp
// Измените макрос FIELD() так, чтобы он автоматически генерировал функции доступа
// для каждого поля (при этом данные дожны оставаться закрытыми). Создайте класс, члены 
// которого вызывают макрос FIELD(). Напишите функцию main() для тестирования класса.
#include <iostream>

#define FIELD(index) private: int int_##index; \
 public: int integer_##index() { return int_##index; } \
 void integer_##index(int value) { int_##index = value; }
 
class X {
	FIELD(1);
	FIELD(2);
	FIELD(3);
};

int main() {
	X x;
	x.integer_1(1);
	x.integer_2(2);
	x.integer_3(3);
	
	std::cout << x.integer_1() << std::endl;
	std::cout << x.integer_2() << std::endl;
	std::cout << x.integer_3() << std::endl;
	
}
