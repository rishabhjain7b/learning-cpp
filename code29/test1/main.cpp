#include <iostream>
#include "header.h"

int main (void) {
	A::x = 1;
	A::y = 2;
	A::z = 3;

	std::cout << A::x << std::endl;
	std::cout << A::y << std::endl;
	std::cout << A::z << std::endl;
	
	return 0;
}
