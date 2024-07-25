#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t, n, m, k, l;
    cin >> t;
    while (t--)
    {
        int sum;
        cin >> n >> m >> k >> l;
        sum = m + k + l;
        cout << n << ' ' << sum << ' ';
        if (sum < 55)
        {
            cout << "FAIL\n";
            continue;
        }
        if (m < 11)
        {
            cout << "FAIL\n";
            continue;
        }
        if (k < 8)
        {
            cout << "FAIL\n";
            continue;
        }
        if (l < 12)
        {
            cout << "FAIL\n";
            continue;
        }
        cout << "PASS\n";
    }
    return 0;
}