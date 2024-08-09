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
    cin >> t >> n;
    while (t--)
    {
        cin >> m;
        v.push_back(m);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        if(n >= v[i]){
            n++;
        }
    }
    cout << n;
    

    return 0;
}
