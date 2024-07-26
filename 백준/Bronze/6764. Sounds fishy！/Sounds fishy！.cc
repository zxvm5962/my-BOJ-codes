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

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == b && b == c && c == d)
    {
        cout << "Fish At Constant Depth";
    }
    else if (a < b && b < c && c < d)
    {
        cout << "Fish Rising";
    }
    else if (a > b && b > c && c > d)
    {
        cout << "Fish Diving";
    }
    else
        cout << "No Fish";
    return 0;
}