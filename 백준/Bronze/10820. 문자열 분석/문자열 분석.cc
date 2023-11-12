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

    while (getline(cin, str))
    {
        int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                cnt1++;
            else if (str[i] >= 'A' && str[i] <= 'Z')
                cnt2++;
            else if (str[i] >= '0' && str[i] <= '9')
                cnt3++;
            else
                cnt4++;
        }
        cout << cnt1 << ' ' << cnt2 << ' ' << cnt3 << ' ' << cnt4 << '\n';
    }
    return 0;
}
