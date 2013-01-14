//: EX04:Ex23.cpp
// Измените упражнение 22 и создайте структуру, которая бы инкапсулировала
// структуру Stack для хранения Stash. Операции добавления и получения строк
// должны выполняться только через функции этой структуры.
#include "Storage.h"
#include <iostream>
#include <fstream>
using namespace std;

const int bufsize = 200;

int main() {
	ifstream in("Ex23.cpp");
	Storage storage;
	storage.initialize(sizeof(char) * bufsize);
	
	string line;
	while (getline(in, line)) {
		storage.push(line.c_str());
	}
	
	char* out_string;
	int index = 0;
	while ((out_string = (char*)storage.pop()) != 0) {
		cout << "[" << index++ << "]: " << out_string << endl;
	}

	storage.cleanup();
}