#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <deque>
#include <queue>

using namespace std;

vector<long long> v(20001);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, max = 0;
    string str, s;
    int min = 1e6;
    cin >> t >> m;
    cin >> n;
    k = n;
    for (int i = 1; i < t; i++)
    {
        cin >> n;
        if (k - m >= n)
            cnt++;
        k = n;
    }
    cout << cnt;
    return 0;
}
