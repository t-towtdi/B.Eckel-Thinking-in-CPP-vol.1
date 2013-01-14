//: EX02:Ex07.cpp
// Выводите содержимое файла по строкам. После вывода каждой строки программа
// должна ждать, пока пользователь нажмет клавишу Enter.
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
	vector<string> v;
	ifstream in("Ex07.cpp");
	string line;
	char ch;
	while ( getline(in, line) )
		v.push_back(line);	// Занесение строки в конец вектора
	// Нумерация строк:
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
		while (cin.get() != '\n'); 
	}
} ///:~