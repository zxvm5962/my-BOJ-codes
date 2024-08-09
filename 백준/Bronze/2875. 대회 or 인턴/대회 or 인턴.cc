#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>

using namespace std;

vector<int> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k, sum = 0;
    cin >> n >> m >> k;
    if (n % 2 == 1)
    {
        n--;
        k--;
    }
    int a, b;
    a = n / 2;
    b = m;
    while (k > 0)
    {
        if (a < b)
        {
            b--;
            k--;
        }
        else
        {
            a--;
            k -= 2;
        }
    }
    cout << min(a, b);

    return 0;
}