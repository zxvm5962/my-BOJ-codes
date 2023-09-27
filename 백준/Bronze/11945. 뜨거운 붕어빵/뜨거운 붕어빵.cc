#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    string str;
    string tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        for (int j = str.length() - 1; j >= 0; j--)
        {
            cout << str[j];
        }
        cout << "\n";
    }

    return 0;
}
