#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int arr[1001], dp[1001];
vector<int> v;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, ans = 1;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    dp[i] = 1;
  }

  int check = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] < arr[j]) {
        dp[j] = max(dp[j], dp[i] + 1);
        if (ans < dp[j]) {
          ans = dp[j];
          check = j;
        }
      }
    }
  }
  cout << ans << "\n";
  v.push_back(arr[check]);
  for (int i = check; i > 0;) {
    if (dp[i] == 1)
      break;
    for (int j = i - 1; j >= 0; j--) {
      if (dp[j] == dp[i] - 1 && arr[i] > arr[j]) {
        v.push_back(arr[j]);
        i = j;
        break;
      }
    }
  }
  reverse(v.begin(), v.end());
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }

  return 0;
}
