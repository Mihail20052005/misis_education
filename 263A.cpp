#include <stdio.h>
#include <iostream>
int main()
{   
    int matrix[5][5];
    for(int i = 0; i < 5; i+=1){
        int f = 0;
        int s = 0;
        int th = 0;
        int fo = 0;
        int fi = 0;
        std::cin>>f>>s>>th>>fo>>fi;
        matrix[i][0] = f;
        matrix[i][1] = s;
        matrix[i][2] = th;
        matrix[i][3] = fo;
        matrix[i][4] = fi;
    }
    
    for(int i = 0; i < 5; i+=1){
        for(int j =0 ; j < 5; j+=1){
            if(matrix[i][j] == 1){
                std::cout<<abs((i-2))+abs((j-2));
                break;
            }
        }
        
    }
    
}