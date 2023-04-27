#include <stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  int a[50] = {1, 0}, b[50] = {0};
  for(int i=0;i<n;i++){
    b[i+1] = b[i] + a[i];
    a[i+1] = b[i];
  }
  printf("%d %d",a[n],b[n]);

  return 0;
}