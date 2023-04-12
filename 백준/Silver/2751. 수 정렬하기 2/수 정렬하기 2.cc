#include <stdio.h>

int main() {
  int n,num, arr[1000001] = {0},arr2[1000001] = {0};
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &num);
    if(num<0){
      arr2[~num+1]++;
    }
    else arr[num]++;
  }
  for (int i=1000000; i>=0;i--){
    if (arr2[i]!=0){
      printf("%d\n",~i+1);
    }
  }
  for (int i=0; i<=1000000;i++){
    if (arr[i]!=0){
      printf("%d\n",i);
    }
  }
  return 0;
}