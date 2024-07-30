#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>

using namespace std;

vector<int> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, w, h, l;
    cin >> n >> w >> h >> l;
    int res = (h / l) * (w / l);
    if (res < n)
        cout << res;
    else
        cout << n;
        
    return 0;
}