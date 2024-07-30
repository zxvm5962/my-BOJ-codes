#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>

using namespace std;

vector<int> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> m;
        if (m % 2 == 0)
            cout << m << " is even\n";
        else
            cout << m << " is odd\n";
    }

    return 0;
}