#include <iostream>
#include <array>
 
int main() {
	int n(0), k(0), ans(0), ansmax(-10000);
	std::array<int, 1000> garden{ 0 };
	std::cin >> n >> k;
	for (int i = 0; i < n; i += 1) {
		std::cin >> garden[i];
 
	}
	
	for (int i = 0; i < n; i += 1) {
		if (k % garden[i] == 0) {
			ans = garden[i];
			ansmax = std::max(ansmax, ans);
		}
 
	}
	std::cout << k / ansmax;
 
 
 
}