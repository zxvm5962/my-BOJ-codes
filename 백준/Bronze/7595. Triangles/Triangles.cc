#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    while (1)
    {
        cin >> t;
        if (t == 0)
            break;
        for (int i = 0; i < t; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << '*';
            }
            cout << '\n';
        }
    }

    return 0;
}
