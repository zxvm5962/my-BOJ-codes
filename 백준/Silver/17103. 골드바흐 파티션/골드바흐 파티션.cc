#include <stdio.h>

int main() {
  int n, num;
  int prime[1000001] = {0};
  prime[0] = 1, prime[1] = 1;

  scanf("%d", &n);
  for (int i = 2; i < 500001; i++) {
    for (int j = 2; i * j < 1000001; j++) {
      prime[i * j] = 1;
    }
  }

  for (int i = 0; i < n; i++) {
    int cnt = 0;
    scanf("%d", &num);
    if (num == 2) {
      printf("0\n");
    } 
    else if (num == 4) {
      printf("1\n");
    } 
    else {
      for (int j = 3; j < num; j += 2) {
        if (prime[j] == 0 && prime[num - j] == 0) {
          if (j <= num - j) {
            cnt++;
          } else
            break;
        }
      }
      printf("%d\n", cnt);
    }
  }

  return 0;
}