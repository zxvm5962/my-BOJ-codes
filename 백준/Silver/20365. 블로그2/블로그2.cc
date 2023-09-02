#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<char> v;
    int n;
    cin >> n;
    char color;
    cin >> color;
    v.push_back(color);
    for (int i = 1; i < n; i++)
    {
        cin >> color;
        if (v.back() != color)
        {
            v.push_back(color);
        }
    }
    cout << (v.size() / 2) +1;

    return 0;
}
