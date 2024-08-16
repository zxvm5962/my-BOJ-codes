#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <deque>
#include <queue>

using namespace std;

int arr[201][201];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0;
    string str, s;
    cin >> n;
    while (n--)
    {
        long long a;
        cin >> a;
        cout << a * (a + 1) * (2 * a + 1) / 6 << endl;
    }
    return 0;
}
