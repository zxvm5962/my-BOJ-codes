#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int sum = a + b + c + d;
    cout << sum / 60 << '\n'
         << sum % 60;
    return 0;
}
