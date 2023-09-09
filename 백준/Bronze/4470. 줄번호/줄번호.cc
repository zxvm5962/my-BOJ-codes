#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    string str;
    cin >> N;
    cin.ignore();

    for (int i = 1; i <= N; i++)
    {
        getline(cin,str);
        cout << i << ". " << str << '\n';
    }

    return 0;
}