#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <deque>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0;
    double a, b, c, d, e, f = 0;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> str;
        k = str.length() / 2;
        if (str[k - 1] == str[k])
            cout << "Do-it\n";
        else
            cout << "Do-it-Not\n";
    }
    return 0;
}
