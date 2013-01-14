//: C04:CppLibTest.cpp
//{L} CppLib
// Тестирование библиотеки С++
#include "Stash.h"
#include "../require.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	Stash intStash;
	intStash.initialize(sizeof(int));
	for (int i = 0; i < 100; i++)
		intStash.add(&i);
	for (int j = 0; j < intStash.count(); j++)
		cout << "intStash.fetch(" << j << ") = "
			 << *(int*)intStash.fetch(j)
			 << endl;
	// Строки из 80 символов:
	
	Stash stringStash;
	const int bufsize = 200;
	stringStash.initialize(sizeof(char) * bufsize);
	
	ifstream in("Stash.cpp");
	assure(in, "Stash.cpp");
	string line;
	while (getline(in, line))
		stringStash.add(line.c_str());
	
	int k = 0;
	char* cp;
	while ((cp = (char*)stringStash.fetch(k++)) != 0)
		cout << "stringStash.fetch" << k << ") = "
			 << cp << endl;
	intStash.cleanup();
	stringStash.cleanup();
	
} ///:~
