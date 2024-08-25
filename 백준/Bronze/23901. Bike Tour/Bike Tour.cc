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
    cin >> t;
    while (t--)
    {
        vector<int> w(101);
        cnt = 0;
        k++;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (w[i] > w[i - 1] && w[i] > w[i + 1])
                cnt++;
        }
        cout << "Case #" << k << ": " << cnt << '\n';
        w.clear();
    }
}
