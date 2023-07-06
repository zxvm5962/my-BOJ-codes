#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, cnt = 0;
  string str;
  cin >> n >> str;
  for(int i=0;i<n;i++){
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
      cnt++;
  }
  cout << cnt;
  return 0;
}
