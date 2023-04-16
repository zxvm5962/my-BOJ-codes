#include <stdio.h>

int main() {
  int check;
  long long n, m = 1, cat[45] = {0};
  scanf("%lld", &n);
  if (n == 0) {
    printf("0");
    return 0;
  }
  cat[1] = 1;
  for (int i = 2; i < 44; i++) {
    m *= 2;
    cat[i] = m;
  }
  for (int i = 1; i < 44; i++) {
    if (n <= cat[i]) {
      check = i;
      break;
    }
  }
  printf("%d", check);

  return 0;
}