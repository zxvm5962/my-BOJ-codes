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
    double n;
    cin >> n;
    double res;
    res = n / 100 + 25;
    if (res < 100)
        cout << "100.00";
    else if (res > 2000)
        cout << "2000.00";
    else 
    {
        cout << fixed;
        cout.precision(2);
        cout << res;
    }

    return 0;
}