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
    string str, s;
    double a, b = 0;
    vector<double> w;

    cin >> t;
    while (t--)
    {
        cin >> a;
        w.push_back(a);
    }

    sort(w.begin(), w.end());
    cout << fixed;
    cout.precision(2);
    cout << w[1];
}
