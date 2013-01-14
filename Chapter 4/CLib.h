//: C04:CLib.h
// Заголовочный файл для библиотеки в стиле C.
// Структура CStash является аналогом массива.
// но создается на стадии выполнения

typedef struct CStashTag {
	int size;		// Размер каждого элемента
	int quantity;	// Количество элементов
	int next;		// Следующий пустой элемент
	// Динамически выделяемый байтовый массив
	unsigned char* storage;
} CStash;

void initialize(CStash* s, int size);
void cleanup(CStash* s);
int add(CStash* s, const void* element);
void* fetch(CStash* s, int index);
int count(CStash* s);
void inflate(CStash* s, int increase);
///:~