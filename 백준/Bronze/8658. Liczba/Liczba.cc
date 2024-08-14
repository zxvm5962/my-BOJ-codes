#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <deque>

using namespace std;

vector<string> v(52);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, l, sum = 0, cnt = 0, min = 1e9;
    double a, b, c, d, e, f = 0;
    string str, s;
    cin >> t;
    for (int i = 2; i < t; i++)
    {
        if (t % i != 0)
        {
            if (min > i)
            {
                min = i;
                break;
            }
        }
    }
    cout << min << ' ' << t-1;

    return 0;
}
