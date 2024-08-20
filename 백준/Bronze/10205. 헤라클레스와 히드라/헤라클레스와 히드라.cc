#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <deque>
#include <queue>

using namespace std;

vector<long long> v(100001);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, max = 0, c, p;
    string str, s;
    cin >> t;
    double a, b;
    while (t--)
    {
        cin >> n;
        cin >> str;
        k++;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'c')
                n++;
            else
                n--;
        }
        cout << "Data Set " << k << ":\n";
        cout << n << "\n\n";
    }
}
