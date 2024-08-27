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

vector<long long> v(1000001);
vector<long long> w;

string FA(string str)
{
    int a = str[0] - '0';
    a *= str.length();

    return to_string(a);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, maxV = 0, c, p = 0, minV = 1e8;
    string s, str;
    double a, b = 0;
    cin >> str;

    for (int i = 0; i < 10; i++)
    {
        str = FA(str);
    }
    if (str == FA(str))
        cout << "FA";
    else
        cout << "NFA";
}
