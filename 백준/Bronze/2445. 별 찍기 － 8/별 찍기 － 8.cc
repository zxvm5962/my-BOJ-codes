#include <stdio.h>

char star[200][200] = {0};

void pattern(int a) {
  for (int i = 0; i < 2 * a-1; i++) {
    for (int j = 0; j < 2 * a-1; j++) {
      star[i][j] = ' ';
    }
  }
  for (int i = 0; i < 2 * a-1; i++) {
    if (i < a) {
      for (int j = 0; j <= i; j++) {
        star[i][j] = '*', star[i][2 * a - 1 - j] = '*';
      }
    } 
    else {
      for (int j = 2 * a - 1; j > i; j--) {
        star[i][j] = '*', star[i][2 * a - 1 - j] = '*';
      }
    }
  }
}

int main() {
  int n;
  scanf("%d", &n);
  pattern(n);
  for(int i=0;i<2*n-1;i++){
    for(int j=0;j<2*n;j++){
      printf("%c",star[i][j]);
    }
    if(i==2*n-2)
      return 0;
    printf("\n");
  }
}