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

    int n, m, k, temp;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cin >> n;
    while (n--)
    {
        cin >> m >> k;
        temp = v[m - 1];
        v[m - 1] = v[k - 1];
        v[k - 1] = temp;
    }
    for (int i = 0; i < 3; i++)
    {
        if (v[i] == 1)
        {
            cout << i + 1;
            break;
        }
    }

    return 0;
}