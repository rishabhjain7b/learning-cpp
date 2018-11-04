// This code shows the importance of void as the argument of a function

#include <stdio.h> 
/*
int main() 
{ 
	static int i = 5; 
	if (--i){ 
		printf("%d ", i); 
		main(10); 
	}
       printf("\n");	
}
// Output: 4 3 2 1
*/
 
int main(void) 
{ 
	static int i = 5; 
	if (--i){ 
		printf("%d ", i); 
		main(10); 
	} 
} 
// error


