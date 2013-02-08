//: C09:EvaluationOrder.cpp
// Порядок обработки подставляемых функций
class Forward {
	int i;
public:
	Forward() : i(0) {}
	// Вызов необъявленной функции
	int f() const { return g() + 1; }
	int g() const { return i; }
};

int main() {
	Forward frwd;
	frwd.f();
} ///:~
