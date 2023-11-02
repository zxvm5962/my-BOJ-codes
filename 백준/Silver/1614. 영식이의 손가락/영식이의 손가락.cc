#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long f, su;

    cin >> f >> su;

    long long int cnt = 0;
    if (f == 1)
    {
        cnt = 8 * su;
    }
    else if (f == 2)
    {
        if (su % 2 == 0)
        {
            cnt = 1 + (8 * su / 2);
        }
        else
        {
            cnt = (8 * ((su / 2) + 1)) - 1;
        }
    }
    else if (f == 3)
    {
        cnt = 2 + (su * 4);
    }
    else if (f == 4)
    {
        if (su % 2 == 0)
        {
            cnt = 3 + (8 * su / 2);
        }
        else
        {
            cnt = (8 * ((su / 2) + 1)) - 3;
        }
    }
    else if (f == 5)
    {
        cnt = 4 + (su * 8);
    }

    cout << cnt << endl;

    return 0;
}
