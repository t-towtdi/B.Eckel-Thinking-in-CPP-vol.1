//: C03:SimpleStruct.cpp
struct Structure1 {
	char c;
	int i;
	float f;
	double d;
};

int main() {
	struct Structure1 s1, s2;
	s1.c = 'a';	// Выбор элемента при помощи символа '.'
	s1.i = 1;
	s1.f = 3.14;
	s1.d = 0.00093;
	s2.c = 'a';
	s2.i = 1;
	s2.f = 3.14;
	s2.d = 0.00093;
} ///:~