#include <algorithm>
#include <iostream>

using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string a;
  cin >> a;
  for(int i=0;i<a.length();i++){
    printf("%c",toupper(a[i]));
  }
  
  return 0;
}
