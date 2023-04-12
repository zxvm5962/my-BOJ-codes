#include <stdio.h>

int main() {
  int temp,n,cnt=0,sum=0,num=1,check=1;
  scanf("%d",&n);
  if(n<10){
    printf("%d",n);
    return 0;
  }
  temp = n;
  while (n!=0){
    n/=10;
    cnt++;
  }
  for(int i=1;i<=cnt-1;i++){
    sum += 9 * num * i;
    num *= 10;
  }
  for(int i=1;i<=cnt;i++){
    check *= 10;
  }
  sum += (temp%check-(check/10) +1) * cnt;
  printf("%d",sum);
  return 0;
}
