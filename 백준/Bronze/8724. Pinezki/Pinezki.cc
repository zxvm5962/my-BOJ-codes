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
    for (int i = 0; i < t; i++)
    {
        cin >> v[i];
    }
    if (t == 1 && v[0] == 0)
    {
        cout << 0;
        return 0;
    }
    for (int i = 1; i < t; i++)
    {
        if (v[i - 1] == v[i] && v[i] == 1)
        {
            cnt++;
            if (maxV < cnt)
                maxV = cnt;
        }
        else
            cnt = 0;
    }
    cout << maxV + 1;
}
