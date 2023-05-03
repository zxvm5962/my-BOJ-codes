#include <stdio.h> 

long long gcd(long long a,long long b){
  if(b==0)
    return a;
  else
    return gcd(b,a%b);
}
int main(){
  long long n,m,num;
  scanf("%lld %lld",&n,&m);
  num = gcd(n,m);

  for(long long i=0;i<num;i++){
    printf("1");
  }

  
}