//: C08:Mutable.cpp
// Ключевое слово "mutable"

class Z {
	int i;
	mutable int j;
public:
	Z();
	void f() const;
};

Z::Z() : i(0), j(0) {}

void Z::f() const {
//! i++;	// Ошибка -- константная функция
	j++;	// Можно: mutable
}

int main() {
	const Z zz;
	zz.f();	// Функция изменяет константный объект!
} ///:~
