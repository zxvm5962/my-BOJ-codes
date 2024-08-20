#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <deque>
#include <queue>

using namespace std;

vector<long long> v(100001);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, max = 0, c, p;
    string str, s;
    double a, b;

    cin >> t;
    while (t--)
    {
        cin >> n >> s >> m;
        cnt++;
        if (s == "+")
            k = n + m;
        else
            k = n - m;
        cin >> s >> m;
        if (k == m)
            cout << "Case " << cnt << ": YES\n";
        else
            cout << "Case " << cnt << ": NO\n";
    }
}
