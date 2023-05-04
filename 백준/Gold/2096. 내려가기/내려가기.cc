#include <stdio.h>

int max(int a, int b, int c) {
  if (a >= b && a >= c)
    return a;
  else if (b >= c)
    return b;
  else
    return c;
}

int min(int a, int b, int c) {
  if (a <= b && a <= c)
    return a;
  else if (b <= c)
    return b;
  else
    return c;
}

int mdp[100001][3] = {0};
int down[100001][3] = {0};

int main() {
  int n, max_num, min_num;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &down[i][j]);
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < 3; j++) {
      if (j == 0) {
        mdp[i][j] = max(mdp[i - 1][j] + down[i][j],
                          mdp[i - 1][j + 1] + down[i][j], -1);
      } else if (j == 1) {
        mdp[i][j] =
            max(mdp[i - 1][j - 1] + down[i][j], mdp[i - 1][j] + down[i][j],
                mdp[i - 1][j + 1] + down[i][j]);
      } else
        mdp[i][j] = max(mdp[i - 1][j - 1] + down[i][j],
                          mdp[i - 1][j] + down[i][j], -1);
    }
  }
  
  max_num = max(mdp[n][0], mdp[n][1], mdp[n][2]);
  printf("%d ", max_num);

  for(int i=1;i<=n;i++){
    for(int j=0;j<3;j++){
      mdp[i][j] = 0;
    }
  }
  
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < 3; j++) {
      if (j == 0) {
        mdp[i][j] = min(mdp[i - 1][j] + down[i][j],
                          mdp[i - 1][j + 1] + down[i][j], 1000000);
      } 
      else if (j == 1) {
        mdp[i][j] =
            min(mdp[i - 1][j - 1] + down[i][j], mdp[i - 1][j] + down[i][j],
                mdp[i - 1][j + 1] + down[i][j]);
      }
      else
        mdp[i][j] =
            min(mdp[i - 1][j - 1] + down[i][j], mdp[i - 1][j] + down[i][j],1000000);
    }
  }
  
  min_num = min(mdp[n][0],mdp[n][1], mdp[n][2]);
  printf("%d", min_num);
  
  return 0;
}
