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

vector<long long> v(10000);

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
        vector<int> w;
        cin >> n;
        if (n == 0)
            break;
        cin >> m;
        w.push_back(m);
        for (int i = 1; i < n; i++)
        {
            cin >> m;
            if (w.back() != m)
                w.push_back(m);
        }
        for (int i = 0; i < w.size(); i++)
        {
            cout << w[i] << ' ';
        }
        cout << "$\n";
        w.clear();
    }
}
