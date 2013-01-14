//: EX04:Ex11.cpp
// Напишите программу с условной компиляцией фрагмента main(). Если некоторое
// препроцессорное имя определено, программа должна выводить одно сообщение,
// а если не определено - другое. Откомпилируйте программу и поэксперементируйте
// с директивами #define. Замет выясните, как в вашем компиляторе организована
// передача препроцессорных определений в командной строке, и поэксперементируйте
// с ней.
#ifdef CPPSTYLE
#include <iostream>
using namespace std;
#endif
#ifdef CSTYLE
#include <stdio.h>
#endif

int main() {
	#ifdef CPPSTYLE
		cout << "Some message by CPP style..." << endl;
	#endif
	#ifdef CSTYLE
		printf("Some message by C style...\n");
	#endif
}