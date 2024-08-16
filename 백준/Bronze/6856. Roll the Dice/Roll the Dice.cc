#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <deque>

using namespace std;

int arr[201][201];

vector<string> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0;
    double a, b, c, d, e, f = 0;
    bool flag = false;
    string str, s;
    cin >> t >> n;
    for (int i = 1; i <= t; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i + j == 10)
                cnt++;
        }
    }
    if (cnt == 1)
        cout << "There is " << cnt << " way to get the sum 10.";
    else
        cout << "There are " << cnt << " ways to get the sum 10.";

    return 0;
}
