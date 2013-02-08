//: EX09:Ex20.cpp
// Напишите программу, получающую два аргумента командной строки: число int и имя 
// файла. При помощи фукнций require.h убедитесь в том, что программа получает 
// правильное количество аргументов, значение int находится в интервале от 5 до 10,
// а файл успешно открывается.
#include <iostream>
#include "../../require.h"

int main(int argc, char* argv[]) {
	requireMinArgs(argc, 2);
	require(atoi(argv[1]) >= 5);
	require(atoi(argv[1]) <= 10);
	
	char* file_name = argv[2];
	std::ifstream in(file_name);
	
	assure(in, file_name);
}
