#include <stdio.h>
#include <string.h>
#define min(a, b) a < b ? a : b
char str[1000001];

int main() {
  scanf("%s", str);
  int cnt2 = 0;
  char check;

  for (int i = 0; i < strlen(str) - 1; i++) {
    if (str[i] != str[i + 1]) {
      cnt2++;
      check = str[i+1];
      while(check == str[i+1]){
        i++;
      }
    }
  }

  printf("%d",cnt2);
  return 0;
}