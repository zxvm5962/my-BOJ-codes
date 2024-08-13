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
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k;
        if (n > m - k)
        {
            cout << "do not advertise\n";
        }
        else if (n < m - k)
            cout << "advertise\n";
        else
            cout << "does not matter\n";
    }
    return 0;
}
