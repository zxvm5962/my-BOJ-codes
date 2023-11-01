#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    string str;
    vector<long long> v;
    while (t--)
    {
        cin >> str;
        reverse(str.begin(), str.end());
        long long num = stol(str);
        v.push_back(num);
    }
    sort(v.begin(), v.end());

    for (auto a : v)
        cout << a << '\n';
    return 0;
}
