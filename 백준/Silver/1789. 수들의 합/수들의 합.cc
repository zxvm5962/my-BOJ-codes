#include <stdio.h>

int main() {
  int result = 0;
  long long n;
  long long k[120000] = {0};
  scanf("%lld",&n);
  for(long i=1; i<120000;i++){
    k[i] = (i*i + i)/2;
  }
  for(long i=1; i<120000;i++){
    if(n< k[i]){
      result = i - 1;
      break;
    }
  }
  printf("%d\n",result);

  return 0;
}