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

    while (1)
    {
        cin >> n >> m >> t >> k;
        if (n == 0 && m == 0 && t == 0 && k == 0)
            break;
        cout << t - m << ' ' << k - n  << '\n';
    }
}
