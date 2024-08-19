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
    string str, s;
    int min = 1e6;
    cin >> n >> t;
    while (t--)
    {
        cin >> m;
        if (m % 2 == 0)
            sum += m / 2;
        else
            sum += m / 2 + 1;
    }
    if (sum >= n)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
