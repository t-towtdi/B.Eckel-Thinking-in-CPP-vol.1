//: C03:VoidPointer.cpp
int main() {
	void* vp;
	char c;
	int i;
	float f;
	double d;
	// ”казателю void* можно присвоить адрес ЋёЅќ√ќ типа:
	vp = &c;
	vp = &i;
	vp = &f;
	vp = &d;
} ///:~