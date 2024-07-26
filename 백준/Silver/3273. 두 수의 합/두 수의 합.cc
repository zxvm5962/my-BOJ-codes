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

    int n, num, x;
    cin >> n;
    while (n--)
    {
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    cin >> x;
    int f = 0, e = v.size() - 1, cnt = 0;
    
    while (f < e)
    {
        int sum = v[f] + v[e];
        if (sum == x)
        {
            cnt++;
            f++;
        }
        else if(sum < x){
            f++;
        }
        else
            e--;
    }
    cout << cnt;
    return 0;
}