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

    int n, m = 0, k, temp;
    int sum = 0;
    cin >> n;
    while (n--)
    {
        if (m > 0)
        {
            sum--;
        }
        cin >> m;

        sum += m;
    }
    cout << sum;

    return 0;
}