#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>

using namespace std;

map<long long, long long> yPos;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        long long x, y;
        cin >> x >> y;
        yPos[y - k * x]++;
    }

    long long cnt = 0;

    for (auto it = yPos.begin(); it != yPos.end(); it++)
    {
        cnt += (it->second) * (it->second - 1);
    }
    cout << cnt;

    return 0;
}