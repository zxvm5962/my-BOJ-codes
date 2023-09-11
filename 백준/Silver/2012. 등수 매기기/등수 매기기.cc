#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v;

    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += abs(i+1 - v[i]);
    }
    cout << sum;

    return 0;
}
