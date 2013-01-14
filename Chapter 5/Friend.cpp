//: C05:Friend.cpp
// Ключевое слово friend предоставляет особый уровень доступа

// Объявление (неполная спецификация типа):
struct X;

struct Y {
	void f(X*);
};

struct X {	// Определение 
private:
	int i;
public:
	void initialize();
	friend void g(X*, int);	// Глобальная дружественная функция
	friend void Y::f(X*);	// Дружественная функция друой структуры
	friend struct Z;		// Дружественной является вся структура
	friend void h();
};

void X::initialize() {
	i = 0;
}

void g(X* x, int i) {
	x->i = i;
}

void Y::f(X* x) {
	x->i = 47;
}

struct Z {
private:
	int j;
public:
	void initialize();
	void g(X* x);
};

void Z::initialize() {
	j = 99;
}

void Z::g(X* x) {
	x->i += j;
}

void h() {
	X x;
	x.i = 100;	// Прямое обращение к данным
}

int main() {
	X x;
	Z z;
	z.g(&x);
} ///:~
