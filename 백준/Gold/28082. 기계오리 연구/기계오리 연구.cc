#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int I[50002];
int arr[50002];
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, k, num, cnt = 0;
  cin >> n >> k;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  for (int i = 0; i < n; i++) {
    for (int j = 50001; j > 0; j--) {
      if (I[j] > 0 && I[j] < k){
          if(I[j+arr[i]]>0)
        I[j + arr[i]] = min(I[j] + 1,I[j+arr[i]]);
          else
              I[j+arr[i]]=I[j]+1;
    }}
    I[arr[i]] = 1;
  }
  for (int j = 1; j < 50002; j++) {
    if (I[j] != 0)
      cnt++;
  }
  cout << cnt << "\n";
  for (int j = 1; j < 50002; j++) {
    if (I[j] != 0)
      cout << j << ' ';
  }

  return 0;
}
