//: C08:Constag.cpp
// Константы и агрегаты
const int i[] = {1, 2, 3, 4};
//! float f[i[3]];	// Недопустимо
struct S {int i, j; };
const S s[] = {{1, 2}, {3, 4}};
//! double d[s[1].j];// Недопустимо
int main() {} ///:~
