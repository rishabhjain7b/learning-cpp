// Code for converstion of string to integer

#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    // your code goes here
    string str;
    getline(cin, str);
    int i = 0;
    long int out = 0;
    int flag = 0;
    while (str[i]!='\0') {
        if (str[i] == '-' && !(int(str[i+1]) < 48 || int(str[i+1]) > 57)) {
            flag = 1;
        }
        if (int(str[i]) > 47 && int(str[i]) < 58) {
            out = out * 10 + (int(str[i]) - 48);
            if (int(str[i+1]) < 48 || int(str[i+1]) > 57)
            break;
        }
        i++;
   }
   if (flag) out *= -1;
   if (out > INT_MAX) out = INT_MAX;
   else if (out < INT_MIN) out = INT_MIN;
   
   cout << out << endl;
   return 0;
}
