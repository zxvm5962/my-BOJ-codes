#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, cnt = 0;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << i << ' ';
        cnt++;
        if (cnt == 6)
        {
            cnt = 0;
            cout << "Go! ";
        }
        if (i == t && t % 6 != 0)
        {
            cout << "Go!";
        }
    }

    return 0;
}
