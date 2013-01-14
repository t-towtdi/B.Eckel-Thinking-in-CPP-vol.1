//: 004:CppLib.h
// Библиотека в стиле С, переведенная на С++

struct Stash {
	int size;		// Размер каждого элемента
	int quantity;	// Количество элементов
	int next;		// Следующий пустой элемент
	// Динамически выделяемый байтовый баммив:
	unsigned char* storage;
	// Функции!
	void initialize(int size);
	void cleanup();
	int add(const void* element);
	void* fetch(int index);
	int count();
	void inflate(int increase);
}; ///:~