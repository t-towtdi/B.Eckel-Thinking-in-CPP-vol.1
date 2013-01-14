//: EX07:Ex05.cpp
// Напишите функцию с двумя аргументами и вызовите ее из main(). Затем
// преобразуйте один аргумент в "заполнитель" (то есть аргумент без идентификатора)
// и посмотрите, изменится ли при этом вызов в main().
#include <iostream>

void someFunction(int first, int) {
	std::cout << "Soem Function" << std::endl;
}

int main() {
	someFunction(1, 2);
}
