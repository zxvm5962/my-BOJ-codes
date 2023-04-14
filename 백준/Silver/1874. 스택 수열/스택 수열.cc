#include <stdio.h>
#include <string.h>
int stack[100001];
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
int res1[1000001], res2[1000001];
int main() {
  int n, temp, check;
  int arr[1000001];
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  temp = 0;

  for (int i = 1; i <= n; i++) {
    while (stack[top] == arr[temp]) {
      pop();
      temp++;
      res2[i-1]++;
    }
    push(i);
    res1[i]++;
  }

  while (empty() != 1) {
    if (arr[temp] < arr[temp + 1]) {
      printf("NO");
      return 0;
    }
    pop();
    temp++;
    res2[n]++;
  }

  for (int i = 1; i <= n; i++) {
    printf("+\n");
    for (int j = 0; j < res2[i]; j++) {
      printf("-\n");
    }
  }

  return 0;
}
