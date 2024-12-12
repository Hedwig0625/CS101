#include <stdio.h>
int main(){
  int min=43234
  if (min <=30){
    printf("free to go");
  }
  else if (min <=0){
    printf("時間為輸入或未停車")
  }
  else if (min >=240){
    printf("$240");
  }
  else{
    int fee = ((min+29) /30) * 30);
    printf("total fee:$ %d\n",fee);
    }
  return 0;
}




//////老師ver
////最後一個else
if (min <=30){
    printf("free to go");
  }
else if{
  if (min%30){/////有餘數的話是true, if成立
    int fee=((i/30)+1)*30;
    printf("$%d",fee);
  }
  else{
    printf("$%d",min-30);
  }
}
else(min >=240){
    printf("$240");
}
}
