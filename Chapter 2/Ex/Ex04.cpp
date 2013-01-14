//: EX02:Ex04.cpp
// Напишите программу для подсчета числа вхождений заданного слова в файл
// (для поиска слова воспользуйтесь оператором == класс string)
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
	string word;
	int count = 0;
	ifstream in("Ex04.cpp");
	while (in >> word)
		if (word == "string")
			count++;
	cout << "Word \"string\" count is " << count << endl;
} ///:~