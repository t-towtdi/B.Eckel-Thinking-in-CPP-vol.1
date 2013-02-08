//: C09:ErrTest.cpp
// {T} ErrTest.cpp
// Тестирование require.h
#include "../require.h"
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {
	int i = 1;
	require(i, "value must be nonzero");
	requireArgs(argc, 1);
	requireMinArgs(argc, 1);
	ifstream in(argv[1]);
	assure(in, argv[1]);	// Имя файла
	ifstream nofile("nofile.xxx");
	// Ошибка
	//! assure(nofile); // Аргумент по умолчанию
	ofstream out("tmp.txt");
	assure(out);
} ///:~
