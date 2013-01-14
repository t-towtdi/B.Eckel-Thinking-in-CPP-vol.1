//: C05:Handle.h
// Классы-манипуляторы
#ifndef HANDLE_H
#define HANDLE_H

class Handle {
	struct Cheshire;	// Только объявление класса
	Cheshire* smile;
public:
	void initialize();
	void cleanup();
	int read();
	void change(int);
};
#endif	// HANDLE_H	///:~
