#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>

using namespace std;

vector<pair<int, int>> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k, sum = 0;
    cin >> t;
    double a, b, c, d, e, f = 0;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i > 0 && i < n - 1 && j > 0 && j < n - 1){
                    cout << 'J';
                }
                else 
                cout << "#";
            }
            cout << '\n';
        }
        cout << '\n';
    }

    return 0;
}
