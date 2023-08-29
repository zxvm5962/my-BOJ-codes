#include <algorithm>
#include <cstring>
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string str, arr[1000];
  cin >> str;

  int len = str.length();
  for (int i = 0; i < len; i++) {
    arr[i] = str;
    str.erase(str.begin(), str.begin() + 1);
  }

  sort(arr,arr+len);
  
  for (int i = 0; i <len;i++){
    cout << arr[i] << "\n";
  }

    return 0;
}
