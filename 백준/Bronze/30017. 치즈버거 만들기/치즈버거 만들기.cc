#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;

    if (a - 1 <= b)
    {
        cout << 2 * a - 1;
    }
    else
    {
        cout << 2 * b + 1;
    }

    return 0;
}