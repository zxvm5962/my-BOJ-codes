#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<long long> v;
long long arr[10001];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long cnt = 0;
  long long x, k, num;
  cin >> x >> k;
  
  for(int i=0; i<x;i++){
    cin >> num;
    arr[num]++;
  }
  for(int i=0; i<x;i++){
    cin >> num;
    if(arr[num] != 0){
      cnt = cnt + arr[num];
    }
  }
  
  long long result = x * x - cnt;
  cout << result << endl;
  
  return 0;
}