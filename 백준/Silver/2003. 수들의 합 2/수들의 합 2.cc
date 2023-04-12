#include <stdio.h>

int main() {
  int n, m, num[10000] = {0};
  int srt = -1, end = 0, cnt = 0;
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    scanf("%d", &num[i]);
  }
  int sum = num[0];
  while (end < n) {
    if (sum == m) {
      cnt++;
      end++;
      sum+=num[end];
    } 
    else if (sum < m) {
      end++;
      sum += num[end];
    } 
    else {
      srt++;
      sum -= num[srt];
    }
  }
  printf("%d",cnt);

  return 0;
}