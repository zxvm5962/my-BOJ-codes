#include <stdio.h>
#include <stdlib.h>
#define max_size 300000

int compare(const void *a, const void *b) { return *(long long *)a - *(long long *)b; }

int BinarySearch(long long a, long long n, long long arr[max_size]) {
  long long left = 0, right = n - 1, mid;
  while (left <= right) {
    mid = (left + right) / 2;
    if (a > arr[mid])
      left = mid + 1;
    else if (a < arr[mid])
      right = mid - 1;
    else
      return mid;
  }
  return mid;
}

long long n, milk[max_size] = {0}, record[max_size], q;
long long psum[max_size] = {0}, sum = 0, sum2 = 0, temp;

int main() {
  long long idx, val, sval;
  scanf("%lld", &n);
  for (int i = 0; i < n; i++) {
    scanf("%lld", &milk[i]);
    record[i] = milk[i];
  }

  qsort(record, n, sizeof(long long), compare);

  for (int i = 0; i < n; i++) {
    sum += record[i];
    sum2 += record[i] * (i + 1);

    psum[i] = sum;
  }

  scanf("%lld", &q);
  while (q--) {
    scanf("%lld %lld", &idx, &val);
    idx--;
    sval = milk[idx];
    long long num, num2;
    num = BinarySearch(sval, n, record); //초기 인덱스 값 찾기
    num2 = BinarySearch(val, n, record);
    if (val >= record[num2]) {
      if (num > num2)
        temp = sum2 - (num + 1) * sval + psum[num - 1] - psum[num2] +
               (num2 + 2) * val;

      else if (num == num2)
        temp = sum2 - (num + 1) * (sval - val);
      else
        temp =
            sum2 - (num + 1) * sval - psum[num2] + psum[num] + (num2 + 1) * val;
    } 
    else {
      if (num > num2)
        temp = sum2 - (num + 1) * sval + psum[num - 1] - psum[num2 - 1] +
               (num2 + 1) * val;

      else if (num == num2)
        temp = sum2 - (num + 1) * (sval - val);
      else
        temp =
            sum2 - (num + 1) * sval - psum[num2 - 1] + psum[num] + (num2)*val;
    }
    printf("%lld\n", temp);
  }

  return 0;
}