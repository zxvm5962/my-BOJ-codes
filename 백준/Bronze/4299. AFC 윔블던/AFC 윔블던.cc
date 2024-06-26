#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x, y;
    cin >> x >> y;

    for (int i = 0; i < 1001; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i + j == x && i - j == y)
            {
                cout << i << ' ' << j;
                return 0;
            }
        }
    }
    cout << -1;
}
