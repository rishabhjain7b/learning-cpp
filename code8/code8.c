#include <stdio.h> 

int x = 0; 
int f() 
{ 
	int x = 4;
	return x; 
} 

int g() 
{ 
	int x = 1; 
	return f(); 
} 

int main() 
{ 
	printf("%d", g()); 
	printf("\n");  
} 

