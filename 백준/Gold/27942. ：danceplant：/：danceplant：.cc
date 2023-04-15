#include <stdio.h>
#include <string.h>

int nutr[3003][3003] = {0};

int max(int a, int b, int c, int d);

int main() {
  int n, sum = 0, temp, cnt = 0;
  int size1 = 2, size2 = 2;
  int u_v = 0, d_v = 0, l_v = 0, r_v = 0;
  char check[1000000] = {0};
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      scanf("%d", &nutr[i][j]);
    }
  }
  
  while (1) {
    int u = 0, d = 0, l = 0, r = 0;
    if(n / 2 - 1 - u_v == -1 || n / 2 + 2 + d_v == n+2 ||n / 2 - 1 - l_v== -1||n / 2 + 2 + r_v==n+2)
      break;

    
    for (int j = 1; j <= size1; j++) {
      u += nutr[n / 2 - 1 - u_v][n / 2 + j - 1 - l_v];
    }
    for (int j = 1; j <= size1; j++) {
      d += nutr[n / 2 + 2 + d_v][n / 2 + j - 1 - l_v];
    }
    for (int j = 1; j <= size2; j++) {
      l += nutr[n / 2 + j - 1 - u_v][n / 2 - 1 - l_v];
    }
    for (int j = 1; j <= size2; j++) {
      r += nutr[n / 2 + j - 1 - u_v][n / 2 + 2 + r_v];
    }
    if(u<=0 && d<=0 && l<=0 && r<=0)
      break;

    temp = max(u, d, l, r);

    if (temp == 1) {
      check[cnt] = 'U';
      size2++;
      sum+=u;
      u_v++;
    } else if (temp == 2) {
      check[cnt] = 'D';
      size2++;
      sum+=d;
      d_v++;
    } else if (temp == 3) {
      check[cnt] = 'L';
      size1++;
      sum+=l;
      l_v++;
    } else {
      check[cnt] = 'R';
      size1++;
      sum+=r;
      r_v++;
    }
    cnt++;
  }

  printf("%d\n", sum);
  for (int i = 0; i < strlen(check); i++) {
    printf("%c", check[i]);
  }

  return 0;
}

int max(int a, int b, int c, int d) {
 if (a >= b && a >= c && a >= d)
    return 1;
  else if (b >= c && b >= d)
    return 2;
  else if (c >= d)
    return 3;
  else
    return 4;
}