//: C02:Fillvector.cpp
// Копирование всего содержимого файла в вектор строк
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
	vector<string> v;
	ifstream in("Fillvector.cpp");
	string line;
	while ( getline(in, line) )
		v.push_back(line);	// Занесение строки в конец вектора
	// Нумерация строк:
	for (int i = 0; i < v.size(); i++)
		cout << i << ": " << v[i] << endl;
} ///:~