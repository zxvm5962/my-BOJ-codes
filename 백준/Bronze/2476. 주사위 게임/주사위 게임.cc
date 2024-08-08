#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>

using namespace std;

vector<int> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, k, l, temp;
    int maxv = 0;
    cin >> n;
    while (n--)
    {
        int sum = 0;
        cin >> m >> k >> l;
        if (m == k && k == l)
        {
            sum += m * 1000 + 10000;
        }
        else if (m != k && k != l && m != l)
        {
            sum += max(max(m, k), l) * 100;
        }
        else
        {
            if (m == k)
            {
                sum += 1000 + m * 100;
            }
            else if (m == l)
            {
                sum += 1000 + m * 100;
            }
            else
                sum += 1000 + k * 100;
        }
        if (maxv < sum)
            maxv = sum;
    }
    cout << maxv;

    return 0;
}