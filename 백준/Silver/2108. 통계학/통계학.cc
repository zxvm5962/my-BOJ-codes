#include <math.h>
#include <stdio.h>

int main() {
  int n, m, num[8002] = {0}, cnt = 0, cnt3 = 0;
  int mid, fir, end, max = 0, max_num, cnt2 = 0, check[10] = {0};
  double sum = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &m);
    num[m + 4000]++;
  }
  for (int j = 0; j < 8002; j++) {
    if (num[j] == 1) {
      sum += j - 4000;
      cnt++;
    } else if (num[j] > 1) {
      for (int k = 0; k < num[j]; k++) {
        sum += j - 4000;
        cnt++;
      }
    }
    if (max < num[j]) {
      max = num[j];
      max_num = j;
    }
    if (cnt == n) {
      end = j;
      break;
    }
  }
  for (int i = 0; i < 8002; i++) {
    if (max == num[i]) {
      cnt2++;
      for (int j = 1; j <= cnt2; j++) {
        check[cnt2] = i;
      }
    }
    if (cnt2 > 1) {
      max_num = check[2];
      break;
    }
  }
  for (int j = 0; j < 8002; j++) {
    if (num[j] >= 1) {
      fir = j;
      break;
    }
  }

  for (int j = 0; j < 8002; j++) {
    if (num[j] == 1) {
      cnt3++;
      if (cnt3 == n / 2 + 1) {
        mid = j - 4000;
        break;
      }
    } else if (num[j] > 1) {
      for (int k = 0; k < num[j]; k++) {
        cnt3++;
        if (cnt3 == n / 2 + 1) {
          mid = j - 4000;
          break;
        }
      }
    }
  }
  printf("%d\n%d\n%d\n%d\n", (int)round(sum / (double)n), mid, max_num - 4000, end - fir);

  return 0;
}