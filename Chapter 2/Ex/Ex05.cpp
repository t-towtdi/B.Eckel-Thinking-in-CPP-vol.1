//: EX02:Ex05.cpp
// Измените программу Fillvector.cpp так, чтобы строки выводились в обратном
// порядке (от последней к первой)
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
	vector<string> v;
	ifstream in("Ex05.cpp");
	string line;
	while ( getline(in, line) )
		v.push_back(line);	// Занесение строки в конец вектора
	// Нумерация строк:
	for (int i = v.size() - 1; i >= 0; i--)
		cout << i << ": " << v[i] << endl;
} ///:~