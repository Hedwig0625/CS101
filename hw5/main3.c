/////////////////原版
#include <stdio.h>
int main(){
  for(int y=1;y <= 9;y++){
    for(int x=1;x <=9;x++){
      printf("%d*%d=％d\t",x,y,x*y);//\t是右移一點
    }
  printf("\n")
  }
  return 0;
}
///////////////作業
#include <stdio.h>
int main(){ 
  for(int x=1, y=1; x <10 && y <10; x++,y++){//要用＆＆要不然會視後面那項為條件，忽略前項
    printf("%d*%d=％d\t",x,y,x*y);
    if (x == 9){//記得要用==，要不然會變指派
      printf("\n");
    }
    else{
      continue;//其實可以不用else,是多餘ㄉ
    }
  }
  return 0;
}
