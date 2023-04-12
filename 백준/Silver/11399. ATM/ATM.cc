#include <stdio.h>

int main() {
  int a, b, c, sum = 0, sum2 = 0, temp = 0;
  int time[1001] = {0}, arr[1001] = {0};
  scanf("%d ", &a);
  for (int i = 0; i < a; i++) {
    scanf("%d", &time[i]);
  }
  for (int i = 0; i < a; i++) {
    for (int j = i; j < a; j++) {
      if (time[i] > time[j]) {
        temp = time[i];
        time[i] = time[j];
        time[j] = temp;
      }
    }
  }
  for (int i = 0; i < a; i++) {
    sum += time[i];
    arr[i] = sum;
  }
  for (int i = 0; i < a; i++) {
    sum2 += arr[i];
  }
  printf("%d",sum2);
  return 0;
}