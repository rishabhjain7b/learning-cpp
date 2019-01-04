#include <stdio.h>

int main(void) {

	puts("Geeksfor"); 
	puts("Geeks"); 
	fputs("Geeksfor", stdout); 
    	fputs("Geeks", stdout);
	
	// % is intentionally put here to show side effects of using printf(str) 
	//printf("Geek%sforGeek%s");

	puts("Geek%sforGeek%s");
	
	//getchar(); 
	return 0; 
} 
	
