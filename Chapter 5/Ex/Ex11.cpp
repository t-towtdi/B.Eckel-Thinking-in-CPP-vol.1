//: EX05:Ex11.cpp
// Скопируйте файлы реализации и тестовой программы для структуры
// Stack из главы 4. Откомпилируйте и протестируйте файл Stack2.h из этой главы.
#include "Stack2.h"
#include "../../require.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
	requireArgs(argc, 1);	// Аргумент - имя файла
	ifstream in(argv[1]);
	assure(in, argv[1]);
	Stack textlines;
	textlines.initialize();
	string line;
	// Чтение файла и сохранение строк в стеке:
	while (getline(in, line))
		textlines.push(new string(line));
	// Извлечение строк из стека и вывод
	string* s;
	while ((s = (string*)textlines.pop()) != 0) {
		cout << *s << endl;
		delete s;
	}
	textlines.cleanup();
} ///:~
