#include <stdio.h>
int main(){ 
  int n=1000000000;//算幾次
  double pi=0.0;//pi的累加結果
  int sign=1;//控制正負
  
  for(int i=1;i <= n*2-1;i+=2){//i最大是2n-1,i增加2是i+=2，等於i= i+2
     pi +=sign * (4/i);//pi=上一個pi+下一個pi
     sign=-sign;//指派負sign給下一個sign
  }
  printf("PI=%.5f\n",pi);
  return 0;
}
//////錯的，不能直接用浮點數算，很容易不準




/////老師ver
double pi=4.0
int flag=1
long ipi=0
int x =0

for(int i =3,i<1000000;i+=2){////第一項是除一，免算，直接從3開始
  if (flag == 0){////flag控制正負,1負0正 ///////////flag=0（此項正的)
    pi+=(4.0/i);
    flag++;
  }
  else{     //////flag=1（此項負的）
    pi -=(4.0)/i;
    flag--;
  }
  ipi = pi* 1000000;
  if(ipi == 314159){
    x=pi;
    break;
  }
}
printf("%d.%.5f",x,pi);
