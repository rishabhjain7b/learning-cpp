#include <iostream>

int reverse(int x) 
{	
	long int rev=0;
       	long int tempx=x;
       	while(x) {
	       	rev = rev*10 + (x%10);
        	x/=10;
        }
        if (rev >= -2147483648 && rev < 2147483647) 
        	return rev;
        else
        	return 0;
}

int main(void) {	
	int num;
	std::cin >> num;
	std::cout << "REVERSE = " << reverse(num) << std::endl;
	return 0;
}

