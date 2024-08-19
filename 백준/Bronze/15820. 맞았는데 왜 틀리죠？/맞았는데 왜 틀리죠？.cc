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
    cin >> t >> n;
    while (t--)
    {
        cin >> m >> k;
        if (m != k)
        {
            cout << "Wrong Answer";
            return 0;
        }
    }
    while (n--)
    {
        cin >> m >> k;
        if (m != k)
        {
            cout << "Why Wrong!!!";
            return 0;
        }
    }
    cout << "Accepted";

    return 0;
}
