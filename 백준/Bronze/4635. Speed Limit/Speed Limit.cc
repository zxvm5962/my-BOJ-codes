#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k, sum = 0;
    double a, b, c, d, e, f = 0;
    string str;
    while (1)
    {
        cin >> t;
        if (t == -1)
            break;
        int sum = 0;
        while (t--)
        {
            cin >> n >> m;
            if (sum > 0)
            {
                sum += n * (m - k);
            }
            else
                sum += n * m;
            k = m;
        }
        cout << sum << " miles\n";
    }

    return 0;
}
