
#include <iostream>
#include <vector>
#include<algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);

    const int kSize(200000);
    std::vector<int> contests;
    int n(0);
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int a(0);
        std::cin >> a;
        contests.push_back(a);
    }
    std::sort(contests.begin(), contests.end());
    int days = 0;

    for (int i = 0; i < n; i++) {
        if (days < contests[i]) {
            days++;
        }
    }
    std::cout << days << std::endl;
}