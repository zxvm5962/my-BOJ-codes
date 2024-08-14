#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <deque>

using namespace std;

vector<string> v(52);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0;
    double a, b, c, d, e, f = 0;
    string str;
    cin >> t >> n;
    while (t--)
    {
        cin >> m >> k;
        sum += m - k;
        if (sum > n)
        {
            if (cnt < sum - n)
                cnt = sum - n;
        }
    }
    cout << cnt;

    return 0;
}
