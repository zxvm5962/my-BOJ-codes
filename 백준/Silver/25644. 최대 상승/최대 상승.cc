#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, num, min = 1e9 + 1, max = 0, maxv = 0, res;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> num;
        if (min > num)
        {
            min = num;
            max = 0;
        }
        if (max < num)
            max = num;

        res = max - min;
        if (maxv < res)
            maxv = res;
    }

    cout << maxv;
    return 0;
}

// 3 2 7 1 4
