#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int y0, m0, d0, y1, m1, d1;
    double a0, b0, a1, b1;

    cin >> y0 >> m0 >> d0 >> a0 >> b0;
    cin >> y1 >> m1 >> d1 >> a1 >> b1;
    int resY = 2 * y0 - y1, resM = 2 * m0 - m1, resD = 2 * d0 - d1;
    if (resD > 30)
    {
        resD -= 30;
        resM++;
    }
    else if (resD < 1)
    {
        resD += 30;
        resM--;
    }
    if (resM > 12)
    {
        resM -= 12;
        resY++;
    }
    else if (resM < 1)
    {
        resM += 12;
        resY--;
    }
    cout << resY << ' ' << resM << ' ' << resD << ' ';
    cout << fixed;
    cout.precision(3);
    cout << 2 * a0 - a1 << ' ' << 2 * b0 - b1;
    return 0;
}