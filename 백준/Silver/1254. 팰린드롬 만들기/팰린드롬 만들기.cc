#include <stdio.h>
#include <string.h>

int main() {
  char pal[52];
  scanf("%s", pal);
  int left = 0, right, cnt = 0, res, min = 101;
  int len = strlen(pal);
  if(len ==1){
    printf("1");
    return 0;
  }
  for (int i = 0; i < len-1; i++) {
    left = i;
    cnt = 0;
    right = len - 1;
    while (1) {
      if (pal[left] == pal[right]) {
        left++;
        right--;
        cnt++;
      } else if (pal[left] != pal[right]) {
        left++;
        right = len - 1;
        cnt = 0;
      }
      if (left > right) {
        res = (2 * len - 2 * cnt);
        break;
      }
      if (left == right) {
        res = (2 * len - 2 * cnt - 1);
        break;
      }
    }
    if (min > res) {
      min = res;
    }
  }
  printf("%d", min);

  return 0;
}
