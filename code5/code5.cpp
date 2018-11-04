#include <stdio.h> 

#define merge(a, b) a##b 
#define conToStr(c) #c 

int main() 
{ 	
	int x = 20;
	printf("%d \n", merge(12, 34));
	printf("%s \n", conToStr(x));
} 
// Output: 1234
// 	   20

