#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    int idx;

    cin >> str >> idx;
    
    cout << str[idx - 1];

    return 0;
}