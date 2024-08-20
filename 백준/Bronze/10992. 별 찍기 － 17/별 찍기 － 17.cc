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
        for (int j = t; j > i + 1; j--)
        {
            cout << ' ';
        }
        cout << "*";
        if (i == t - 1)
        {
            for (int j = 0; j < 2 * i; j++)
            {
                cout << '*';
            }
        }
        else
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << ' ';
            }
            if (i > 0)
                cout << "*\n";
            else
                cout << '\n';
        }
    }
}
