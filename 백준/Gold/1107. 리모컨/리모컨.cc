#include <stdio.h>
#include <stdlib.h>
#define min(a, b) a < b ? a : b

int check(int a, int b, int arr[11]) { //자릿수 체크 + 고장난 번호가 있는지 체크
  int num[10] = {0}, k = 0;
  if (a == 0)
    k++;
  while (a != 0) {
    num[k] = a % 10;
    k++;
    a /= 10;
  }
  for (int i = 0; i < b; i++) {
    for (int j = 0; j < k; j++) {
      if (num[j] == arr[i])
        return 0;
    }
  }
  return 1;
}

int main() {
  int cha, num, result, temp;
  int n, list[11], min = 500001;
  scanf("%d", &cha);

  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &list[i]);
  }

  for (int i = 0; i <= 1000000; i++) {
    num = check(i, n, list);
    if (num == 0)
      continue;
    else {
      if (min > abs(i - cha)) { //차이의 최소
        min = abs(i - cha);
        result = i;
      }
    }
  }
  int k = 0;
  if (result == 0)
    k++;
  while (result != 0) { //자릿수 체크
    k++;
    result /= 10;
  }
  temp = min + k;
  temp = min(temp, abs(100 - cha));
  printf("%d", temp);

  return 0;
}