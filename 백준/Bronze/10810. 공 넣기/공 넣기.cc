#include <stdio.h>

int main() {

  int num1, num2, i, j;
  int list1[100], list2[100];

  scanf("%d %d", &num1, &num2);
  for (i=0; i<=num1; i++){

    list2[i] = 0;
  }

  for (i = 0; i < num2; i++) {
    scanf("%d %d %d", &list1[1], &list1[2], &list1[3]);
    for (j = list1[1]; j <= list1[2];j++) {
      list2[j] = list1[3];
      
    }
  }
  
  for (i = 1; i <= num1; i++) {
    printf("%d ", list2[i]);
  }

  return 0;
}