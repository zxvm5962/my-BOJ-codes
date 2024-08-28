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

    cin >> n >> m >> k;
    v[n]++;
    v[m]++;
    v[k]++;
    v[n + m]++;
    v[n + k]++;
    v[m + k]++;
    for (int i = 0; i < 2001; i++)
    {
        if (v[i] > 1)
        {
            cout << "S";
            return 0;
        }
    }
    cout << "N";
}
