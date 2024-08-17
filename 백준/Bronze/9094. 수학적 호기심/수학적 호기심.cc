#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <deque>
#include <queue>

using namespace std;

int arr[201][201];

vector<long long> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, max = 0;
    string str, s;
    int min = 1e6;
    cin >> t;
    while(t--){
        cin >> n;
        cin >> m;
        cnt = 0;
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < i; j++)
            {
                if((i * i + j * j + m) % (i * j) == 0){
                    cnt++;
                }
            }
            
        }
        cout << cnt << '\n';
        
    }
    return 0;
}
