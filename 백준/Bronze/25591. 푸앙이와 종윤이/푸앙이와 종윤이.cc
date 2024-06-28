#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, K;
    cin >> N >> M;
    int a, b, c, d, q, r;
    a = 100 - N;
    b = 100 - M;
    c = 100 - (a + b);
    d = a * b;
    q = d / 100;
    r = d % 100;

    cout << a << ' ' << b << ' ' << c << ' ' << d << ' '
         << q << ' ' << r << '\n'
         << c + q << ' ' << r;
}
