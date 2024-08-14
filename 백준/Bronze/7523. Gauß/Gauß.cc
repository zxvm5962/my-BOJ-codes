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
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        if (n > 0)
            n--;
        if (m < 0)
            m++;
        n = abs(n);
        m = abs(m);
        n = n * (n + 1) / 2;
        m = m * (m + 1) / 2;
        cout << "Scenario #" << i + 1 << ":\n";
        if (n <= m)
            cout << abs(n - m) << "\n\n";
        else if (n > m)
            cout << -abs(n - m) << "\n\n";
    }

    return 0;
}
