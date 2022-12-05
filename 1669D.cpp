
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
 
void solve()
{
    int n(0);
    std::string s {""};
    std::cin >> n >> s;
    size_t pos = 0;
    std::string token;
    if (s.size() < 2) {
        std::cout << "NO" << std::endl;
        return;
    }
    while ((pos = s.find('W')) != std::string::npos) {
        token = s.substr(0, pos);
        if (token.size() > 0) {
            int r = std::count(token.begin(), token.end(), 'R');
            int b = std::count(token.begin(), token.end(), 'B');
            // std::cout << r << ' ' << b << std::endl;
            std::cout << token << std::endl;
            if (r == 0 || b  == 0) {
                std::cout << "NO" << std::endl;
                return;
            }
        }
        s.erase(0, pos + 1);
    }
    std::cout << "YES" <<std::endl;
}
 
 
int main() 
{
    std::ios_base::sync_with_stdio(false);
    int t(0);
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}