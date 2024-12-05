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
