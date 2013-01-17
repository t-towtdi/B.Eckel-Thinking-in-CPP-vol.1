//: C08:EnumHack.cpp
#include <iostream>
using namespace std;

class Bunch {
	enum { size = 1000 };
	int i[size];
};

int main() {
	cout << "sizeof(Bunch) = " << sizeof(Bunch)
		 << ", sizeof(i[1000[) = "
		 << sizeof(int[1000]) << endl;
} ///:~
