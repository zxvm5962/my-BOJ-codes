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

bool customSort(const pair<int, string> &a, const pair<int, string> &b)
{
    if (a.first == b.first)
    {
        return a.second < b.second;
    }
    return a.first > b.first;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, maxV = 0, c, p = 0, minV = 1e8;
    string str, s;
    double a, b = 0;

    vector<pair<int,string>> w;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> str >> n;
        w.push_back({n, str});
    }
    sort(w.begin(), w.end(), customSort);

    cout << w[0].second;
    

}