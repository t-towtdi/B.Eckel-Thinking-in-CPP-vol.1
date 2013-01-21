//: EX08:Ex07.cpp
// Создайте в файле объявление внешней константы (extern const); включите
// в файл функцию main(), которая выводит значение extern const. Создайте
// определение внешней константы в другом файле, откомпилируйте и скомпонуйте
// два файла.
#include "Ex070.h"
#include <iostream>

extern const int current_year;

int main() {
	//current_year = 2014;
	print();
	std::cout << "Current year is " << current_year << std::endl;
}
