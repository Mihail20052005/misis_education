#include <string>
#include <iostream>
#include <array>
char bukv(char a){
	if (a == 'a' || a == 'o' || a == 'u' || a == 'i' || a == 'e') {
		return 'g';
	}else if(a == 'n') {
		return 'n';
	}
	else{
		return 'sg';
	}
}

 int main(){
	 std::string word;
	 bool flag(1);
	 std::array<int, 100> a;
	 std::cin >> word;
	 for(int i = 0; i < word.length(); i++){
		if(bukv(word[i]) == 'sg'){
			if(i != word.length() | word[i+1] == 'g'){
				flag = 0;
			}
		}

		if(bukv(word[i]) == 'n' | i == word.length()){
			flag = 0;
		
		}
	 }
		if(flag){
			std::cout << "YES";
		}else{
			std::cout << "NO";
		
		}
 
 
 
 }