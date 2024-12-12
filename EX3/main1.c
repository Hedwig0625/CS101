#include <stdio.h>

int main() {
  int number = 5
  if (number % 2 ==0) {
    printf("true");
  }
  else {
    printf("flase");
  }
  return 0;
}
////////老師ver
if(i & (i-1)){/////如果輸入8,1000 and 0111出來是0000,判斷為0,跳到else
  /////如果輸入9,1001 and 1000出來是1000,if 成立
  printf("false");
}
else{
  printf("true");
}
