#include <stdio.h>

int main() {
  int n, num[100003] = {0}, left = 0, right = 0, len, min = 100002;
  long long s, sum = 0, psum[100003] = {0};
  scanf("%d %lld", &n, &s);
  for (int i = 0; i < n; i++) {
    scanf("%d", &num[i]);
    sum += num[i];
    psum[i] = sum;// 누적 합
  }
  
  while (left <= right) {// 두 포인터
    long long l = psum[right] - psum[left] + num[left];
    if (l >= s) {
      len = right - left + 1;
      if (min > len)
        min = len;
      left++; //구간 합이 s보다 크면 left 값 증가
    }
    else if (l < s) {
      right++; //구간 합이 s보다 작으면 right 값 증가
      if (right == n)
        break;
    }
  }
  if (min != 100002) {
    printf("%d", min);
  } 
  else
    printf("0");
  return 0;
}
