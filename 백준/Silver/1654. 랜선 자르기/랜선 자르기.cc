#include <stdio.h>

int main() {
  long long n, k, lan[10001] = {0};
  long long max = 0;
  scanf("%lld %lld", &n, &k);
  for (int i = 0; i < n; i++) {
    scanf("%lld", &lan[i]);
    if (max < lan[i])
      max = lan[i];
  }
  long long left, right, mid, sum, result = 0;
  left = 1;
  right = max;
  while (left <= right) {
    mid = (left + right) / 2;

    sum = 0;
    for (int i = 0; i < n; i++) {
      sum += lan[i] / mid;
    }
    if (sum > k) {
      {
        left = mid + 1;
        if (result < mid)
          result = mid;
      }
    } else if (sum < k) {
      right = mid - 1;
    } 
    else {
      if (result < mid)
        result = mid;
      left = mid+1;
    }
  }
  printf("%lld", result);

  return 0;
}