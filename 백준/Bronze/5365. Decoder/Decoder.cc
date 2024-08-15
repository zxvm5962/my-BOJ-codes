#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <deque>

using namespace std;

int arr[201][201];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0;
    double a, b, c, d, e, f = 0;
    bool flag = false;
    string str, s;

    cin >> t >> str;
    t--;
    s = str;
    cout << str[0];
    while (t--)
    {
        cin >> str;
        if (str.length() >= s.length())
            cout << str[s.length() - 1];
        else cout << ' ';
        s = str;
    }
    return 0;
}
