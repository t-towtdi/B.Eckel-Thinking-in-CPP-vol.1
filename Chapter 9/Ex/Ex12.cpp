//: EX09:Ex12.cpp
// »змените пример Cpptime.cpp так, чтобы он измер€л врем€ от запуска программы
// до нажати€ пользователем клавиши Enter
#include "../Cpptime.h"
#include <iostream>
using namespace std;
int main() {
	Time start;
	
	while (cin.get() != '\n') {}
	
	Time end;
	cout << endl;
	cout << "start = " << start.ascii();
	cout << "end = " << end.ascii();
	cout << "delta = " << end.delta(&start);
} ///:~
