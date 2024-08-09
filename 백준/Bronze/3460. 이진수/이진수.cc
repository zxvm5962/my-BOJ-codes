#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>

using namespace std;

vector<int> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k, sum = 0;
    cin >> t;
    while (t--)
    {
        int cnt = 0;
        cin >> n;
        while (n > 0)
        {
            if (n % 2 == 1)
            {
                cout << cnt << ' ';
            }
            n /= 2;
            cnt++;
        }
    }

    return 0;
}
