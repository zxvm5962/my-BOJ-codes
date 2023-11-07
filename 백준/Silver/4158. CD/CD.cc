#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    while (1)
    {
        cin >> n >> m;
        if (n == 0 && m == 0)
            break;
        vector<int> v;
        int num;

        while (n--)
        {
            cin >> num;
            v.push_back(num);
        }
        int cnt = 0;

        while (m--)
        {
            cin >> num;
            if (binary_search(v.begin(), v.end(), num) == true)
            {
                cnt++;
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}
