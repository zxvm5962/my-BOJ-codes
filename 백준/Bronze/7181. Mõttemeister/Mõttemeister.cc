#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <deque>

using namespace std;

vector<string> v(52);
int arr[1000001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, l, sum = 0, cnt = 0;
    double a, b, c, d, e, f = 0;
    string str, s;
    cin >> str;
    for (int i = 0; i < 4; i++)
    {
        arr[str[i]]++;
    }

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        k = 0;
        cnt = 0;
        cin >> s;
        for (int i = 0; i < 4; i++)
        {
            if (s[i] == str[i])
                cnt++;
        }
        for (int i = 0; i < 4; i++)
        {
            if (arr[s[i]] > 0)
                k++;
        }
        cout << k << ' ' << cnt << '\n';
    }

    return 0;
}
