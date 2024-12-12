#include <stdio.h>
int main(){
  int distance =5432345
  if (distance <= 1500){
    printf("$70");
  }
  else{
    int fee=(distance-1500+99)/100);
    int total=(fee+70) 
    printf("$ %d",toatl);
  }
  return 0
}



///////老師ver
else{
    int fee=distance-1500
    if (fee%100){/////滿100整則為0,else成立
      int h=((fee/100)+1)*10;
      printf("$%d",70+h);
    }
  else{
    printf("$%d",70+(fee/100)*10);
  }
