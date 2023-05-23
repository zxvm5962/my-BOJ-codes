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

  string n, k;
  int num, min = 0, max = 0;
  cin >> n >> k;

  for (int i = 0; i < n.length(); i++) {
    if (n[i] == '6')
      n[i] = '5';
    if (k[i] == '6')
      k[i] = '5';
  }
  num = stoi(n);
  min += num;
  num = stoi(k);
  min += num;
  for (int i = 0; i < n.length(); i++) {
    if (n[i] == '5')
      n[i] = '6';
    if (k[i] == '5')
      k[i] = '6';
  }
  num = stoi(n);
  max += num;
  num = stoi(k);
  max += num;
  printf("%d %d",min,max);

  return 0;
}
