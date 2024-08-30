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
    string str, s;
    double a, b = 0;
    vector<double> w;

    cin >> t >> n;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> m;
            if (m == 1)
                v[j + 1]++;
        }
    }
    k = t + 1;
    while (k--)
    {
        for (int i = 1; i <= n; i++)
        {
            if (v[i] == k)
                cout << i << ' ';
        }
    }
}
