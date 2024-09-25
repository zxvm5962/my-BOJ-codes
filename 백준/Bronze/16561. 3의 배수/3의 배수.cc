#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    n /= 3;
    n -= 2;
    cout << n * (n + 1) / 2;

    return 0;
}