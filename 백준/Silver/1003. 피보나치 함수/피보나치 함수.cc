#include <stdio.h>

int main() {
  int t, fibo[43][2]={0},n;
  scanf("%d",&t);
  fibo[0][0] = 1, fibo[0][1] = 0;
  fibo[1][0] = 0, fibo[1][1] = 1;
  for(int i=0;i<41;i++){
    for(int j=0;j<2;j++){
      fibo[i+2][j] = fibo[i][j] + fibo[i+1][j];
    }
  }
  for(int i=0;i<t;i++){
    scanf("%d",&n);
    printf("%d %d\n",fibo[n][0],fibo[n][1]);
  }
  return 0;
}