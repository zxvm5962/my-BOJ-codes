#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <deque>

using namespace std;

vector<string> v(52);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0;
    double a, b, c, d, e, f = 0;
    string str;
    while (1)
    {
        f++;
        cin >> n;
        if (n == 0)
            break;
        if (n % 2 == 0)
        {
            cout << f << ". " << "even " << n / 2 << "\n";
        }
        else
        {
            cout << f << ". " << "odd " << n / 2 << "\n";
        }
    }

    return 0;
}
