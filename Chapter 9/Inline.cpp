//: C09:Inline.cpp
// Подставляемые функции внутри классов
#include <iostream>
#include <string>
using namespace std;

class Point {
	int i, j, k;
public:
	Point(): i(0), j(0), k(0) {}
	Point(int ii, int jj, int kk)
		: i(ii), j(jj), k(kk) {}
	void print(const string& msg = "") const {
		if (msg.size() != 0) cout << msg << endl;
		cout << "i = " << i << ", "
			 << "j = " << j << ", "
			 << "k = " << k << endl;
		}
};

int main() {
	Point p, q(1,2,3);
	p.print("value of p");
	q.print("value of q");
} ///:~
