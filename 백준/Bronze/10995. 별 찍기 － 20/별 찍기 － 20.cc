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
    double a, b = 0;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        if (i % 2 == 0)
            for (int j = 0; j < 2 * t - 1; j++)
            {
                if (j % 2 == 1)
                    cout << ' ';
                else
                    cout << '*';
            }
        else
            for (int j = 0; j < 2 * t; j++)
            {
                if (j % 2 == 1)
                    cout << '*';
                else
                    cout << ' ';
            }
        cout << '\n';
    }
}
