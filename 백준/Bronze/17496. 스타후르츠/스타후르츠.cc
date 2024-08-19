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

    cin >> n >> t >> c >> p;
    int now = 1;
    while (now <= n - t)
    {
        sum += c * p;
        now += t;
    }
    cout << sum;
    return 0;
}
