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
    string str;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        max = 0;
        for (int j = 0; j < t; j++)
        {
            cin >> arr[i][j];
            if (max < arr[i][j])
                max = arr[i][j];
        }
        sum += max;
    }

    cout << sum;

    return 0;
}
