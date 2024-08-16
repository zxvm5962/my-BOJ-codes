#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <deque>
#include <queue>

using namespace std;

int arr[201][201];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0;
    double a, b, d, e, f = 0;
 
    string str, s;
    char c;
    cin >> n >> m;
    vector<int> v;
    t = n;
    while (t--)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int i = 0;
    while (1)
    {
        if (v[i % n] < m++)
            break;
        i++;
    }
    cout << (i) % n + 1;

    return 0;
}
