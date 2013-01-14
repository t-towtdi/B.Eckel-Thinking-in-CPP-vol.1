//: C02:Scopy.cpp
// Построчное копирование файлов
#include <string>
#include <fstream>
using namespace std;

int main() {
	ifstream in("Scopy1.cpp");	// Открыть файл для чтения
	ofstream out("Scopy2.cpp");	// Открытие файла для записи
	string s;
	while ( getline(in, s) )	// Символ новой строки при чтении теряется..
		out << s << "\n";		// ... поэтому его необходимо передать отдельно.
} ///:~