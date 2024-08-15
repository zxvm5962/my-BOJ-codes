#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <deque>

using namespace std;

int arr[201][201];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0;
    double a, b, c, d, e, f = 0;
    bool flag = false;

    cin >> t >> n;
    sum = n;
    while (t--)
    {
        cin >> m >> k;
        n += m - k;
        if (n < 0)
        {
            flag = true;
        }
        if (sum < n)
            sum = n;
    }
    if (!flag)
        cout << sum;
    else
        cout << 0;
    return 0;
}
