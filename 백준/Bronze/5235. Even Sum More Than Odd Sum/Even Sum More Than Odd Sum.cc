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
    long long n, m, k = 0, sum = 0, cnt = 0, oSum;
    string str, s;
    cin >> t;
    while (t--)
    {
        sum = 0;
        oSum = 0;
        cin >> n;
        while (n--)
        {
            cin >> m;
            if (m % 2 == 0)
            {
                sum += m;
            }
            else
                oSum += m;
        }
        if (sum > oSum)
            cout << "EVEN\n";
        else if (sum < oSum)
            cout << "ODD\n";
        else
            cout << "TIE\n";
    }
    return 0;
}
