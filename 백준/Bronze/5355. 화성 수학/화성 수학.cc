#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <sstream>
#include <map>
#include <deque>
#include <queue>

using namespace std;

vector<long long> v(10000);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, maxV = 0, c, p = 0, minV = 1e8;
    string s, str;
    double a, b = 0;

    cin >> t;
    cin.ignore();
    while (t--)
    {
        cin >> a;
        cin.ignore();
        getline(cin, str);
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '@')
                a *= 3;
            else if (str[i] == '%')
                a += 5;
            else if (str[i] == '#')
                a -= 7;
        }
        cout << fixed;
        cout.precision(2);
        cout << a << '\n';
    }
}
