#include <stdio.h>
int main(){
  long n=1234;
  if(n<10){
    printf("%d000",n);
  }
    else if (n>=10 && n<100){
    int tens=n/10;
    int ones=n%10;
    long sum=ones*1000+tens
    printf("%d",sum);
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
