#include <stdio.h>
int main(){
  int n=7;//七層
  for(int i=1;i<=n;i++){//從1開始,最多到7(控制行,最下面的printf)
    for(int j=1;j<=n;j++){//控制印數字（else)
      if(j<=n-i){//如果印的數字到n-1(因為前面應該要有n-1個空個）,則需換行
        printf(" ");
      }
      else{
        printf("%d",i);
      }
    }
  printf("\n");
  }
return 0;
}
