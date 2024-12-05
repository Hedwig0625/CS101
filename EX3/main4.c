#include <studio.h>
int main(){
  int year=234543
  if(year % 400 ==0 || year % 4 == 0 && year % 100 !==0){
    printf("是閏年");
  }
  else{
    printf("不是閏年"）;
  }
return 0;
}
