/* code10_1.c */

/* When in doubt, invoke the linker with a flag such as the gcc -fno-common flag,
 *  which triggers an error if it encounters multiply defined global symbols. */

#include <stdio.h> 

void f(void); 
void b(void);
void a(void);

int x = 15213;
int y;
int p = 20;
int q = 21;

int main() 
{ 
	f(); 
	printf("x = %d\n", x);
        y = 2016; 
    	b(); 
    	printf("y = %d\n",y);
	a(); 
    	printf("p = %x q = %x\n", p, q);	
	return 0; 
} 



