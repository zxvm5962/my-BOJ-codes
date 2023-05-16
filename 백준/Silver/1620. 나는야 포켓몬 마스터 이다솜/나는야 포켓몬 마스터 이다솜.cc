#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int Binarysearch(string a, int n, vector<pair<string,int>>& arr) {
  int left = 0, right = n - 1, mid;
  while (left <= right) {
    mid = (left + right) / 2;
    if (arr[mid].first > a)
      right = mid - 1;
    else if (arr[mid].first < a)
      left = mid + 1;
    else
      return mid;
  }
  return mid;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector<string> v;
  vector<pair<string,int>> arr;
  int m, n, num = 0;
  string name, check;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> name;
    v.push_back(name);
    arr.push_back(pair<string,int>(name,i+1));
  }

  sort(arr.begin(), arr.end());

  for (int i = 0; i < m; i++) {
    cin >> check;
    if (check[0] > 47 && check[0] < 58) {
      num = stoi(check);
      cout << v[num - 1] << "\n";
    } 
    else {
      int result;
      result = Binarysearch(check, n, arr);
      cout << arr[result].second << "\n";
    }
  }

  return 0;
}
