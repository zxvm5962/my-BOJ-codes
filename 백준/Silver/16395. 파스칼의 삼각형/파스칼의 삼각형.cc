#include <stdio.h>

int main() {
  int n, k;
  long long tri[31][31] = {0};
  scanf("%d %d", &n, &k);
  for (int i = 1; i <= n; i++) {
    tri[i][1] = 1;
    tri[i][i] = 1;
  }
  for(int i=1;i<n;i++){
    for(int j=1;j<n;j++){
      tri[i+1][j+1] = tri[i][j] + tri[i][j+1];   
    }
  }
  printf("%lld",tri[n][k]);

  return 0;
}