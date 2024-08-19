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
    long long n, m, k = 0, sum = 0, cnt = 0, max = 0;
    double res, a, b, e = 0;
    string str, s;
    int min = 1e6;

    for (int i = 0; i < 3; i++)
    {
        cin >> a >> b;
        double q = 10 * a, w = 10 * b;
        if (q >= 5000)
            q -= 500;
        res = w / q;
        if (e < res)
        {
            e = res;
            k = i + 1;
        }
    }
    if (k == 1)
        cout << "S";
    else if (k == 2)
        cout << "N";
    else
        cout << "U";

    return 0;
}
