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

vector<long long> v(100001);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, max = 0, c, p;
    string str, s;
    double a, b = 0;

    cin >> t;
    v[0] = 1;
    for (int i = 0; i < t - 1; i++)
    {
        cin >> n;
        v[n+1] = i + 2;
    }
    for (int i = 0; i < t; i++)
    {
        cout<< v[i] << ' ';
    }
    
}
