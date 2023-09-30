#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x, a, b;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> x;
        cout << a * (x-1) + b << '\n';
    }

    return 0;
}
