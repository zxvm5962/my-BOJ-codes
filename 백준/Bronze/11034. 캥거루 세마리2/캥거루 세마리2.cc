#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, c;
    while (cin >> a >> b >> c)
    {
        int max;
        max = (c - b > b - a ? c - b : b - a);
        max--;
        cout << max << '\n';
    }
    return 0;
}
