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
    long long n, m, k, sum = 0;
    double a, b, c, d, e, f = 0;
    string str;
    while (1)
    {
        cin >> n >> str >> m;
        if (n == 0 && str == "W" && m == 0)
            break;
        if (str == "D")
        {
            cout << n + m << '\n';
        }
        else
        {
            if ((n - m) >= -200)
            {
                cout << n - m << '\n';
            }
            else
                cout << "Not allowed\n";
        }
    }

    return 0;
}
