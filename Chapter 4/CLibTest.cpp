//: C04:CLibTest.cpp
//{L} CLib
// Тестирование библиотеки в стиле С
#include "CLib.h"
#include <fstream>
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int main() {
	// Переменные определяются в начале блока, как в языке C:
	CStash intStash, stringStash;
	int i;
	char* cp;
	ifstream in;
	string line;
	const int bufsize = 80;
	// Не забудьте инициализировать переменные:
	initialize(&intStash, sizeof(int));
	for (i = 0; i < 100; i++)
		add(&intStash, &i);
	for (i = 0; i < count(&intStash); i++)
		cout << "fetch(&intStash, " << i << ") = "
			 << *(int*)fetch(&intStash, i)
			 << endl;
	// Строки из 80 символов:
	initialize(&stringStash, sizeof(char)*bufsize);
	in.open("CLibTest.cpp");
	assert(in);
	while (getline(in, line))
		add(&stringStash, line.c_str());
	i = 0;
	while ((cp = (char*)fetch(&stringStash, i++)) != 0)
		cout << "fetch(&stringStash, " << i << ") = "
			 << cp << endl;
	cleanup(&intStash);
	cleanup(&stringStash);
} ///:~