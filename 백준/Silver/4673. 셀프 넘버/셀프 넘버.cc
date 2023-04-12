#include <stdio.h>

int check(int a) {
  int b = a;
  while (a != 0) {
    b += a % 10;
    a /= 10;
  }
  return b;
}

int main() {
  int n,num[20000] = {0};
  for (int i = 1; i <= 10000; i++) {
    num[check(i)]++;
  }
  for (int i = 1; i <= 10000; i++) {
    if(num[i] ==0){
      printf("%d\n",i);
    }
  }
  return 0;
}