#include <algorithm>
#include <iostream>

using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string a;
  cin >> a;
  for(int i=a.length()-1;i>=0;i--){
    printf("%c",a[i]);
  }
  
  return 0;
}
