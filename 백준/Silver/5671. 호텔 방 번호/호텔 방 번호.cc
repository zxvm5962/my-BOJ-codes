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

    int n, m;
    while (cin >> n >> m)
    {
        int t = m - n + 1, cnt = 0;
        while (t--)
        {
            vector<int> v(11);
            bool flag = true;
            string str = to_string(n);
            for (int i = 0; i < str.length(); i++)
            {
                if (v[str[i] - '0'] == 1)
                {
                    flag = false;
                    break;
                }
                v[str[i] - '0'] = 1;
            }
            if (flag == true)
                cnt++;
            v.clear();
            n++;
        }
        cout << cnt << '\n';
    }
    return 0;
}
