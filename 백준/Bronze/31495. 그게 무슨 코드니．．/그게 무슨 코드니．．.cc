#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>

using namespace std;

vector<int> v(10);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long T, N, M, K;
    string str;

    getline(cin, str);
    if (str.length() < 2)
        cout << "CE";
    else if (str[0] == '"' && str[1] == '"')
        cout << "CE";
    else if (str.front() == '"' && str.back() == '"')
    {
        str = str.substr(1, str.length() - 2);
        if (str == " ")
        {
            cout << "CE";
            return 0;
        }
        cout << str;
    }
    else
        cout << "CE";

    return 0;
}
