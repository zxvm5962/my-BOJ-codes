#include <algorithm>
#include <iostream>

using namespace std;
int arr[10001];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, num;
  cin >> n;

  for(int i=0;i<n;i++){
    cin >> num;
    arr[num]++;
  }
  for(int i=1;i<=10000;i++){
    if(arr[i] !=0)
      for(int j=0;j<arr[i];j++){
        printf("%d\n",i);
      }
  }

  return 0;
}
