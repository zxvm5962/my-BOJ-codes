#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <deque>

using namespace std;

vector<string> v(52);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0;
    double a, b, c, d, e, f = 0;
    string str;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        getline(cin, str);
        reverse(str.begin(),str.end());
        cout << str << '\n';
    }

    return 0;
}
