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
    long long n, m, k = 0, sum = 0, cnt = 0;
    double a, b, c, d, e, f = 0;
    string str;
    while (1)
    {
        cin >> n;
        if (n == 0)
            break;
        sum = 0;
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
                sum += i;
        }
        if (sum == n)
            cout << n << " PERFECT\n";
        else if (sum < n)
            cout << n << " DEFICIENT\n";
        else
            cout << n << " ABUNDANT\n";
    }

    return 0;
}
