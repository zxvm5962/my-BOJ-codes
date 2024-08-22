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

    for (int i = 1;; i++)
    {
        cin >> n >> m;
        if (n == 0 && m == 0)
            break;
        while (1)
        {
            cin >> s >> k;

            if (s == "#")
                break;
            if (m <= 0)
                continue;
            if (s == "F")
                m += k;
            else
                m -= k;
        }

        if (m > n / 2 && m < 2 * n)
            cout << i << " :-)\n";
        else if (m <= 0)
            cout << i << " RIP\n";
        else
            cout << i << " :-(\n";
    }
}
