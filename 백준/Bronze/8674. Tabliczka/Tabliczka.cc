#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, m, k;
    cin >> n >> m;
    if (n % 2 == 1 && m % 2 == 1)
    {
        cout << min(n, m);
    }
    else
        cout << 0;
    return 0;
}