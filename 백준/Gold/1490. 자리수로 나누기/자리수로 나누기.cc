#include <stdio.h>
int arr[15];
int q;

void check(long long a) {
  q = 0;
  while (a != 0) {
    arr[q] = a % 10;
    a /= 10;
    q++;
  }
}

int main() {
  long long n;
  int cnt = 0, dp = 1;
  scanf("%lld", &n);

  check(n);
  for (int i = 0; i < q; i++) {
    if (arr[i] == 0) { // 0인 수 제외
      cnt++;
    } else {
      if (n % arr[i] != 0)
        break;
      else
        cnt++;
    }
  }
  if (cnt == q) {
    printf("%lld", n);
    return 0;
  }

  while (1) {
    n *= 10;
    for (int j = 0; j < dp * 10 - 1; j++) {
      cnt = 0;
      for (int i = 0; i < q; i++) {
        if (arr[i] == 0) {
          cnt++;
        } else {
          if (n % arr[i] != 0)
            break;
          else
            cnt++;
        }
      }
      if (cnt == q) {
        printf("%lld", n);
        return 0;
      }
      n++;
    }
    n -= dp * 10 - 1;
    dp *= 10;
  }

  return 0;
}
