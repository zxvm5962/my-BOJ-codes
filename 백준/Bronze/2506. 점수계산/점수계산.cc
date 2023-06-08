#include <stdio.h>

int arr[101];
int main() {
  int n, score = 1, res = 0;
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 1; i <= n; i++) {
    if (arr[i - 1] == 1)
      score++;
    if(arr[i] == 1){
      res += score;
    }
    else{
      score = 1;
    }
  }
  printf("%d",res);
}