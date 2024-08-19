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

    cin >> n >> m;
    c = 1;
    for (int i = 1; i <= m; i++)
    {
        if (cnt == 2 * n)
        {
            c = -1;
        }
        cnt += c;
        if (cnt == 1)
            c = 1;
    }
    cout << cnt;
    return 0;
}
