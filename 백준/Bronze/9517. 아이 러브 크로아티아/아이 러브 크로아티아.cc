#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <deque>
#include <queue>

using namespace std;

int arr[201][201];

vector<long long> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, max = 0;
    string str, s;
    int min = 1e6;

    cin >> n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> m >> s;
        sum += m;
        if (sum >= 210)
            continue;
        if (s == "T")
        {
            n++;
        }
        if (n > 8)
            n -= 8;
    }
    cout << n;

    return 0;
}
