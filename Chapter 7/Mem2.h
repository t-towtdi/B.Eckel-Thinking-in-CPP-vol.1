//: C07:Mem2.h
#ifndef MEM2_H
#define MEM2_H
typedef unsigned char byte;

class Mem {
	byte* mem;
	int size;
	void ensureMinSize(int minSize);
public:
	Mem(int sz = 0);
	~Mem();
	int msize();
	byte* pointer(int minSize = 0);
;

#endif	// MEM2_H	///:~
