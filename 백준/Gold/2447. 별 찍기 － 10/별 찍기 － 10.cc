#include <stdio.h>

char star[2200][2200] = {0};

void pattern(int a, int end) {
  for (int i = 0; i < end; i++) {
    for (int j = 0; j < end; j++) {
      if ((i / a) % 3 == 1 && (j / a) % 3 == 1)
        star[i][j] = ' ';
      else {
        if(star[i][j] != ' ')
        star[i][j] = '*';
      }
    }
  }
}

void recur(int n) {
  int num = n;
  for (int i = 1; i < 8; i++) {
    pattern(num / 3, n);
    num /= 3;
    if (num == 1)
      break;
  }
}

int main() {
  int n;
  scanf("%d", &n);
  recur(n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%c", star[i][j]);
    }
    printf("\n");
  }

  return 0;
}
