#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str[101];
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    sort(str, str+n);

    cout << str[m - 1];


    return 0;
}
