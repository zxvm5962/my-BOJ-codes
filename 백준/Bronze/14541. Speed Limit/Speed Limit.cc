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

vector<long long> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, maxV = 0, c, p = 0, minV = 1e8;
    string s, str = "";
    double a, b = 0;
    while (1)
    {
        cin >> t;
        if (t == -1)
            break;
        sum = 0;
        k = 0;
        while (t--)
        {
            cin >> n >> m;
            sum += abs(k - m) * n;
            k = m;
        }
        cout << sum << " miles\n";
    }
}
