
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    long long n(0), k(0);
    // const int kSize(500);
    // std::vector<int> add_players;
    std::queue<int> players;
    std::cin >> n >> k;
    int max_strength = -1;
    int indxMax = 0;
    for (int i = 0; i < n; i++) {
        int strength(0);
        std::cin >> strength;
        if (strength > max_strength) {
            max_strength = strength; 
            indxMax = i;
        }
        players.push(strength);
    }
    // int max_strngth = std::max_element(add_players.begin(), add_players.end());
    // int idxMaxStrgth = std::distance(add_players.begin(), max_strngth);

    if (indxMax < k) {
        std::cout << max_strength << std::endl;
    }
    else {
        long long score(0);
        int curr = players.front();
        players.pop();
        while (score != k) {
            if (curr > players.front()) {
                score++;
                int tmp_strength = players.front();
                players.pop();
                players.push(tmp_strength);
            }
            else {
                score = 1;
                int tmp_strength = curr;
                curr = players.front();
                players.pop();
                players.push(tmp_strength);
            }
        }
        std::cout << curr << std::endl;
    }
    return 0;
}