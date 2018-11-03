#include <iostream>
#include <limits.h>
#include <bitset>

int main(void) {
	int x = INT_MAX;
	short ch = CHAR_MAX;
	
	std::cout << "int to binary of " << x << " is " << std::bitset<32>(x) << std::endl;
	std::cout << "int to hex of " << x << " is " << std::hex << x << std::endl;
	std::cout << "char to binary of " << ch << " is " << std::bitset<8>(ch) << std::endl;
	std::cout << "char to hex of " << ch << " is " << std::hex << ch << std::endl;

	return 0;
}
