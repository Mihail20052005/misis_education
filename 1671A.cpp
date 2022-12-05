#include <iostream>
#include <string>
 
int main()
{
    int N = 0;
    std::cin >> N;
    std::string a[1000000];
    for (int j = 0; j < N; j++) {
        std::cin >> a[j];
 
    }
 
    for (int j = 0; j < N; j += 1) {
        std::string str = a[j];
        int counta = 0;
        int rescounta = 0;
        int counb = 0;
        int rescountb = 0;
 
        std::string flag = "YES";
        //std::cout << "Hello World!\n";
 
 
 
        for (int i = 0; i <= str.length(); i++) {
 
 
 
            if (str[i] == 'a') {
                counta += 1;
                if (str[i + 1] == 'b') {
                    rescounta = counta;
                    counta = 0;
                    if (rescounta % 2 != 0 && rescounta % 3 != 0 && rescounta % 5 != 0) {
                        flag = "NO";
                        break;
 
 
 
                    }
 
                }
 
                //if (counta > 1) { flag = 1; }
            }
 
            if (str[i] == 'b') {
                counb += 1;
 
                if (str[i + 1] == 'a') {
                    rescountb = counb;
                    counb = 0;
                    if (rescountb % 2 != 0 && rescountb % 3 != 0 && rescountb % 5 != 0) {
                        flag = "NO";
                        break;
 
                    }
 
                }
 
                //if (counb > 1) {flag = 1; }
            }
 
 
 
        }
        if (str == "a" || str == "b" || (str[str.length() - 1] == 'b' && str[str.length() - 2] != 'b') || (str[str.length() - 1] == 'a' && str[str.length() - 2] != 'a')) { flag = "NO"; }
        std::cout << flag << std::endl;
    }
}