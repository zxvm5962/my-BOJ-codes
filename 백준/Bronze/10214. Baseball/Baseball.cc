#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <deque>
#include <queue>

using namespace std;

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
    cin >> t;
    while (t--)
    {
        sum = 0;
        cnt = 0;
        for (int i = 0; i < 9; i++)
        {
            cin >> n >> m;
            sum += n;
            cnt += m;
        }
        if (sum > cnt)
        {
            cout << "Yonsei\n";
        }
        else if (cnt < sum)
        {
            cout << "Korea\n";
        }
        else
            cout << "Draw\n";
    }
    return 0;
}
