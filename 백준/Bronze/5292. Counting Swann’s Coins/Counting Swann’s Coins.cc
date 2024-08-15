#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <deque>

using namespace std;

int arr[201][201];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0;
    double a, b, c, d, e, f = 0;

    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << "DeadMan\n";
        }
        else if (i % 3 == 0)
        {
            cout << "Dead\n";
        }
        else if (i % 5 == 0)
        {
            cout << "Man\n";
        }
        else
            cout << i << ' ';
    }

    return 0;
}
