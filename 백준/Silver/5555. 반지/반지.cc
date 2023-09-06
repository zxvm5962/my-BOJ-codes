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

    string str, ring;
    int n, cnt = 0;
    cin >> str >> n;

    while (n--)
    {
        cin >> ring;
        for (int i = 0; i < 10; i++)
        {

            if (i > 10 - str.length())
            {
                if (str.compare(ring.substr(i, 10 - i) + ring.substr(0, i - 10 + str.length())) == 0)
                {
                    cnt++;
                    break;
                }
            }
            else
            {
                if (str.compare(ring.substr(i, str.length())) == 0)
                {
                    cnt++;
                    break;
                }
            }
        }
    }
    cout << cnt;

    return 0;
}
