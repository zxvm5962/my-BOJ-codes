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

    vector<int> r;
    vector<char> e;

    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            e.push_back(str[i]);
        else
            r.push_back(str[i]);
    }
    sort(e.begin(), e.end());
    sort(r.begin(), r.end(), greater<int>());
    for (int i = 0; i < 3; i++)
    {
        cout << e[i] << (char)r[i];
    }
    
}
