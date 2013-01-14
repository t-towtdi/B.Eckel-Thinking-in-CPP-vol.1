//: C03:SimpleStruct2.cpp
// Использование ключевого слова typedef со структурами
typedef struct {
	char c;
	int i;
	float f;
	double d;
} Structure2;

int main() {
	Structure2 s1, s2;
	s1.c = 'a';
	s1.i = 1;
	s1.f = 3.14;
	s1.d = 0.00093;
	s2.c = 'a';
	s2.i = 1;
	s2.f = 3.14;
	s2.d = 0.00093;
} ///:~