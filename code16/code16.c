#include<stdio.h> 

int main() 
{ 
	float x = 0.1; 
	if (x == 0.1) 
		printf("IF\n"); 
	else if (x == 0.1f) 
		printf("ELSE IF\n"); 
	else
		printf("ELSE\n");

	float y = 0.5; 
	if (y == 0.5) 
		printf("IF\n"); 
	else if (y == 0.5f) 
		printf("ELSE IF\n"); 
	else
		printf("ELSE\n");	
}

