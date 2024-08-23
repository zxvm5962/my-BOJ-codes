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

vector<long long> v;
queue<int> q;

string name(int n)
{
    string str;
    if (n == 1)
        str = "Yakk";
    else if (n == 2)
        str = "Doh";
    else if (n == 3)
        str = "Seh";
    else if (n == 4)
        str = "Ghar";
    else if (n == 5)
        str = "Bang";
    else
        str = "Sheesh";
    return str;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, maxV = 0, c, p = 0, minV = 1e8;
    string s, str = "";
    double a, b = 0;
    cin >> t;
    for (int i = 0; i < 31; i++)
    {
        v.push_back(pow(2, i));
    }

    for (int i = 0; i < 31; i++)
    {
        if (t == v[i])
        {
            cout << 1;
            return 0;
        }
    }
    cout << 0;
}
