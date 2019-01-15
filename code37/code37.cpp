#include <iostream>
#include <string>

int main(void) {
	std::string s;
	std::cin >> s;
        int i = 0, max = 0;
	std::string out, out_t;
        while (s[i]!='\0') {
            for (int j=i; s[j]!='\0'; j++) {
                if (s[i] == s[j]) {
                    int p=i, q=j;
                    bool flag = true;
                    while(p<=q) {
                        if (s[p] != s[q]) {
                            flag = false;
                            break;
                        }
                        p++; q--;
                    }
                    if(flag) {
                        out_t.erase();
                        int p=i, q=j;
                        while(p<=q) {
                            out_t.push_back(s[p]);
                            p++;
                        }
                    }
                }
                if(out_t.size() > max) {
                    max = out_t.size();
                    out = out_t;
                }
            }
            
            i++;
        }

	std::cout << "Longest Palindrom Substring: " << out << std::endl;
        return 0;
}
