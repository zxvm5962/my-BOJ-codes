#include <stdio.h>

int Queue[1000001];
int Front = -1, Rear = -1;

void push(int data) { Queue[++Rear] = data; }

int size() { return Rear - Front; }

int empty() { return Front == Rear ? 1 : 0; }

void pop() { Front++; }
int main() {
  int n;
  scanf("%d", &n);
  if (n == 1) {
    printf("%d", n);
    return 0;
  }
  for (int i = 1; i <= n; i++) {
    push(i);
  }
  while (1) {
    pop();
    push(Queue[Front + 1]);
    pop();
    if (size() == 1)
      break;
  }
  printf("%d", Queue[Rear]);

  return 0;
}
