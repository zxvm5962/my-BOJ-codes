#include <stdio.h>

int tok[1000002], ch[1000002];
int arr[100002], rec[100002];
int main() {
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    tok[arr[i]]++;
  }

  int k = 0;
  for (int i = 1; i < 1000001; i++) {
    if (tok[i] != 0) {
      rec[k] = i;
      k++;
      tok[i]--;
    }
  }

  for (int i = k-1; i >=0; i--) {
    for (int j = 2; rec[i] * j < 1000001; j++) {
      tok[rec[i] * j] += tok[rec[i]] + 1;
    }
  }

  for (int i = 0; i < n; i++) {
    printf("%d\n", tok[arr[i]]);
  }

  return 0;
}