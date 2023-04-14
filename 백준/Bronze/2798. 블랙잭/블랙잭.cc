#include <stdio.h>

int main() {
  int n, m, num,result;
  int arr[100], sum[900001] = {0};
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        num = arr[i] + arr[j] + arr[k];
        sum[num]++;
      }
    }
  }
  for(int i=m;i>0;i--){
    if(sum[i]>=1){
      result = i;
      break;
    }
  }
  printf("%d",result);
  return 0;
}