#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int max = 0;
	string s;
	cin >> s;
        int k = 0;
        while (s[k]!='\0') {
        	int count = 1;
        for (int i=k+1; s[i]!='\0'; i++ ) {
            int j = i;
            bool flag = true;
			while ((j--) >= 0) {
                if (s[j] == s[i]) flag = false;
            }
            if (flag) count++;
            else {
            	break;
            }
            if (count > max) max = count; 
        }
        
        k++;
        }
	cout << "max = " << max << endl;
	return 0;
}
