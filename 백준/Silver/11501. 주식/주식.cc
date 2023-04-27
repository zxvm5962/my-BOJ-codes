#include <stdio.h>
#include <stdlib.h>
#define max(a,b) a>b ? a:b

int main() {
  int n, t;
  scanf("%d", &t);
  while (t--) {
    long long sum = 0;
    int arr[1000002] = {0}, check= 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
    }
    
    for(int i=n-1;i>=0;i--){
      check = max(check, arr[i]);
      if(check > arr[i]){
        sum += check - arr[i];
      }
      else
        continue;
    }
    
    printf("%lld\n", sum);
  }

  return 0;
}