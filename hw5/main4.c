#include <stdio.h>
int main(){
  long i=12345
  if(i < 10 && i>= 0){//  個位數
    int result=i*1000;//調到千位
    printf("%04d\n",result);
  }
  else if(10<=i && i<100){//十位數
    int tens=(i/10);
    int ones=(i%10);
    long result= ones*1000 + tens*10;//個位數字調到千位
    printf("%04d\n",result);
  }
 else if (i>=100 && i<1000){
   int hundreds=i/100
   int tens=(i%10)/10
   int ones=(i%10)%10
   long result=ones*1000+hundred*100+tens*10;//個位數字調到千位
   printf("%04d\n",result);
 }
else if (i>=1000 && i<10000){
  int thousands=i/1000
  int hundreds=(i%100)%10
  int tens=(i/10)%10
  int ones=i%10
  long result=ones*1000+hundred*100+tens*10+thousands;//個位數字調到千位,千位數字調到個位
  printf("%04d\n",result);
  }
return 0;
}



/////老師ver
int i=12345;
int t=0;
int d=0;

if(i>= 1000){
  t=i %10000/1000;
}
d=i%10;
i -=t*1000;
i -=d;
i -=d*1000;
i +=t;
printf("i = %d\n",i);
