//: EX02:Ex06.cpp
// Измените программу Fillvector.cpp так, чтобы перед выводом все элементы
// вектора объеденялись в одну строку (немерация строк при этом не нужна). 
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
	vector<string> v;
	ifstream in("Ex06.cpp");
	string line;
	while ( getline(in, line) )
		v.push_back(line);	// Занесение строки в конец вектора
	// вывод в одну строку
	for (int i = 0; i < v.size(); i++)
		cout << v[i];
	cout << endl;
} ///:~