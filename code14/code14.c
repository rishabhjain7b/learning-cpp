#include <stdio.h>
#include <stdbool.h> 	// This headerfile is a mandate to use bool data type in C.
			// Without this, C would give error whereas C++ won't.

int main() 
{ 
	bool arr[2] = {true, false}; 

	printf(" bool datatype has two kind of values: %d and %d \n", arr[0], arr[1]);
	return 0; 
} 

