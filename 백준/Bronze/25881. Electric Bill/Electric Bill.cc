#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>

using namespace std;

vector<int> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, k, num;
    cin >> n >> m >> k;
    while (k--)
    {
        int sum = 0;
        cin >> num;
        if (num > 1000)
        {
            sum += 1000 * n;
            sum += (num - 1000) * m;
        }
        else
            sum += num * n;

        cout << num << ' ' << sum << '\n';
    }

    return 0;
}