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
    cin >> n >> m;
    if (n >= 6)
    {
        cout << "Love is open door";
        return 0;
    }
    m = !m;
    for (int i = 1; i < n; i++)
    {
        cout << m << '\n';
        m = !m;
    }

    return 0;
}
