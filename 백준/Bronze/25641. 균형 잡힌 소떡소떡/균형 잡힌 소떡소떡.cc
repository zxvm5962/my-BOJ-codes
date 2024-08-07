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
    long long n, m = 0, k = 0, l, res;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 's')
            m++;
        else
            k++;
    }
    int i = 0, cnt = 0;
    ;
    while (m != k)
    {
        if (str[i] == 's')
        {
            m--;
            cnt++;
        }
        else
        {
            k--;
            cnt++;
        }
        i++;
    }
    for (int j = cnt; j < n; j++)
    {
        cout << str[j];
    }
    

    return 0;
}