//: C03:DynamicDebugFlags.cpp
#include <iostream>
#include <string>
using namespace std;
// Отладочные флаги не обяхательно объявлять глобальными!
bool debug = false;

int main(int argc, char* argv[]) {
	for (int i = 0; i < argc; i++) 
		if (string(argv[i]) == "--debug=on")
			debug = true;
	bool go = true;
	
	while (go) {
		if (debug) {
			// Отладочный код
			cout << "Debugger is now on!" << endl;
		} else {
			cout << "Debugger is now off." << endl;
		}
		cout << "Trun debugger [on/off/quit]: ";
		string reply;
		cin >> reply;
		if (reply == "on") debug = true;	// Установка флага
		if (reply == "off") debug = false;	// Сброс флага
		if (reply == "quit") break;		// Выход из 'while'
	}
} ///:~