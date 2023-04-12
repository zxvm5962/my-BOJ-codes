#include <stdio.h>
#include <string.h>
int stack[10001];
int top = -1;

int empty() {
  if (top < 0)
    return 1;
  else
    return 0;
}
void push(int a) { stack[++top] = a; }
int pop() {
  if (empty() == 1)
    return -1;
  else
    return stack[top--];
}

int main() {
  int n, x;
  char arr[6];
  char *temp[2];
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%s", arr);
    if (arr[0] == 'p' && arr[1] == 'u') {
      scanf("%d", &x);
      push(x);
    } else if (arr[0] == 't') {
      if (empty() == 1)
        printf("-1\n");
      else
        printf("%d\n", stack[top]);
    } else if (arr[0] == 's') {
      printf("%d\n", top + 1);
    } else if (arr[0] == 'p' && arr[1] == 'o') {
      printf("%d\n", pop());

    } else {
      printf("%d\n", empty());
    }
  }
  return 0;
}