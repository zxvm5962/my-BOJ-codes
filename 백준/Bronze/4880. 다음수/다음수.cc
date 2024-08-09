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
    string str;

    while (1)
    {
        cin >> n >> m >> k;
        if (n == 0 && m == 0 && k == 0)
        {
            break;
        }
        if (n + k == 2 * m)
        {
            cout << "AP " << 2 * k - m << '\n';
        }
        else
            cout << "GP " << k * k / m << '\n'; 
    }
    return 0;
}
