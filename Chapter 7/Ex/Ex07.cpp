//: C06:Stack3Test.cpp
// Создайте новую версию класса Stack из главы 6 с конструктором по умолчанию
// и вторым конструктором, в аргументах которого передается массив указателей
// на объекты и размер этого массива. Конструктор должен перебирать элементы
// массива и заносить каждый указатель в стек. Протестируйте класс с 
// массивом объектов string.
#include "Stack3.h"
#include "../../require.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
	requireArgs(argc, 1);	// Аргумент - имя файла
	ifstream in(argv[1]);
	assure(in, argv[1]);
	void* string_buffer[100];
	int string_buffer_count = 0;
	string line;
	// Чтение файла и сохранение строк в стеке:
	while (getline(in, line))
		string_buffer[string_buffer_count++] = (void*)(new string(line));
	
	Stack textlines(string_buffer, string_buffer_count);
	
	// Извлечение строк из стека и вывод:
	string* s;
	while ((s = (string*)textlines.pop()) != 0) {
		cout << *s << endl;
		delete s;
	}
} ///:~
