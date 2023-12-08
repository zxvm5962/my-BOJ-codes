#include <algorithm>
#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    int a, b;
    while (t--)
    {
        cin >> a >> b;
        cout << a * b / gcd(a, b) << ' ' << gcd(a, b) << '\n';
    }
    return 0;
}

