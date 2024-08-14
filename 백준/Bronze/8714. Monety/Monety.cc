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
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        if (n == 0)
            k++;
        else
            cnt++;
    }
    cout << min(k, cnt);

    return 0;
}
