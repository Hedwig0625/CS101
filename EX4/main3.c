#include <stdio.h>
int main(){
  for(int x =1,y=1;x<10 && y<10;y++){
    printf("%d*%d=%d",x,y,x*y);
    if(y == 9){
      printf("\n");
      x=++;
      y=0;
    }
    else{
      continue;
    }
  }
  return 0;
}
