#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <deque>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k, sum = 0;
    double a, b, c, d, e, f = 0;
    string str;
    while (1)
    {
        cin >> str;
        if (str == "EOI")
            break;
        if (str == "Binders")
            f += 22.50;
        else if (str == "Paper")
            f += 57.99;
        else if (str == "Printer")
            f += 120.50;
        else if (str == "Planners")
            f += 31.25;
        else if (str == "Calendar")
            f += 10.95;
        else if (str == "Notebooks")
            f += 11.20;
        else
            f += 66.95;
    }
    cout << fixed;
    cout.precision(2);
    cout << "$" << f;
    return 0;
}
