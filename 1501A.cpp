#include <iostream>
#include <array>
 
const int MAX_N = 101;
std::array<int, MAX_N> a, b, tm {0};
 
void solve()
{
    int n(0), ai(0), bi(0);
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i] >> b[i];
    }
   // std::cout << a[0] << b[0] << tm [1];
    for (int i = 0; i < n; i++) {
        std::cin >> tm[i];
    }
    for (int i = 0; i < n; i++) {
        ai = bi + (a[i] - b[i - 1]) + tm[i];
        bi = std::max(b[i], ai + (b[i] - a[i] + 1) / 2);
    }
    std::cout << ai << std::endl;
}
 
 
int main()
{
    int t(0);
    std::cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}