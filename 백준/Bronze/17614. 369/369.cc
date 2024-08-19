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

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        m = i;
        while (m > 0)
        {
            if (m % 10 == 3 || m % 10 == 6 || m % 10 == 9)
                cnt++;
            m /= 10;
        }
    }
    cout << cnt;
    return 0;
}
