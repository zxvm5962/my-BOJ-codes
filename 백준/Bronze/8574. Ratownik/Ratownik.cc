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
    long long n, m, k = 0, sum = 0, cnt = 0, x, y;
    string str, s;
    cin >> t >> k >> x >> y;
    while (t--)
    {
        cin >> n >> m;
        if (k * k < pow((n - x), 2) + pow((m - y), 2))
            cnt++;
    }
    cout << cnt;
    return 0;
}
