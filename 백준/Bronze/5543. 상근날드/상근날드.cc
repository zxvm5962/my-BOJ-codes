#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int minb = 2001, mind = 2001;
    int burger, drink;
    for (int i = 0; i < 3; i++)
    {
        cin >> burger;
        if (minb > burger)
            minb = burger;
    }
    for (int i = 0; i < 2; i++)
    {
        cin >> drink;
        if (mind > drink)
            mind = drink;
    }
    cout << minb + mind - 50;

    return 0;
}
