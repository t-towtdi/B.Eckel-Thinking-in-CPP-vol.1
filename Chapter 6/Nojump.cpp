//: C06:Nojump.cpp
// Обход конструкторов невозможен
class X {
public:
	X();
};

X::X() {}

void f(int i) {
	if (i < 10) {
		//! goto jump1;	// Ошибка: goto обходит инициализацию
	}
	X x1;	// Вызов конструктора
jump1:
	switch(i) {
	case 1:
		X x2;	// Вызов конструктора
		break;
	//! case 2: // Ошибка: case обходит инициализацию
		X x3;	// Вызов конструктора
		break;
	}
}

int main() {
	f(9);
	f(11);
} ///:~
