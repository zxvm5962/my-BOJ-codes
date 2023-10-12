#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, cnt = 0;
    cin >> n;
    string str;
    while (n--)
    {
        cin >> str;
        if(str.length() < 2){
            continue;
        }
        for (int i = 0; i < str.length() - 1; i++)
        {
            if (str.substr(i, 2) == "01" || str.substr(i, 2) == "OI")
            {
                cnt++;
                break;
            }
        }
    }
    cout << cnt;

    return 0;
}
