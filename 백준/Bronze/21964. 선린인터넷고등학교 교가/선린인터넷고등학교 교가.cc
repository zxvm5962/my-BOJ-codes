#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    int n;
    cin >> n >> str;
    cout << str.substr(str.length()-5,5);

    return 0;
}
