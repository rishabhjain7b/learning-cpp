#include <iostream>

using namespace std;

int main(void) {
	int x;
	cin >> x;
        int num = x;
        int rev = 0;
        while (num) {
            rev = rev*10 + (num%10);
            num/=10;
        }
        if (x < 0) rev *= -1; 
        if (rev == x) cout << "true" << endl;
        else cout << "false" << endl;
	return 0;
}
