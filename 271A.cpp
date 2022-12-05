
#include <iostream>
 
int main()
{
  int w = 0;
  std::cin>>w;
 
  for(int i1 = w; i1 < 100000000; i1++){
    int i = i1+1;
    int first = i % 10;
    int second = (i / 10) % 10;
    int third = ((i / 100) % 10);
    int four = i / 1000;
    
    
    if ((first != second) && (second != third) && (third!= four) && (first != third) && (first != four) && (second != four)){
        std::cout<<i;
        break;
        }
      }
}