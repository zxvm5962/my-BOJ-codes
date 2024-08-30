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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, maxV = 0, c, p = 0, minV = 1e8;
    string str, s;
    double a, b = 0;
    vector<double> w;

    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        v[str[i]]++;
    }
    sort(v.begin() + 'a', v.begin() + 'z' + 1, greater<int>());
    for (int i = 'c'; i <= 'z'; i++)
    {
        sum += v[i];
    }
    cout << sum;
}
