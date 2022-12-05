#include <iostream>
#include <array>
 
const int MAX_N = 100;
std::array<int, MAX_N> numbers;
 
 
void solve()
{
    int res(0), n(0);
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> numbers[i];
    }
    res = numbers[0];
    for (int i = 1; i < n; i++) {
        res &= numbers[i];
    }
    std::cout << res << std::endl;
}
 
 
int main()
{
    int t(0);
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}