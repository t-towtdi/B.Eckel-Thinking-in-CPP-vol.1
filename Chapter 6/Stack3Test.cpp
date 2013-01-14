//: C06:Stack3Test.cpp
//{L} Stack3
//{T} STack3Test.cpp
// Конструкторы и деструкторы
#include "Stack3.h"
#include "../require.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
	requireArgs(argc, 1);	// Аргумент - имя файла
	ifstream in(argv[1]);
	assure(in, argv[1]);
	Stack textlines;
	string line;
	// Чтение файла и сохранение строк в стеке:
	while (getline(in, line))
		textlines.push(new string(line));
	// Извлечение строк из стека и вывод:
	string* s;
	while ((s = (string*)textlines.pop()) != 0) {
		cout << *s << endl;
		delete s;
	}
} ///:~
