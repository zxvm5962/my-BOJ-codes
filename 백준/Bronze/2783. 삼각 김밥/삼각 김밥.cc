#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    double n, m;
    double min;
    cin >> n >> m;
    min = n / m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        if (min > (n / m))
            min = n / m;
    }
    cout << fixed;
    cout.precision(2);
    cout << min * 1000;
    return 0;
}