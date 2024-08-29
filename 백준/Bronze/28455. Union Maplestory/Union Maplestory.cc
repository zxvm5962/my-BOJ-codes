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

    vector<int> w;
    cin >> t;
    while (t--)
    {
        cin >> c;
        w.push_back(c);
    }
    sort(w.begin(), w.end(), greater<int>());
    for (int i = 0; i < w.size() && i < 42; i++)
    {
        sum += w[i];
        if (w[i] >= 250)
            cnt += 5;
        else if (w[i] >= 200)
            cnt += 4;
        else if (w[i] >= 140)
            cnt += 3;
        else if (w[i] >= 100)
            cnt += 2;
        else if (w[i] >= 60)
            cnt += 1;
    }
    cout << sum << ' ' << cnt;
}