#include <stdio.h>

int main(void)
{
	char a[50];
	printf("Enter a text:");
	
	//gets(a);	/* issues a warning */
	// use it like this instead
	scanf("%[^\n]s",a);
	printf("\n %s", a);

	return 0;

}
