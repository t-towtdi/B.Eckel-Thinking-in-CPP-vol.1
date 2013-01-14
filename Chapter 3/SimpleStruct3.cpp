// C03:SimpleStruct3.cpp
// »спользование указателей на структуры
typedef struct Structure3 {
	char c;
	int i;
	float f;
	double d;
} Structure3;

int main() {
	Structure3 s1, s2;
	Structure3* sp = &s1;
	sp->c = 'a';
	sp->i = 1;
	sp->f = 3.14;
	sp->d = 0.00093;
	sp = &s2;	// ”казатель на другой экземпл€р структуры
	sp->c = 'a';
	sp->i = 1;
	sp->f = 3.14;
	sp->d = 0.00093;
} ///:~