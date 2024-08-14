#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <deque>

using namespace std;

vector<long long> v;

int arr[201][201];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, max = 0;
    double a, b, c, d, e, f = 0;

    cin >> t;
    for (int i = 1; i <= 2 * t - 1; i++)
    {
        cnt = 0;
        for (int j = 0; j < abs(t - i); j++)
        {
            cout << ' ';
            cnt++;
        }
        for (int j = 0; j < t - cnt; j++)
        {
            cout << '*';
        }
        cout << "\n";
    }

    return 0;
}
