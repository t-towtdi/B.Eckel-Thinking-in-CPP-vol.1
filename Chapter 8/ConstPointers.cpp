//: C08:ConstPointers.cpp
const int* u;
int const* v;
int d = 1;
int* const w = &d;
const int* const x = &d;	// (1)
int const* const x2 = &d;	// (2)
int main() {} ///:~
