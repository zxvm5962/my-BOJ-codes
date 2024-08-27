#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <sstream>
#include <map>
#include <deque>
#include <queue>

using namespace std;

vector<long long> v(10000);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, maxV = 0, c, p = 0, minV = 1e8;
    string s, str;
    double a, b = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> s >> str;
            if (s == str)
                continue;
            else if (s == "R" && str == "S")
                cnt++;
            else if (s == "S" && str == "P")
                cnt++;
            else if (s == "P" && str == "R")
                cnt++;
            else
                k++;
        }
        if (cnt > k)
            cout << "Player 1\n";
        else if (cnt < k)
            cout << "Player 2\n";
        else
            cout << "TIE\n";
        cnt = 0, k = 0;
    }
}
