#include <stdio.h>

int main() {
  int n,cnt5=0,result;
  int num;
  scanf("%d",&n);

  for(int i=1;i<=n;i++){
    num = i;
    while(num != 1){
      if(num%5==0){
        cnt5++;
        num/=5;
      }
      else
        break;
    }
  }
  result = cnt5;
  printf("%d",result);


  return 0;
}
