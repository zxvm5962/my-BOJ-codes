#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>

using namespace std;

vector<string> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    string str;
    cin >> n >> m;
    n *= 7;
    m *= 13;
    if (n > m)
        cout << "Axel";
    else if (n < m)
        cout << "Petra";
    else
        cout << "lika";
    return 0;
}