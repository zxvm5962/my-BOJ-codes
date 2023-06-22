#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t, num, sum = 0, psum = 0;
  cin >> t;
  for(int i=0; i<t;i++){
    cin >> num;
    v.push_back(num);
  }
  sort(v.begin(),v.end());
  for(int i=0; i<t;i++){
    sum += v[i];
    psum += sum;
  }
  cout << psum;

}
