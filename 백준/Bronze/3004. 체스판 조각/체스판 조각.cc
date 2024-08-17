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

vector<long long> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, max = 0;
    string str, s;
    int min = 1e6;

    cin >> n;
    v.push_back(2);
    k = 1;
    for (int i = 1; i < n; i++)
    {
        v.push_back(v[k - 1] + i + 1);
        k++;
        v.push_back(v[k - 1] + i + 1);
        k++;
    }
    cout << v[n - 1];

    return 0;
}
