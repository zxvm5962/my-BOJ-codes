#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int arr[1001],dp[1001];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, ans = 1, check;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    dp[i] = 1;
  }

  for(int i=0; i<n ;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i] < arr[j]){
        dp[j] = max(dp[j],dp[i]+1);
        if(ans<dp[j])
          ans = dp[j];
      }
    }
  }
  cout << ans;
  
  
  return 0;
}
