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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0;
    string str, s;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    cnt = 1;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == cnt)
        {
            cnt++;
        }
        else
            ans++;
    }
    cout << ans << endl;
    return 0;
}
