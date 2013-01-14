//: C06:DefineInitialize.cpp
// ќпределение переменных в произвольной точке
#include "../require.h"
#include <iostream>
#include <string>
using namespace std;

class G {
	int i;
public:
	G(int ii);
};

G::G(int ii) { i = ii; }

int main() {
	cout << "initialize value? ";
	int retval = 0;
	cin >> retval;
	require(retval != 0);
	int y = retval + 3;
	G g(y);
} ///:~
