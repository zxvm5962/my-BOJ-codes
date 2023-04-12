#include <stdio.h>
int main(){
  int n;
  long long num = 1,rest = 1;
  scanf("%d",&n);
  for(int i=0;i<9;i++){
    rest *=10;
  }
  rest +=7;
  for(int i=0;i<n+2;i++){
    num = ((num%rest)*(2 % rest))%rest;
  }
  if(num>=5){
    num -=5;
  }
  else{
    num = num + rest - 5;
  }
  printf("%lld",num);

  return 0;
}