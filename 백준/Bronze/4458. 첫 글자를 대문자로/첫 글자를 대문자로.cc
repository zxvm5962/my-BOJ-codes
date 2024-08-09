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
    string str;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        getline(cin, str);
        if (str[0] > 'Z')
            str[0] -= 32;
        cout << str << '\n';
    }
    return 0;
}
