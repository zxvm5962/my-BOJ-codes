#include <stdio.h>
#include <string.h>

int main() {
  int n, k = 0, len, cnt = 0, p = 0, cnt2 = 0;
  char ch[103] = {0};
  scanf("%d", &n);
  char check[101][101] = {0};
  for (int i = 0; i < n; i++) {
    scanf("%s", ch);
    len = strlen(ch);
    if (len >= 6 && ch[len - 6] == 'C' && ch[len - 5] == 'h' &&
        ch[len - 4] == 'e' && ch[len - 3] == 'e' && ch[len - 2] == 's' &&
        ch[len - 1] == 'e') {
      for (int j = 0; j < len; j++) {
        check[p][j] = ch[j];
      }
      if (p > 0) {
        for (int j = 0; j < p; j++) {
          cnt2 = 0;
          for (int k = 0; k < len; k++) {
            if (check[j][k] == check[p][k]) {
              cnt2++;
            }
          }
        }
      }
      p++;
      if (cnt2 == len) {
        p--;
      }
    }
  }

  for (int i = 0; i < p; i++) {
    if (strcmp(check[0], check[i]) != 0) {
      cnt++;
    }
  }
  if (cnt >= 3)
    printf("yummy");
  else
    printf("sad");
  
  return 0;
}