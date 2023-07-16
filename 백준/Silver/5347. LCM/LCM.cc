#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

long long gcd(long long a, long long b){
  if (b==0)
    return a;
  else
    return gcd(b,a%b);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long t, n,m;
  cin >> t;
  
  while(t--){
    cin >> n >> m;
    long long res = (n * m) / gcd(n,m); 
    cout << res << "\n";
  }
  return 0;
}
