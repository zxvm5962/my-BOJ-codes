#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a, b, c, d;
    cin >> a >> b >> c >> d;
    a += b;
    c += d;
    long long r = stoll(a);
    long long w = stoll(c);
    r += w;
    cout << r;

    return 0;
}