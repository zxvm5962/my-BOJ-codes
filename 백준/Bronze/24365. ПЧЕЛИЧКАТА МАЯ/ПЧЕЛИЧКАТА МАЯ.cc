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

    int n, m, k, Y = 0, M = 0;
    cin >> n >> m >> k;
    Y = (n + m + k) / 3;
    while (m < Y)
    {
        k--;
        m++;
        M++;
    }
    while (m > Y)
    {
        m--;
        n++;
        M++;
    }
    while (k > Y)
    {
        k--;
        n++;
        M += 2;
    }

    cout << M;
    return 0;
}