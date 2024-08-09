#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>

using namespace std;

vector<pair<int, int>> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k, sum = 0;
    cin >> t;
    double a, b, c, d, e, f = 0;
    while (t--)
    {
        cin >> a >> b >> c >> d >> e;
        f += a * 350.34 + b * 230.9 + c * 190.55 + d * 125.3 + e * 180.9;
        cout << fixed;
        cout.precision(2);
        cout << "$" << f << '\n';
        f = 0;
    }

    return 0;
}
