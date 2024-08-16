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
    cin >> t >> n;

    for (int j = 1; j <= n; j++)
    {
        long long A = -6 * pow(j, 4) + t * pow(j, 3) + 2 * pow(j, 2) + j;
        if (A <= 0)
        {
            cout << "The balloon first touches ground at hour: " << j;
            break;
        }
        if (j == n)
            cout << "The balloon does not touch ground in the given time.";
    }

    return 0;
}
