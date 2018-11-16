// C++ program to demonstrate const specifier 
#include <stdio.h>

#define temp 5 	// Not recommended as preprocessor does it and not compiler and also no type checking is there.

int main() 
{ 
	const int num = 1; 
	enum VAR { var = 42 };
	constexpr int x = num; 	// Only const variable is allowed.

	// num = 5;  Modifying the value will give compile time error 
	
	printf(" Using const : %d \n"
		" Using enum : %d \n"
		" Using macros : %d \n"
		" Using constexpr : %d \n", num, var, temp, x);

	return 0; 
} 

