#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, k;
  cin >> n >> k;
  int arr[1001] = {0};

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n,greater<int>());

  cout << arr[k - 1];

  return 0;
}