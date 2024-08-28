#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <sstream>
#include <map>
#include <deque>
#include <queue>

using namespace std;

vector<long long> v(1000001);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, maxV = 0, c, p = 0, minV = 1e8;
    string s, str;
    double a, b = 0;
    while (1)
    {
        cin >> t;
        k++;
        vector<double> w;
        if (t == 0)
            break;
        for (int i = 0; i < t; i++)
        {
            cin >> a;
            w.push_back(a);
        }
        cout << fixed;
        cout.precision(1);
        if (t % 2 == 1)
            cout << "Case " << k << ": " << w[t / 2] << "\n";
        else
            cout << "Case " << k << ": " << (w[t / 2] + w[t / 2 - 1]) / 2 << "\n";
    }
}
