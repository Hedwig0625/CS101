#include <stdio.h>
int main(){
  int x=3
  int y=5
  int z=4
  if (x>0){
    int hundred=x;
  }
  else{
    int hundred=x*(-1)
  }
  if (y>0){
    int ten=y;
  }
  else{
    int ten=y*(-1);
  if (z>0){
    int one=z;
  }
  else{
    int one=z*(-1);
  printf("%d",hundred+ten+one)
  return 0;
}





///////老師ver
//////不用分別看xyz因為只有x有可能為負數
 int x=3
  int y=5
  int z=4
  if (x>0){
   int sum=x*100+y*10+z
   printf("%d",sum);
  }
  else{
    int sum=x*-100+y*10+z
   printf("%d",sum);
  }
