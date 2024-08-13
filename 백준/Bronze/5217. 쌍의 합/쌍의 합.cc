#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <deque>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k, sum = 0;
    double a, b, c, d, e, f = 0;
    string str;
    cin >> t;
    while (t--)
    {
        deque<pair<int, int>> p;
        cin >> n;
        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (i + j == n)
                {
                    p.push_back({i, j});
                }
            }
        }
        cout << "Pairs for " << n << ": ";
        while (!p.empty())
        {
            cout << p.front().first << ' ' << p.front().second;
            p.pop_front();
            if (p.size() > 0)
                cout << ", ";
        }
        cout << '\n';
    }
    return 0;
}
