#include <stdio.h>

int stack[100001];
int top = -1;

void push(int a){
  stack[++top] = a;
}
int pop(){
  return stack[top--];
}



int main() {
  int n, num,sum=0;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&num);
    if(num != 0){
      push(num);
    }
    else
      pop();
  }
  for(int i=0;i<=top;i++){
    sum += stack[i];
  }
  printf("%d",sum);
  return 0;
}