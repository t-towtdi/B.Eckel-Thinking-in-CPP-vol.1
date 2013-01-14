//: EX07:Ex04.cpp
// Создайте класс с четырьмя функциями, получающими соответственно 0, 1, 2,
// и 3 аргумента int. Напишите функцию main(), которая получает объект класса
// и вызывает каждую из его функций. Затем измените класс таким образом, 
// чтобы он содержал одну функцию с четырьмя аргументами по умолчанию. 
// Изменится ли при этом функция main()?
#include <iostream>
using namespace std;

class AClass {
	int value1, value2, value3, value4;
public:
	AClass();
	void setValue(int = 1, int = 2, int = 3, int = 4);
};

AClass::AClass() {
	value1 = value2 = value3 = value4 = 0;
}

void AClass::setValue(int value1, int value2, int value3, int value4) {
	this->value1 = value1;
	this->value2 = value2;
	this->value3 = value3;
	this->value4 = value4;
}

int main() {
	AClass theClass;
	theClass.setValue(1);
	theClass.setValue(1, 2);
	theClass.setValue(1, 2, 3);
	theClass.setValue(1, 2, 3, 4);
}
