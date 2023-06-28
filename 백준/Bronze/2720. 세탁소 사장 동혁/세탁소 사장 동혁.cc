#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t, n;
  cin >> t;
  while(t--){
    cin >> n;
    int q,d,ni,p;
    q = n/25;
    n -= q * 25;
    d = n/10;
    n -= d * 10;
    ni = n/5;
    n -= ni * 5;
    p = n;
    printf("%d %d %d %d\n",q,d,ni,p);
  }

  return 0;
}