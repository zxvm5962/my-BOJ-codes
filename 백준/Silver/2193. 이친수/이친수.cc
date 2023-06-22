#include <algorithm>
#include <iostream>

using namespace std;

long long dp[91];
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  dp[1] = 1;
  dp[2] = 1;
  for(int i=3;i<91;i++){
    dp[i]= dp[i-1] + dp[i-2];
  }

  cout << dp[t];

}
