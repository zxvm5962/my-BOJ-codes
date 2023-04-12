#include <stdio.h>

int main() {
  long arr[2000];
  int n,m,cnt = 0;
  arr[0] = 0;
  for (int i = 0; i < 520; i++) {
    arr[2 * i + 1] = 10 * arr[i] + 4;
    arr[2 * i + 2] = 10 * arr[i] + 7;
  }
  scanf("%d %d",&n,&m);
  for(int i=0; i<1025;i++){
    if(arr[i]>=n && arr[i]<=m){
      cnt++;
    }
  }
  printf("%d",cnt);

  return 0;
}