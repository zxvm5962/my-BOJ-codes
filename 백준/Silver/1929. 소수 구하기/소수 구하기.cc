#include <algorithm>
#include <iostream>

using namespace std;
int prime[1000001];
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m;

  cin >> n >> m;

  prime[1] = 1;
  for (int i = 2; i < 1000000; i++) {
    for (int j = 2; i * j < 1000000; j++) {
      prime[i * j] = 1;
    }
  }
  for(int i= n ;i<=m;i++){
    if(prime[i] == 0)
      printf("%d\n",i);
  }
  return 0;
}
