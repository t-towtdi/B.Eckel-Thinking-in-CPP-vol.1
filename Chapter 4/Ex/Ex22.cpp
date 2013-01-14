//: EX04:Ex22.cpp
// Создайте структуру Stack для хранения структур Stash. Каждая структура
// Stash должна содержать пять строк из входного файла. Экземпляры Stash
// следует создавать оператором new. Загрузите файл в Stack, затем снова
// выведите его в исходной форме, извлекая данные из Stack.
#include <iostream>
#include <fstream>
#include <string>
#include "../CppLib.h"
#include "../Stack.h"
using namespace std;

int main() {
	Stack stack;
	stack.initialize();
	const int bufsize = 400;
	const int ELEMENTS_IN_STASH = 5;
	ifstream in("Ex22.cpp");
	
	// enter strings into stack 5 per stash
	string line;
	Stash* stash;
	int count = 0;
	while (getline(in, line)) {
		
		if (count == 0) {
			stash = new Stash();
			stash->initialize(sizeof(char) * bufsize);
		}
		
		stash->add(line.c_str());
		
		count++;
		
		if (count == ELEMENTS_IN_STASH) {
			count = 0;
			stack.push(stash);
		}
	}
		
	// print results
	char* out_string;
	int global_index = 0;
	while ((stash = (Stash*)stack.pop()) != 0) {
		int k = 0;
		while((out_string = (char*)stash->fetch(k++)) != 0) {
			cout << "[" << global_index++ << "]: " << out_string << endl;
		}
		stash->cleanup();
	}
	stack.cleanup();
}