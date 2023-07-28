#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int arr[100001];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int result = 0;
  sort(arr, arr + n, greater<int>());
  for (int i = 0; i < n; i++) {
    if(result < i+2 + arr[i])
      result = i+2+arr[i];
  }
  cout << result;

  return 0;
}
