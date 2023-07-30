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
  int a;
  while (n--) {
    cin >> a;
    while(a--){
      cout << "=";
    }
    cout << "\n";
  }

  return 0;
}
