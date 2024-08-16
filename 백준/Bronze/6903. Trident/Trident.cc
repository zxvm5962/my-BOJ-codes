#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <deque>

using namespace std;

int arr[201][201];

vector<string> v;

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
    cin >> t >> n >> k;
    for (int j = 0; j < t; j++)
    {
        cnt = 0;
        while (1)
        {
            cout << "*";
            cnt++;
            if (cnt == 3)
                break;
            for (int i = 0; i < n; i++)
            {
                cout << ' ';
            }
        }
        cout << '\n';
    }
    for (int i = 0; i < 2 * n + 3; i++)
    {
        cout << "*";
    }
    cout << '\n';
    for (int j = 0; j < k; j++)
    {
        for (int i = 0; i < 2 * n + 3; i++)
        {
            if (i == n + 1)
            {
                cout << "*";
                break;
            }
            else
                cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}
