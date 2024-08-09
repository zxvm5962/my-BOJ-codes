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

    while (1)
    {
        getline(cin, str);
        if (str == "***")
            break;
        reverse(str.begin(), str.end());
        cout << str << '\n';
    }
    return 0;
}
