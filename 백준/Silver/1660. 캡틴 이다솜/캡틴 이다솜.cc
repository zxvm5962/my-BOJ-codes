#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int arr[800], dp[300001];
vector<int> v;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  int check = 0;
  int num = 0, sum = 0;
  for (int i = 1; i < 1000; i++) {
    num = num + i;
    sum += num;
    arr[i] = sum;
    if (arr[i] > n) {
      check = i;
      break;
    }
  }

  for (int j = 1; j <= n; j++) {
    for (int i = 1; i < check; i++) {
      if (dp[j] != 0) {
        if (j >= arr[i])
          dp[j] = min(dp[j], dp[j - arr[i]] + 1);
      } 
      else
        dp[j] = dp[j - 1] + 1;
    }
  }

  cout << dp[n];
  return 0;
}
