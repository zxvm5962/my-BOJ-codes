#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <sstream>
#include <map>
#include <deque>
#include <queue>

using namespace std;

vector<long long> v(1000001);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, maxV = 0, c, p = 0, minV = 1e8;
    string s, str;
    double a, b = 0;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k;
        sum = 0;
        cnt++;
        while (n--)
        {
            cin >> c >> p;
            if (c <= m * k)
                sum += p;
        }
        cout << "Data Set " << cnt << ":\n" << sum << "\n\n";
    }
}
