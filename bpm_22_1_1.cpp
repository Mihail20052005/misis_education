#include <iostream>
#include <cmath>

float result(float x, float i) {
	float result = pow((-1), i + 1) * pow(x, 2 * i + 1) / (4 * i * i - 1);
	return result;
}
int main() {
	float a = 0.1;
	float b = 1;
	double dx = 0.05;
	double eps = 0.0001;
	for (float x = a; x <= b; x += dx) {
		int i = 1;
		float temp = 1;
		float s = 0;
		while (std::abs(temp-s) >= eps) {
			temp = result(x, i);
			s += temp;
			i++;
		}
		std::cout << x << " " << s << std::endl;
	}
}