#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, sum = 0, win, max = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = 0;
        for (int j = 0; j < 4; j++)
        {
            cin >> t;
            sum += t;
        }
        if(max < sum){
            max = sum;
            win = i + 1;
        }
    }
    cout << win << ' ' << max; 

    return 0;
}