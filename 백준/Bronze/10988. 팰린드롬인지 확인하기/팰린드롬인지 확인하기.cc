#include <stdio.h>
#include <string.h>

int main() {
  int n, check;
  char palin[101];
  scanf("%s", palin);
  n = strlen(palin);
  for (int i = 0; i < n / 2; i++) {
    if (palin[i] == palin[n-1 - i])
      check = 1;
    else {
      check = 0;
      break;
    }
  }
  printf("%d", check);
  return 0;
}