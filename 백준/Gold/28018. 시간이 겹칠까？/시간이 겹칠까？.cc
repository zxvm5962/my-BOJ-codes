#include <stdio.h>

int stime[1000001] = {0}, ftime[1000001] = {0};
long long psum_s[1000001] = {0}, psum_f[1000001] = {0};
int main() {
  int n, q, rtime, num1, num2;
  long long sum1 = 0, sum2 = 0;

  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &num1, &num2);
    stime[num1]++;
    ftime[num2]++;
  } //시작 시간, 끝나는 시간 횟수 기록
  for (int i = 1; i < 1000001; i++) {
    sum1 += stime[i];
    sum2 += ftime[i];

    psum_s[i] = sum1;
    psum_f[i] = sum2;
  }
  scanf("%d", &q);
  while (q--) {
    scanf("%d", &rtime);
    printf("%lld\n", psum_s[rtime] - psum_f[rtime - 1]);
  }

  return 0;
}
