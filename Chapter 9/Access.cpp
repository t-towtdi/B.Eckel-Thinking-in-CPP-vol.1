//: C09:Access.cpp
// Подставляемые функции доступа

class Access {
	int i;
public:
	int read() const { return i; }
	void set(int ii) { i = ii; }
};

int main() {
	Access A;
	A.set(100);
	int x = A.read();
} ///:~
