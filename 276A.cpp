#include <stdio.h>
#include <iostream>
int main()
{   int k[1000000];
    int w  = 0;
 
        
    
    std::cin>>w;
    for(int i = 0; i < w; i+=1){
      std::cin>>k[i];
      
      }
    
      
     for(int i = 0; i < w; i+=1){
      
      int n = 0;
      
      while(k[i] > 0){
          if(k[i] > 1000){
              n+=1;
              if((k[i] / 100)%10!=0){
                  n+=1;
              }
              
              if((k[i]%100) / 10 != 0) {n+=1;}
              if(k[i]%10 != 0) {n+=1;}
              
          }else if(k[i] > 100){
              if(k[i] %10 != 0){n+=1;}
              if(k[i] / 100 != 0){n+=1;}
              if((k[i] % 100)/10!=0) {n+=1;}
          }else if (k[i] > 10 ){
              
              if(k[i] %10 !=0 ){n+=1;}
              if(k[i] / 10 != 0){n+=1;}
          }
          
          if(k[i]< 10){n+=1;}
          
          if(k[i] == 10){
              n+=1;
          }
          
          std::cout<<n<<std::endl;
          if(k[i] > 1000){
              std::cout<<(k[i] / 1000)* 1000<<" ";
              k[i]-=(k[i] / 1000)* 1000;
              n+=1;
              }
          if(k[i] > 100){
              std::cout<<(k[i]/100)*100<<" ";
              k[i]-=(k[i]/100)*100;
              n+=1;
              }
          if(k[i]>10){
              std::cout<<(k[i]/10)*10<< " ";
              k[i]-=(k[i]/10)*10;
              n+=1;
              
             }
            if(k[i] == 10){
                
                std::cout<<10<<" ";
                k[i] -= 10;
            }  
        if((k[i]>0) && (k[i] != 10)){
              std::cout<<(k[i]%10)<< " ";
              k[i]-=(k[i]%10);
              n+=1;
            
            }
            
            std::cout<<std::endl;
         
          }
          
     }    
    
 
 
    
}