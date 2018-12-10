#include <stdio.h>

int main(void) 
{ 
	register int i = 10; 
	int *a = &i; 	/* error */
	printf("%d", *a); 
	
/**********************************/

	int p = 10; 
	register int *b = &p; 
	printf("%d", *b); 
	
/**********************************/

	int q = 10; 
	register static int *c = &q;	/* error */ 
	printf("%d", *c); 
	
	return 0; 
} 

