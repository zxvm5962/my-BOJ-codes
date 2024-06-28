#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, M, K;
    cin >> T;
    cin.ignore();
    string str;
    while (T--)
    {
        getline(cin, str);
        if (str.back() != '.')
            cout << str << '.' << '\n';
        else
            cout << str << '\n';

    }
}
