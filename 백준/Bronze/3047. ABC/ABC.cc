#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>

using namespace std;

vector<int> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k, sum = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    string str;
    cin >> str;
    for (int i = 0; i < 3; i++)
    {
        cout << v[str[i]- 'A'] << ' ';
    }
    

    return 0;
}
