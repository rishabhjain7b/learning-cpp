#include <stdio.h>
#include <limits.h> 

#define BYTE 0x000000FF

int main(void) {
	int x = INT_MAX;
	char ch = CHAR_MAX;
	printf("binary = ");

	for (int i = 1; i >= 0x80000000; i <<=1) {
		char res = (x & i)?1:0;
		printf("%d", res);
	}
	printf("\n");
	/*x >>= 8;
	printf("%x", BYTE_TO_BINARY(x & BYTE));
	x >>= 8;
	printf("%x", BYTE_TO_BINARY(x & BYTE));
	x >>= 8;	
	printf("%x \n", BYTE_TO_BINARY(x & BYTE));*/
	//printf("decimal = %d || binary = %d || hexa = %x \n", x, BYTE_TO_BINARY(x), x);
	return 0;
}
