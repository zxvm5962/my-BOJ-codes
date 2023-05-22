#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int arr[5001];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n,temp = 0;
  cin >> n;
  for(int i=0;i<n;i+=2){
    arr[i] = n-temp;
    arr[i+1] = temp+1;
    temp ++;
  }
  for(int i=0;i<n;i++){
    cout << arr[i] << ' ';
  }
  


  return 0;
}
