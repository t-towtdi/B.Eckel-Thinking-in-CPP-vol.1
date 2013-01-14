//: C03:ArgsToInts.cpp
// ѕроиведение аргументов командной строки к типу int
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) {
	for (int i = 1; i < argc; i++)
		cout << atoi(argv[i]) << endl;
} ///:~