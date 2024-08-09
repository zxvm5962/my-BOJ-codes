#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, sum = 0;
    cin >> n >> m;
    int a, b, c, d;
    for (int i = 0; i < max(n, m) + 4; i += 4)
    {
        if (i - n < 4 && i - n >= 0)
        {
            a = i - n;
            c = i / 4;
        }
        if (i - m < 4 && i - m >= 0)
        {
            b = i - m;
            d = i / 4;
        }
    }
    sum += abs(d - c);
    sum += abs(b - a);
    cout << sum;

    return 0;
}