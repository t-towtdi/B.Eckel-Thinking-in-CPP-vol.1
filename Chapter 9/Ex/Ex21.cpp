//: EX09:Ex21.cpp
// Напишите программу, которая при помощи макроса IFOPEN() открывает файл как входной 
// поток. Обратите внимание на создание объекта ifstream и его видимость.
#include "../../require.h"
#include <iostream>

#define IFOPEN(VAR,NAME) \
std::ifstream VAR(NAME); \
assure(VAR,NAME);

int main(int argc, char* argv[]) {
	requireMinArgs(argc, 1);
	IFOPEN(in, argv[1]);
}
