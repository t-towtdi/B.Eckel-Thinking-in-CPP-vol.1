//: C05:Private.cpp
// Ограничение доступа

struct B {
private:
	char j;
	float f;
public:
	int i;
	void func();
};

void B::func() {
	i = 0;
	j = '0';
	f = 0.0;
};

int main() {
	B b;
	b.i = 1;	// Можно, открытая переменная
	//! b.j = '1';	// Нельзя, закрытая переменная
	//! b.f = 1.0;	// Нельзя, закрытая переменная
} ///:~