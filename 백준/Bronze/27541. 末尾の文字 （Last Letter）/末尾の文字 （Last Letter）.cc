#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <deque>

using namespace std;

vector<string> v(52);

int arr[201][201];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, max = 0;
    double a, b, c, d, e, f = 0;
    string str, s;
    cin >> t;
    cin >> str;
    if (str[t - 1] == 'G')
    {
        for (int i = 0; i < t - 1; i++)
        {
            cout << str[i];
        }
    }
    else
    {
        cout << str << 'G';
    }

    return 0;
}
