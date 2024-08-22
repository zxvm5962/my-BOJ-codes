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

vector<long long> v(100001);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, max = 0, c, p, min = 1e8;
    string str, s;
    double a, b = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (v[n] > 0)
            cnt++;
        else
            v[n]++;
    }
    cout << cnt;
}
