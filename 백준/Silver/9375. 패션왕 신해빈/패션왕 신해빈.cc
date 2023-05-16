#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector<pair<string, string>> v;
  int t, n;
  string name, clo;
  cin >> t;
  while (t--) {
    cin >> n;
    v.clear();
    for (int i = 0; i < n; i++) {
      cin >> name >> clo;
      v.push_back(pair<string, string>(clo, name));
    }
    sort(v.begin(), v.end());

    int arr[32] = {0}, cnt = 1, psum = 0, msum = 1,temp = 0;
    for (int i = 0; i < n; i++) {
      if (v[i].first != v[i + 1].first) {
        arr[cnt] = i + 1 - temp;
        temp += arr[cnt];
        cnt++;
      }
    }

    for (int i = 0; i < cnt; i++) {
      if (arr[i] != 0)
        psum += arr[i];
    }
    for (int i = 0; i < cnt; i++) {
      if (arr[i] != 0)
        msum *= (arr[i]+1);
    }
    if (n == 0)
      cout << "0" << "\n";
    else {
      if (cnt == 2) {
        cout << psum << "\n";
      } 
      else
        cout << msum-1 << "\n";
    }
  }

  return 0;
}

// 2 1 1 1
// 
// 4 3 2 1
//5 *4 *3* 2  - 1