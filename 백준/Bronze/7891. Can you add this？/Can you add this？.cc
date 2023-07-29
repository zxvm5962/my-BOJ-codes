#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  long long a,b;
  while(n--){
    cin >> a >> b;
    cout << a+b << "\n";
  }

  return 0;
}
