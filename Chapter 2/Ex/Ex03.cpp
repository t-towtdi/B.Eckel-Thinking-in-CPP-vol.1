//: EX02:Ex03.cpp
// Ќапишите программу, котора€ открывает файл и подсчитывает количество слов,
// разделенных пропусками
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
	string word;
	vector<string> wordList;
	ifstream in("Ex03.cpp");
	while (in >> word)
		wordList.push_back(word);
	cout << "Word count is " << wordList.size() << endl;
} ///:~