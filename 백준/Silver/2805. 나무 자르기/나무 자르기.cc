#include <stdio.h>
#include <stdlib.h>

int static compare(const void *first, const void *second) {
  if (*(int *)first > *(int *)second)
    return 1;
  else if (*(int *)first < *(int *)second)
    return -1;
  else
    return 0;
}

int main() {
  long n, m;
  long long sum = 0;
  scanf("%ld %ld", &n, &m);
  long tree[n];
  for (long i = 0; i < n; i++) {
    scanf("%ld", &tree[i]);
  }

  qsort(tree, sizeof(tree) / sizeof(long), sizeof(long), compare);

  long fi, la, mid, check = 0;
  fi = 0, la = tree[n - 1];

  while (fi <= la) {
    sum = 0;
    mid = (la + fi) / 2;

    for (long i = 0; i < n; i++) {
      if (tree[i] > mid) {
        sum += tree[i] - mid;
      }
    }
    if (sum < m) {
      la = mid-1;
    } 
    else if (sum > m) {
      if (check < mid) {
        check = mid;
      }
      fi = mid+1;

    } 
    else {
      check = mid;
      break;
    }
  }

  printf("%ld", check);

  return 0;
}