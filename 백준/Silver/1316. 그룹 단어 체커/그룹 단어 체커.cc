#include <stdio.h>
#include <string.h>
int main() {
  int n,cnt3 = 0;
  char word[101];
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int cnt1 = 0, cnt2 = 0;
    scanf("%s", word);
    for (int j = 0; j < strlen(word); j++) {
      cnt1 = 0;
      for (int k = j; k < strlen(word); k++) {
        if (word[j] != word[k]) {
          cnt1 = -1;
        } 
        else if (word[j] == word[k]) {
          if (cnt1 == -1) {
            cnt2++;
          } 
          else
            cnt1 = 0;
        }
      }
    }
    if (cnt2==0){
      cnt3++;
    }
  }
  printf("%d", cnt3);
  return 0;
}