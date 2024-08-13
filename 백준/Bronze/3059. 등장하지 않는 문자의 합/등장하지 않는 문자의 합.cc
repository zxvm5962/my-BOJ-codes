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
    long long n, m, k, sum = 0;
    double a, b, c, d, e, f = 0;
    string str;
    cin >> t;
    while (t--)
    {
        int arr[200] = {0};
        cin >> str;
        int sum = 0;
        for (int i = 0; i < str.length(); i++)
        {
            arr[str[i]]++;
        }
        for (int i = 'A'; i <= 'Z'; i++)
        {
            if (arr[i] == 0)
            {
                sum += i;
            }
        }
        cout << sum << '\n';
    }

    return 0;
}
