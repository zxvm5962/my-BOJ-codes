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
    int n;
    long long f = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
        f %= 10;
    }
    cout << f;

    return 0;
}