#include <stdio.h>

int main() {
  int n,k;
  long long int up=1,down=1,result,com[1001][1001] = {0};
  int r = 10007;
  scanf("%d %d",&n,&k);
  for(int i=1;i<=n;i++){
    com[i][0] =1;
    com[i][i] =1;
  }
  for(int i=1;i<n;i++){
    for(int j=0;j<k;j++)
    com[i+1][j+1] = ((com[i][j])%r + (com[i][j+1]%r))%r;
  }
  
  printf("%lld",com[n][k]);
  return 0;
}