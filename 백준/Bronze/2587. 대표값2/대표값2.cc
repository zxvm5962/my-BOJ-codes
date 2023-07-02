#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> v;


int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int num;
  int sum  =0;
  for(int i=0; i<5;i++){
    cin >> num;
    v.push_back(num);
    sum += num;
  }
  sort(v.begin(),v.end());

  cout << sum/5 << "\n" <<v[2];
  return 0;
}

