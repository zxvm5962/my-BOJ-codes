#include <algorithm>
#include <iostream>

using namespace std;

int dp[1001];
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  dp[1] = 1;
  dp[2] = 2;
  for(int i=3;i<1001;i++){
    dp[i]= (dp[i-1]%10007 + dp[i-2]%10007)%10007;
  }

  cout << dp[t];

}
