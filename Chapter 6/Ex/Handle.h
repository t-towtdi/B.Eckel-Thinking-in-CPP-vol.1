//: C05:Handle.h
// Классы-манипуляторы
#ifndef HANDLE_H
#define HANDLE_H

class Handle {
	struct Cheshire;	// Только объявление класса
	Cheshire* smile;
public:
	Handle();
	void initialize();
	void cleanup();
	int read();
	void change(int);
	~Handle();
};
#endif	// HANDLE_H	///:~
