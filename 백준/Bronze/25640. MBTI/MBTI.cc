#include <algorithm>
#include <iostream>
#include <deque>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, cnt = 0;
    string str, tmp;
    cin >> str >> t;

    while (t--)
    {
        cin >> tmp;
        if (str.compare(tmp) == 0)
        {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}
