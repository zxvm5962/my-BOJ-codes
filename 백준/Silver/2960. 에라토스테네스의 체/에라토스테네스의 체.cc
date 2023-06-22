#include <algorithm>
#include <iostream>

using namespace std;
int arr[1001];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, cnt = 0, k;
  cin >> n >> k;
  for (int i = 2; i <= n; i++) {
    for (int j = 1; i * j <= n; j++) {
      if (arr[i * j] == 0) {
        arr[i * j] = 1;
        cnt++;
      }
      if (cnt == k) {
        printf("%d", i * j);
        return 0;
      }
    }
  }

  return 0;
}
