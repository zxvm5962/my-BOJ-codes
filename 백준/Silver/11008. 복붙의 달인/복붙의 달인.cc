#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    string word, str;
    while (t--)
    {
        int cnt = 0;
        cin >> word >> str;
        for (int i = 0; i < word.length(); i++)
        {
            if (i > word.length() - str.length())
            {
                cnt++;
            }
            else
            {
                string tmp = word.substr(i,str.length());
                if (tmp.compare(str) == 0)
                {
                    cnt++;
                    i += str.length() - 1;
                }
                else
                {
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}
