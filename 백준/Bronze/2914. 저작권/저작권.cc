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
    cin >> n >> m;

    for (int i = n; i <= n * m; i++)
    {
        if (i > n * (m - 1)){
            cout << i;
            break;
        }
    }

    return 0;
}
