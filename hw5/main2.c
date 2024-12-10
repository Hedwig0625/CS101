#include <stdio.h>
int main(){ 
  int n=5;//算幾次
  double pi=0.0;//pi的累加結果
  int sign=1;//控制正負
  
  for(int i=1;i<＝n*2-1;i+=2){//i最大是2n-1,i增加2是i+=2，等於i= i+2
     pi +=sign * (4/i);//pi=上一個pi+下一個pi
     sign=-sign;//指派負sign給下一個sign
  }
  printf("PI=%.5f\n",pi);
  return 0;
}
