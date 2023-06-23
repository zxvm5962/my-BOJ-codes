#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int note1[1000001],note2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t, n, m;
  cin >> t;
  while (t--) {
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> note1[i];
    }
    cin >> m;
    sort(note1,note1+n);
    for (int i = 0; i < m; i++) {
      cin >> note2;
      cout << binary_search(note1, note1 + n, note2) << "\n";
    }
  }

  return 0;
}
