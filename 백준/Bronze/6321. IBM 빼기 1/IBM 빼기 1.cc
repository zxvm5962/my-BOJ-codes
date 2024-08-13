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
    long long n, m, k = 0, sum = 0;
    double a, b, c, d, e, f = 0;
    string str;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> str;
        cout << "String #" << i + 1 << '\n';
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'Z')
                cout << 'A';
            else
                cout << (char)(str[i] + 1);
        }
        cout << "\n\n";
    }
    return 0;
}
