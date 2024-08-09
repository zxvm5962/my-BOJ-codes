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
    double a, last = -20;
    while (1)
    {
        cin >> a;
        if (a == 999)
            break;
        if (last != -20)
        {
            cout << fixed;
            cout.precision(2);
            cout << a - last << '\n';
        }
        last = a;
    }

    return 0;
}
