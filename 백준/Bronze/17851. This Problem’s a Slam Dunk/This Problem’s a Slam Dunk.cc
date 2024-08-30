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
    vector<int> w;
    vector<int> r;

    for (int i = 0; i < 5; i++)
    {
        cin >> n;
        w.push_back(n);
    }
    sort(w.begin(), w.end());
    for (int i = 0; i < 5; i++)
    {
        cin >> n;
        r.push_back(n);
    }
    sort(r.begin(), r.end());

    for (int i = 0; i < 5; i++)
    {
        if (w[i] > r[i])
            cnt++;
    }
    cout << cnt;
}
