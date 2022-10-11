#include <iostream>

int n, k, a, mn = 10000000;
int main()
{
	std::cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		std::cin >> a;
		if (k % a == 0) {
			mn = mn < k / a ? mn : k / a;
		}
	}
	std::cout << mn;
	return 0;
}