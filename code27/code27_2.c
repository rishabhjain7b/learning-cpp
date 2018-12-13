/* A simple scanset example */
#include <stdio.h> 

int main(void) 
{ 
	char str1[128]; 
	char str2[128];

	printf("Enter 2 strings: "); 
	scanf("%[A-Z]s", str1);		/* Only block letters will be entered */
       	scanf("%[^o]s", str2);		/* Input will be take only till the first occurrence of 'o' */

	printf("\n You entered: %s\n", str1);
        printf("\n You entered: %s\n", str2);	

	return 0; 
} 

