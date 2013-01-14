//: C07:Ex06.cpp
// Измените фалы Stash3.h и Stash3.cpp так, чтобы в конструкторе использовались
// аргументы по умолчанию. Протестируйте конструктор с двумя версиями объекта Stash
#include "Stash3.h"
#include "../../require.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	Stash intStash(sizeof(int));
	for (int i = 0; i < 100; i++)
		intStash.add(&i);
	for (int j = 0; j < intStash.count(); j++)
		cout << "intStash.fetch(" << j << ") = "
			 << *(int*)intStash.fetch(j)
			 << endl;
	const int bufsize = 260;
	Stash stringStash(sizeof(char) * bufsize, 100);
	ifstream in("Stash3Test.cpp");
	assure(in, "Stash3Test.cpp");
	string line;
	while (getline(in, line))
		stringStash.add((char*)line.c_str());
	int k = 0;
	char* cp;
	while ((cp = (char*)stringStash.fetch(k++)) != 0)
		cout << "stringStash.fetch(" << k << ") = "
			 << cp << endl;
} ///:~
