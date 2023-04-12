#include <stdio.h>
#include <string.h>

int main() {
  char num[7];
  int check[10] = {0}, cnt = 0, max = 0;
  scanf("%s", num);
  for (int i = 0; i < strlen(num); i++) {
    for (int j = 0; j < 10; j++) {
      if (num[i] == j + 48) {
        if (j == 9) {
          check[6]++;
        } else
          check[j]++;
      }
    }
  }
  if (check[6] % 2 == 1) {
    check[6] = check[6] / 2 + 1;
  } else
    check[6] /= 2;
  for (int i = 0; i < 10; i++) {
    if (max < check[i]) {
      max = check[i];
    }
  }
  printf("%d", max);
  return 0;
}