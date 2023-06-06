#include <stdio.h>
#include <stdlib.h> 

int main(){
  long long n,m;
  scanf("%lld %lld",&n,&m);

  long long result = n-m;
  if(result < 0 )
    result = -result;

  printf("%lld",result);
  
  return 0;
}

