#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector<string> v;

  int n, num, cnt = 1;
  string word;
  char ck;

  while (1) {
    int arr[120] = {
        0,
    };
    cin >> n;
    if (n == 0)
      break;

    cin.ignore();

    for (int i = 0; i < n; i++) {
      getline(cin, word);
      v.push_back(word);
    }

    for (int i = 0; i < 2 * n - 1; i++) {
      cin >> num >> ck;
      arr[num - 1]++;
    }

    for (int i = 0; i < n; i++) {
      if (arr[i] != 2)
        cout << cnt << " " << v[i] << "\n";
    }

    v.clear();
    cnt++;
  }

  return 0;
}
