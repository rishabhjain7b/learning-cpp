#include <iostream>
#include "file1.cpp"

int main(void) {
	A *a = new A;
	a->x=1;
	std::cout << a->x << std::endl;
	func(a);
	std::cout << a->x << std::endl;
	delete a;
	return 0;
}

