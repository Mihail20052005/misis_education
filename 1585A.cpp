#include <iostream>
#include <array>
 
void flowers(){
	int n(0), count(1);
	std::cin >> n;
	std::array<int, 1000> flowers{0};
	for(int i = 0; i < n;i++){
		std::cin>>flowers[i];
	
	}
 
    flowers[0] == 1 ? count+=1 : count+=0;
	for(int i = 1; i < n; i+=1){
		if(flowers[i] == 1){
			if(flowers[i-1] == 1){
				count += 5;
			}
			else { count += 1; }
		
		}else{
			if (flowers[i - 1] == 1) {
				count += 0;
			}
			else { count = -1; break; }
		}
	
	}
	std::cout << count<<std::endl;
 
 
}
 
int main(){
    int t(0);
    std::cin>>t;
    while(t--){
        flowers();
        
        }
        
        
        return 0;
    