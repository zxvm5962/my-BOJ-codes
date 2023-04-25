#include <stdio.h>
#include <string.h>

int main() {
  int t, n, check;
  char card[1001], min;
  scanf("%d", &t);
  for (int i = 0; i < t; i++) {
    char result[2003] = {0};
    scanf("%d", &n);
    scanf("%s", &card[0]);
    result[1000] = card[0];
    min = card[0];
    for (int j = 1; j < n; j++) {
      scanf("%s", &card[j]);
      if (min > card[j])
        min = card[j];
      if (min >= card[j]) {
        result[1000 - j] = card[j];
      } else
        result[1000 + j] = card[j];
    }

    for (int j = 0; j < 2002; j++) {
      if (result[j] != 0) {
        printf("%c", result[j]);
      }
    }
    printf("\n");
  }

  return 0;
}