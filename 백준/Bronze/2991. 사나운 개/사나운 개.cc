#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>

using namespace std;

int arr[2000];

void dog(int n, int m)
{
    int cnt1 = 0;

    for (int j = 1; j < 2000; j++)
    {
        arr[j]++;
        cnt1++;
        if (cnt1 == n)
        {
            j += m;
            cnt1 = 0;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, sum = 0;

    for (int i = 0; i < 2; i++)
    {
        cin >> n >> m;
        dog(n, m);
    }
    
    for (int i = 0; i < 3; i++)
    {
        cin >> n;
        cout << arr[n] << '\n';
    }
     

    return 0;
}