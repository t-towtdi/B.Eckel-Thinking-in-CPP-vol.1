//: EX08:Ex070.cpp
#include "Ex070.h"
#include <iostream>

int current_year = 2013;

void print() {
	current_year = 2014;
	std::cout << "Current year is " << current_year << std::endl;
}
