#include <iostream>
#include <cmath>
bool circles(float x, float y){

	if((pow(x,2) + pow(y, 2)) <= 4){
		return true;
	}
	else {
		return false;
	}
}

bool lines(float x, float y) {
	if (y >= (2 - pow(x,2))) {
		return true;
	}
	else {
		return false;
	}
}

int main(){
	int count(0);
	float count_right(0);
	while(true){
		float x(0);
		float y(0);
		std::cin >> x;
		std::cin >> y;
		count += 1;
				
		if (circles(x, y) == 1 & lines(x, y) == 1) {
			count_right += 1;
		}

		std::cout << count_right / count << " ";
	}



	


}