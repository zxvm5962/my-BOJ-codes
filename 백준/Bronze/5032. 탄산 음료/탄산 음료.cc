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

vector<long long> v(10000);

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
    sum = n + m;
    while (1)
    {
        p = sum / k;
        cnt = sum % k + p;
        maxV += p;
        if (cnt < k)
            break;
        sum = cnt;
    }
    cout << maxV;
}
