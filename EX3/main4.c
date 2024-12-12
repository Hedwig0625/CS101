#include <stdio.h>
int main(){
  int year=234543                               /////!==是不等於
  if(year % 400 ==0 || year % 4 == 0 && year % 100 !==0){///////如果||前面成立了，就不會看後面了
    printf("是閏年");
  }
  else{
    printf("不是閏年"）;
  }
return 0;
}


