/* Compile code with optimization option */
#include <stdio.h> 

int main(void) 
{ 
	const volatile int local = 10;
        // if volatile not given, then compiler will not change the value of "local"	
	
	int *ptr = (int*) &local; 

	printf("Initial value of local : %d \n", local); 

	*ptr = 100; 

	printf("Modified value of local: %d \n", local); 

	return 0; 
}

/* 
 * Compile with optimization:
 * gcc -O0 code20.c -o code20
 *
*/

