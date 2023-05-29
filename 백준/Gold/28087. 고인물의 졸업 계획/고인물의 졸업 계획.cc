#include <stdio.h>
#include <stdlib.h>

typedef struct {
  long long gpa;
  long long idx;
} gra;

int compare(const void *first, const void *second) {
  gra a = *(gra *)first;
  gra b = *(gra *)second;

  return a.gpa - b.gpa;
}

gra s[5000001];
long long now[5000001], sum = 0, psum[5000001];

int main() {
  int n, m, begin = 0, end = 0;
  scanf("%d %d", &n, &m);
  for (int i = 0; i < m; i++) {
    scanf("%lld", &s[i].gpa);
    s[i].idx = i + 1;
    if (s[i].gpa >= n && s[i].gpa <= 2 * n) {
      printf("1\n%lld", s[i].idx);
      return 0;
    }
  }
  qsort(s, m, sizeof(gra), compare);

  for (int i = 0; i < m; i++) {
    if (s[i].gpa < n) {
      sum += s[i].gpa;
      now[end] = s[i].idx;
      end++;
      if(sum >= n && sum <= 2 * n)
        break;
    }
  }
  printf("%d\n", end);
  for (int i = 0; i < end; i++) {
    printf("%lld\n", now[i]);
  }

  return 0;
}