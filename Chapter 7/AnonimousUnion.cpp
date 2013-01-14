//: C07:AnonymousUnion.cpp
int main() {
	union {
		int i;
		float f;
	};
	// ќбращени€ к членам выпол€ютс€ без указани€ экземпл€ра:
	i = 12;
	f = 1.22;
} ///:~
