#include <stdio.h>

int Queue[10001];
int Front = -1, Rear = -1;

void push(int data) { Queue[++Rear] = data; }

int size() { return Rear - Front; }

int empty() { return Front == Rear ? 1 : 0; }

void pop() {
  if (empty() == 0) {
    printf("%d\n", Queue[Front + 1]);
    Front++;
  } else
    printf("-1\n");
}
int main() {
  int n;
  scanf("%d", &n);
  while (n--) {
    int m;
    char arr[10];
    scanf("%s", arr);
    if (arr[0] == 'p' && arr[1] == 'u') {
      scanf("%d", &m);
      push(m);
    } else if (arr[0] == 'p')
      pop();
    else if (arr[0] == 's')
      printf("%d\n", size());
    else if (arr[0] == 'e')
      printf("%d\n", empty());
    else if (arr[0] == 'f') {
      if (empty() == 0) {
        printf("%d\n", Queue[Front + 1]);
      }
      else
        printf("-1\n");
    } 
    else if (arr[0] == 'b') {
      if (empty() == 0) {
        printf("%d\n", Queue[Rear]);
      }
      else
        printf("-1\n");
    }
  }

  return 0;
}
